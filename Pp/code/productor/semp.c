#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<semaphore.h>
#define BUFLEN 512
#include "image.h"
#include "lodepng.h"
int kill=0;
image_t* buf1= NULL;
image_t* buf2= NULL;
int imageCount=0;
int cnt1=0;
int cnt2=0;
int end1= 0;// marca el fin del prod1
int end2=0;
int count=0;
FILE* imlist=NULL;
int b1=0;
int md=0;
pthread_mutex_t mutex_p1=PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t mutex_p2=PTHREAD_MUTEX_INITIALIZER;
int b2=0;
int nthr=0;
 
sem_t s1,s2,s3;
void print_help(void){
    fprintf(stderr,"usage: sempc <list.txt> <md>");
    fprintf(stderr,"list.txt= archivo cn lista de imagenes\n");
    fprintf(stderr,"md= radio de la region");
    exit(1);
}
void error_msg(const char* msg){
    fprintf(stderr,"Error: %s\n",msg);
    exit(2);
}
void str_trim(char* str){
    int i=0;
    while(str[i]!=0){
        if(str[i]=='\n'||str[i]=='\r'){
            str[i]=0;
            break;
        }
        i++;
        
    }
    return;
}
image_t imagen;
int brk1=0;
void* thread1(void* args){
    char buff[BUFLEN];
    while(1){
        if(end2) return NULL;
        sem_wait(&        if(end2) return NULL;        if(end2) return NULL;        if(end2) return NULL;        if(end2) return NULL;s1);
        if(brk1) goto end_t1; 
        do{
            pthread_mutex_lock(&mutex_p1);
           if( fgets(buff,BUFLEN,imlist)==NULL){brk1=1;
            end1=1;
        };
            pthread_mutex_unlock(&mutex_p1);
            if(brk1){
                break;
            }
            image_t imagen;
            str_trim(buff);
    
        } while(!image_load(&imagen,buff));
        if(brk1) goto end_t1; 
       pthread_mutex_lock(&mutex_p1);
       buf1[b1]=imagen;
       b1++;
       cnt1++;
       pthread_mutex_unlock(&mutex_p1);


end_t1:
       sem_post(&s2);
    }
    return NULL;
}
void* thread2(void* args){
     image_t img;
    int brk=0;
     while(1){
        if(end2) return NULL;
        //COnsumidor 1
        brk=0; 
        sem_wait(&s2);
        pthread_mutex_lock(&mutex_p1);
        if(b1>0){

            img=buf1[b1-1];
            b1--;
        }else brk=1;
         pthread_mutex_unlock(&mutex_p1);
        
         //blur
        image_t out;
        if(!brk){

            image_create(&out,img.width,img.height);
            image_blur(&img,&out,md);
            image_destroy(&img);
        }
            sem_post(&s1);
         if(brk) continue;
    // Productor etapa 2
        sem_wait(&s2);
        pthread_mutex_lock(&mutex_p2);
        buf2[b2]=out;
        b2++;  
        pthread_mutex_unlock(&mutex_p2);
        sem_post(&s3);
     }
}

void* thread3(void* args){
    image_t img;
    char fname[BUFLEN];

    int n;
     int brk=0;
    while(1){
        if(end2) return NULL;
        brk=0;
       sem_wait(&s3);
        pthread_mutex_lock(&mutex_p2);
        if(b2>0){
        img=buf2[b2-1];
        b2--;
        n=cnt2;
        cnt2++;
        }
        else brk=1;
        pthread_mutex_unlock(&mutex_p2);
        if(brk) goto end_t3;
        sprintf(fname,"blur_%03i.png",n);
        image_save(&img,fname);
        image_destroy(&img);
        if(end1){
            if(cnt1==cnt2){
                end2=1;
                for(int i=0;i<nthr;i++)sem_post(&s1);
                for(int i=0;i<nthr;i++)sem_post(&s2);
                for(int i=0;i<nthr;i++)sem_post(&s3);
            }
        }
end_t3:

        sem_post(&s2);
    }
    return NULL;
}


int main(int argc, char**argv){
    if(argc!=4) print_help();
    nthr= atoi(argv[1]);
    if(nthr<1 || nthr>32)
        error_msg("Wrong number of threads");
    md=atoi(argv[3]);
    if(md<0)error_msg("Wrong md value (must be positive)");
    imlist=fopen(argv[2],"rt");
    if(imlist==NULL) error_msg("Wrong list file");
    //=======
    pthread_t* prod1_list=malloc(nthr*sizeof(pthread_t));
    if(prod1_list==NULL) error_msg("Allocation failure");
     pthread_t* prcon_list=malloc(nthr*sizeof(pthread_t));
    if(prcon_list==NULL) error_msg("Allocation failure");
     pthread_t* cons2_list=malloc(nthr*sizeof(pthread_t));
    if(cons2_list==NULL) error_msg("Allocation failure");
   //Buffers
    buf1=malloc(nthr*sizeof(image_t));
    if(buf1==NULL)error_msg("Allocation Failure");
    buf2=malloc(nthr*sizeof(image_t));
    if(buf2==NULL)error_msg("Allocation Failure");
 
    //Semaforos
    sem_init(&s1,0,nthr);
    sem_init(&s2,0,0);
    sem_init(&s3,0,0);
    //HIlos
    for(int i=0;i<nthr;i++){
        pthread_create(
                &prod1_list[i],
                NULL,
                thread1,// Producer 1
                NULL
                );
        pthread_create(
                &prcon_list[i],
                NULL,
                thread2,// consumer 1/ Producer 2
                NULL
                );
         pthread_create(
                &cons2_list[i],
                NULL,
                thread3,// consumer 2
                NULL
                );
      
    }
    //join
     for(int i=0;i<nthr;i++){
        pthread_join(prod1_list[i],NULL);
        pthread_join(prcon_list[i],NULL);
        pthread_join(cons2_list[i],NULL);
     }
   free(buf1);
   free(buf2);
   free(prod1_list); 
   free(prcon_list);
   free(cons2_list); 
   fclose(imlist);
    return 0;
}
