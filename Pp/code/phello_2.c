#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
int g_nrank[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,
    23,24,25,26,27,28,29,30,31};
void* thread_func(void* args){
    //args tiene una dirección tipo 0x0119
    //La siguiente parte es castear de void* a int*, de esta manera
    //el apuntador ya tiene un tamaño de byte, sin embargo, seguira siendo 0x0119
    //cuando le agrego *((int*)args) en vez de obtener la dirección, obtengo el valor
    int rank=*((int *)args);
   // free(args);
    printf("Hilo ejecutandose %i\n",rank);
    return NULL;
}

void print_help(){
    fprintf(stderr,"usage: phello <threads>\n");
    fprintf(stderr,"threads = number of thread to launch.\n ");
    exit(1);
}
int* rank(int i){
    int* r=malloc(sizeof(int));
    *r=i;//le pasamos el valor
    return r;//retornamos la direccion
}
void error_msg(const char* msg){
    fprintf(stderr,"error: %s\n",msg);
    exit(2);
}
int main(int argc, char** argv){
    pthread_t tlist[32];
    if(argc!=2)print_help();
    int nthreads = atoi(argv[1]);
    if(nthreads<1||nthreads>32) error_msg("Number incorrect");
        printf("No. Threads = %i\n",nthreads); //Debug
  
    for(int i=0;i<nthreads;i++){
      printf("<%i> \n ",i);
        pthread_create(
                &tlist[i],
                NULL,
                thread_func,
                &g_nrank[i]
                // rank(i)//rank, es el numero entero que se identifica a un hilo
                //paso la dirección de memoria por medio de & al i.
                //Casteo la dirección a void*
                );
    }
    for(int i=0;i<nthreads;i++){
     pthread_join(tlist[i],NULL);
    }
    return 0;
}
