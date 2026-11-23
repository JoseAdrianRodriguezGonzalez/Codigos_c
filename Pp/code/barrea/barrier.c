#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<semaphore.h>
#define NTHR 8
int cnt1=NTHR;
int cnt2=NTHR;
sem_t sem1;
sem_t sem2;


pthread_mutex_t mutex=PTHREAD_MUTEX_INITIALIZER;
void * thread_func(void* args){
    int rank=*((int*)(args));
    //Primera etapa
    printf("Thread %i:Etapa 1\n",rank);
    printf("\n");
    //Barrera
    pthread_mutex_lock(&mutex);
    cnt1--;
    pthread_mutex_unlock(&mutex); 
    if(cnt1>0)sem_wait(&sem1);
    else{
        cnt1=NTHR;
        for(int i=0;i<NTHR-1;i++) sem_post(&sem1);
 
    }
    //Segunda etapa
    printf("Thread %i: Etapa 2\n",rank);
    printf("\n");
    //Segunda barrera 
    pthread_mutex_lock(&mutex);
    cnt1--;
    pthread_mutex_unlock(&mutex);
    if(cnt1>0)sem_wait(&sem2);
    else{
        cnt1=NTHR;
        for(int i=0;i<NTHR-1;i++) sem_post(&sem2);
    }
    //Tercera etapa
    printf("Thread %i: Etapa 3\n",rank);
    printf("\n");
 
    return NULL;
}
int main(){
    int nrank[]={0,1,2,3,4,5,6,7,8};
    sem_init(&sem1,0,0);
    sem_init(&sem2,0,0);


    pthread_t tlist[NTHR];
    for(int i=0;i<NTHR;i++){
        pthread_create(
                &tlist[i],
                NULL,
                thread_func,
                &nrank[i]
                );
    }
    for(int i=0;i<NTHR;i++){
        pthread_join(tlist[i],NULL);
    }
    
    
}
