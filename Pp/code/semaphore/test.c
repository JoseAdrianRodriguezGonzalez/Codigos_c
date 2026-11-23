#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<semaphore.h>
sem_t* g_tsem;
void print_help(){
   fprintf(stderr,"usage: test <threads>");
   exit(1);
} 
void error_msg(const char * message){
   fprintf(stderr,"%s\n",message);
   exit(2);

}
void* thread_func(void* args){
    int rank=*((int* ) args);
    free(args);
    sem_wait(&g_tsem[rank]);
    printf("Message from thread %i\n",rank);
    sem_post(&g_tsem[rank+1]);
    return NULL;
}
int* rank(int i){
    int * r =malloc(sizeof(int));
    if(r==NULL) error_msg("Allocation failure");
    *r=i;
    return r;
}
int main(int argc, char** argv){
    if(argc!=2) print_help();
    int threads=atoi(argv[1]);
    if(threads<1 ||threads>32) error_msg("Error de cantidad de hilos");
    pthread_t *tlist=malloc(threads*sizeof(pthread_t));
    if(tlist==NULL) error_msg("Allocation failure!!!");
    g_tsem=malloc((threads+1)*sizeof(sem_t));
    if(g_tsem==NULL)error_msg("Failure allocation");
    sem_init(&g_tsem[0],0,1);
    for(int s=1;s<(threads+1);s++){
        sem_init(&g_tsem[s],0,0);
    }
    
    for(int t=0;t<threads;t++){
        pthread_create(&tlist[t],NULL,thread_func,rank(t));
    }
    for(int t=0;t<threads;t++){
        pthread_join(tlist[t],NULL);
    }

}
