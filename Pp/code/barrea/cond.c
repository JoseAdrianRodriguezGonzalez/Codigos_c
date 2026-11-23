#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#define NTHR 8
#define NSTG 5
int cnt1=NTHR;
int cnt2=NTHR;
pthread_cond_t cv =PTHREAD_COND_INITIALIZER;
pthread_mutex_t mutex=PTHREAD_MUTEX_INITIALIZER;
void * thread_func(void* args){
    int rank=*((int*)(args));
    int stage=1;
    while(stage<=NSTG){
    //Primera etapa
        printf("Thread %i:Etapa %i\n",rank,stage);
    //Barrera
        pthread_mutex_lock(&mutex);
        cnt1--;
        if(cnt1>0){//bloque
            while(pthread_cond_wait(&cv,&mutex)!=0);
        }else{
            cnt1=NTHR;
            pthread_cond_broadcast(&cv);
        }
      pthread_mutex_unlock(&mutex); 
      stage++;
    }//Segunda etapa 
    return NULL;
}
int main(){
    int nrank[]={0,1,2,3,4,5,6,7,8};

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
