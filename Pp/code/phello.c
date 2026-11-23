#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void* thread_func(void* args){
    //args tiene una dirección tipo 0x0119
    //La siguiente parte es castear de void* a int*, de esta manera
    //el apuntador ya tiene un tamaño de byte, sin embargo, seguira siendo 0x0119
    //cuando le agrego *((int*)args) en vez de obtener la dirección, obtengo el valor
    int rank=*((int *)args);
    free(args);
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
                rank(i)//rank, es el numero entero que se identifica a un hilo
                //paso la dirección de memoria por medio de & al i.
                //Casteo la dirección a void*
                );
    }
    for(int i=0;i<nthreads;i++){
     pthread_join(tlist[i],NULL);
    }
    printf("End main\n");
    return 0;
}
