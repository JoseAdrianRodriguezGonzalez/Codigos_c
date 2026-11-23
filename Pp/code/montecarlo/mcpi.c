#include"pcg_basic.h"
#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<pthread.h>
pthread_mutex_t cr_mutex=PTHREAD_MUTEX_INITIALIZER;
#include<time.h>
uint64_t cr_count=0;
double pcg32_drandom_r(pcg32_random_t* generator){
    return(double)  pcg32_random_r(generator)/UINT32_MAX;
}
void print_help(void){
    fprintf(stderr,"usage: mcp <threads> <points>\n");
    fprintf(stderr,"threads= NUmber of threads\n");
    fprintf(stderr,"point   = POints per thread\n" );
    exit(1);
}
void error_msg(const char * msg){
    fprintf(stderr,"Error:%s\n",msg);
    exit(2);
}
double sqrdist(double x1,double y1,double x2,double y2){
    return (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);

}
void* thread_func(void* args){
    uint64_t N=*((uint64_t*)args);
    double x,y;
    pcg32_random_t generator;
    uint64_t Nc=0;
    pcg32_srandom_r(&generator,time(NULL),(uintptr_t)&N);
    for(uint64_t i=0;i<N;i++){
        x=pcg32_drandom_r(&generator);
        y=pcg32_drandom_r(&generator);
        if(sqrdist(0.5,0.5,x,y)<=0.25)Nc++;
    }
    pthread_mutex_lock(&cr_mutex);
    cr_count+=Nc;
    pthread_mutex_unlock(&cr_mutex);
    return NULL;
}
int main(int argc,char**argv){
    if(argc!=3) print_help();
    int threads= atoi(argv[1]);
    uint64_t points=atoll(argv[2]);
    if(threads<1 || threads>32) error_msg("Wrong number of threads");  
    if(points==0) error_msg("Wrong number of points.");
    pthread_t* tlist=malloc(threads*sizeof(pthread_t));
    if(tlist==NULL) error_msg("Allocation failure");
    for(int i=0;i<threads;i++){
        pthread_create(&tlist[i],NULL,thread_func,(void *)&points);
    }
    for(int i=0;i<threads;i++){
        pthread_join(tlist[i],NULL);
    }
    printf("pi:%f",(double)(4*cr_count)/(threads*points));
       free(tlist);
       return 0;
       
 }
