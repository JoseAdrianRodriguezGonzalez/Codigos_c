#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

#define N 100
#define THREADS 4

double arr[N];
double sumas[THREADS];

void* suma_parcial(void*arg){
    long id=(long)arg;
    long inicio=id*(N/THREADS);
    long fin=inicio+(N/THREADS);;
    for(long i=inicio;i<fin;i++){
        sumas[id]+=arr[i];
    }
    return NULL;
}
int main(){
    pthread_t hilos[THREADS];
    for(long i=0;i<N;i++)arr[i]=1.0;
    for(long i=0;i<THREADS;i++)
            pthread_create(&hilos[i],NULL,suma_parcial,(void*)i);
    for(long i=0;i<THREADS;i++) pthread_join(hilos[i],NULL);
    double total=0.0;
    for(int i=0;i<THREADS;i++)
        total +=sumas[i];
    printf("Suma total: %.2f\n",total);
    return 0;
}
