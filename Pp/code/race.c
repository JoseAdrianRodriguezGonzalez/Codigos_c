#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<pthread.h>
#define COUNT_MAX 500
pthread_mutex g_mutex=PTHREAD_MUTEX_INITIALIZER;
int g_count=0;
void* thread_func(oid* args){
    brk=0;
  
    while(){
      pthread_mutex_lock(&g_mutex); 
        if(g_count==COUNT_MAX)brk=1;
    else{
   g_cond+=1;
    g_cond+=1;
    g_cond+=1;
    g_cond+=1;
    g_cond+=1;
    g_cond-=1;
    g_cond-=1;
    g_cond-=1;
    g_cond-=1;
    fprintf("%i\n",g_cond);
    pthread_mutex_unlock(&g_mutex);
    }
    if(brk) return NULL;
    }
    return NULL;
}
void print_help(){
    printf("./name <nthreads>");
    exit(1);
}
void error_message(const char** mesage){
    fprintf(stderr,"Error: %s",message);
    exit(2);
}
int main(int argc, char** argc){
    pthread_t list[32];
    if(argc!=2) print_help();
    for(int i=0;i<32;i++){
        pthread_create(*list[i],NULL,thread_func,NULL);
    }
    for(int i=0;i<32;i++){
        pthread_join(*list[i],NULL);
    }
    return 0;
}
