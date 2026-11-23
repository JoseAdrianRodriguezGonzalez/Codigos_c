#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

#define PROCESSES 32
#define MAXCOEF 64
#define R 0
#define W 1


typedef struct 
{
    int fd[2]; //0: R, 1: W
}pipe_t;

void print_help() {
    printf("usage: intp <processes> <a> <b> <dx> <k0> [<k1>] ... \n");
    printf("   <processes> : number of processes to create (1-%d)\n", PROCESSES);
    printf("   <a>        : lower integral limit\n");
    printf("   <b>        : upper integral limit\n");
    printf("   <sd>       : Number of subdivisions\n");
    printf("   <k0> ...   : coefficients of the polynomial (up to %d)\n", MAXCOEF);
    exit(1);
}

void error_msg(const char* msg) {
    fprintf(stderr, "Error: %s\n", msg);
    exit(2);
}

double polyfunc(double* coef, int ord, double x)
{
    double y = 0.0;
    double x_pow = 1.0; 
    for (int i = 0; i < ord; i++)
    {
        y += coef[i] * x_pow;
        x_pow *= x;
    }
    return y;
}

int main(int argc, char** argv) {
   
    double coeficientes [MAXCOEF];
    pid_t plist [PROCESSES];
    pipe_t pipels[PROCESSES];

    if (argc < 6) print_help();

    int n_processes = atoi(argv[1]);

    if (n_processes < 1 || n_processes > PROCESSES) error_msg("Wrong number of processes");

    int a  = atof(argv[2]);
    int b  = atof(argv[3]);
    if (a >= b) error_msg("a >= b");

    int sd = atoi(argv[4]);

    int ord = argc - 5;
    for (int i = 0; i < ord; i++)
    {
        coeficientes[i] = atof(argv[5 + i]);
    }

    //Create pipes
    for (int i = 0; i < n_processes; i++)
    {
        pipe(pipels[i].fd);
    }

    //Creamos los procesos
    int rank = 0;
    for (int i = 0; i < n_processes; i++)
    {
        plist[i] = fork();
        if (plist[i] == 0) //child process
        {
            rank = i + 1;
            break;
        }
    }

    //Parent process
    if (rank == 0){

        for (int i = 0; i < n_processes; i++)
            close(pipels[i].fd[W]);

        double suma = 0.0;
        double intp = 0.0;
        for (int i = 0; i < n_processes; i++)
        {
            read(pipels[i].fd[R], &suma, sizeof(double));
            intp += suma;
        }

        for (int i = 0; i < n_processes; i++)
            close(pipels[i].fd[R]);

        //resultado
        printf("Integral result: %.10f\n", intp);
        

        // for(int i = 0; i < n_processes;i++)
        // {
        //     waitpid(plist[i], NULL, 0);
        // }
    }



    if (rank > 0){
        close(pipels[rank - 1].fd[R]);

        double s = (b-a)/(double)n_processes;
        double min = a + (rank - 1) * s;
        double max = min + s;

        double dx = (max - min) / (double)sd;

        double sum = 0.0;
        double x = 0.0 , y0 = 0.0, y1 = 0.0, h0, h1;
        for (int i = 0; i < sd; i++)
        {
            x = min + (double)i * dx;
            y1 = polyfunc(coeficientes, ord, x);

            h0 = (y0 < y1) ? y0 : y1;
            h1 = (y0 < y1) ? y1 : y0;  
            
            //rectangulo
            sum += h0 * dx;
            //triangulo
            sum += ((h1 - h0) * dx) * 0.5;
            y0 = y1;
        }
        //enviamos sum a parent process
        write(pipels[rank - 1].fd[W], &sum, sizeof(double));
        close(pipels[rank - 1].fd[W]);
    }
    

    return 0;
}

//compilacion: gcc -std=c99 -Wall -o intp intp.c
//ejecucion: ./intp 4 0 1 10000000 0 1 ==> salida para el ejemplo = 0.5 aproximado