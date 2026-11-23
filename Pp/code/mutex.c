#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <pthread.h>
#include<math.h>
pthread_mutex_t cr_mutex= PTHREAD_MUTEX_INITIALIZER;
uint64_t cr_next=0;
int g_threads    = 0;
uint64_t g_begin = 0;
uint64_t g_end   = 0;
int      g_turn  = 0;
uint64_t g_batch=0;
int g_print=0;
int g_nrank[32] = {  0,  1,  2,  3,  4,  5,  6,  7,  8,  9,
                    10, 11, 12, 13, 14, 15, 16, 17, 18, 19,
                    20, 21, 22, 23, 24, 25, 26, 27, 28, 29,
                    30, 31};



/*

s = (end - begin) /n

b = r * s

e = b +s 

*/

void print_help(){
    fprintf(stderr,"usage: Primes <threads> <begin> <end> <batch>\n");
    fprintf(stderr, "threads = number of threads to use\n");
    fprintf(stderr, "begin   = starting number\n");
    fprintf(stderr, "end     = ending number (not include)\n");
    exit(1);
}


void error_msg(const char* msg){
    fprintf(stderr,"Error: %s\n", msg);
    exit(2);
}

int prime_test(uint64_t num){
    if(num == 0) return 0;
    
    if(num == 1) return 0;

    if(num == 2) return 1;

    // if(num%2 == 0) return 0;

    if((num & 1) == 0) return 0;
    uint64_t sqr=(uint64_t) sqrt((double)num);
    for(uint64_t d = 3; d < sqr; d+=2)
    {
        if ((num % d) == 0) return 0;
    }

    return 1;

}
void* thread_function(void* args)
{
    int rank =*((int*)args);

    //Vector dinamico
    int pind = 0;
    int pcap = 50;
    uint64_t* primes_list = malloc(pcap * sizeof(uint64_t));

    if (primes_list == NULL) error_msg("Allocation failure");

    //[begin,end)
    uint64_t begin=0;
    uint64_t end=0;
    //Intervalo begin critial lock
    int break_flag=0;// false
    while (1)
    {
        
        pthread_mutex_lock(&cr_mutex);
        if(cr_next==g_end) break_flag=1;
        else{
            begin=cr_next;
            end=begin+g_batch;
            if(end>g_end) end=g_end;
            cr_next=end;
        }
        pthread_mutex_unlock(&cr_mutex);
        // ENd critical lock
        if(break_flag) break;
        //Itera sobre todos los numeros que le corresponde al hilo
        for (uint64_t num = begin; num < end; num++)
        {
            if (!prime_test(num))
            continue;
            
            primes_list[pind] = num;
            
            pind++;
            //Redimensiona el vector prime_list si se llena
            if (pind == pcap)
            {
                uint64_t* temp = malloc(2 * pcap * sizeof(uint64_t));
                //Copia todos los primos almacenados en el vector temporal
                if (temp == NULL)
                error_msg("Allocation failure");

                for (int i = 0; i < pind; i++)
                {
                    temp[i] = primes_list[i];
                }
                // Libera --> Iguala el vector vacio al vector temporal (ya copiado) --> Duplica la capacidad
                free(primes_list);
                primes_list = temp;
                pcap *= 2;
            }
        }
    }
    for(int i=0;i<pind;i++){
        printf("%li\n",primes_list[i]);
    }

    free(primes_list);
    return NULL;

}

            
int main(int argc, char** argv){

    pthread_t tlist[32];

    if (argc != 5)
        print_help();

    g_threads = atoi(argv[1]); //Numero de hilos
    g_begin = atoll(argv[2]); //Comienzo
    g_end = atoll(argv[3]); //Final
    g_batch=atoll(argv[4]);
    g_turn = g_threads-1;
    if (g_threads < 1 || g_threads > 32)
        error_msg("Wrong number of threads");

    if (g_begin >= g_end)
        error_msg("Wrong nomber rank");

    if(g_batch==0){
        error_msg("Wrong batch size");
    }
    cr_next=g_begin; //EL primr numero a evluar
    for (int i = 0; i < g_threads; i++)
    {
        pthread_create(&tlist[i], NULL, thread_function, &g_nrank[i]);
    }



    for (int i = 0; i < g_threads; i++)
    {
        pthread_join(tlist[i], NULL);
    }
}


//compilacion gcc -std=c11 -Wall -o primes primes.c
//ejecucion -->  ./primes 3 100000 2500000