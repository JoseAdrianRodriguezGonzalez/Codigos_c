#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

#define THRMAX 32

#define R 0
#define W 1

typedef struct {
   int fd[2];
} pipe_t;

void print_help() {
   printf("usage: rankms <threads> <min> <max>\n");
   exit(1);
}

void error_msg( const char* msg ) {
   fprintf(stderr,"Error: %s\n", msg);
   exit(2);
}

int main( int argc, char** argv ) {
   int     rank   = 0;

   if ( argc != 4 ) print_help();

   int nthr = atoi(argv[1]);
   if ( nthr < 1 || nthr > THRMAX ) {
      error_msg("Wrong number of threads");
   }

   int min = atoi(argv[2]);
   int max = atoi(argv[3]);
   if ( min > max ) error_msg("min > max");

   pipe_t* pipels = malloc( nthr * sizeof(pipe_t) );
   if ( pipels == NULL ) error_msg("Allocation failure!");

   for ( int i=0; i<nthr; i++ ) {
      pipe(pipels[i].fd);
   }

   pid_t* pidls = malloc( nthr * sizeof(pid_t) );
   if ( pidls == NULL ) error_msg("Allocation failure!");

   // Creamos los procesos
   for ( int i=0; i<nthr; i++ ) {
      pidls[i] = fork();
      if ( pidls[i] == 0 ) { // child process
         rank = i + 1;
         free(pidls);
         pidls = NULL;
         break;
      }
   }

   // Child Process
   if ( rank > 0 ) {
      close(pipels[rank-1].fd[W]);

      int msg[2];
      read( pipels[rank-1].fd[R], msg, 2*sizeof(int));

      printf("Process %i: min = %i, max = %i\n",
            rank, msg[0], msg[1]);

      close(pipels[rank-1].fd[R]);
   }

   // Parent process
   if ( rank == 0 ) {

      for ( int i=0; i<nthr; i++ ) {
         close(pipels[i].fd[R]);
      }

      int step = (max - min)/nthr;
      for ( int i=0; i<nthr; i++ ) {
         int s_min = i * step;
         int s_max = (i+1) * step;
         if ( i == nthr-1 ) s_max = max;

         int msg[2];
         msg[0] = s_min;
         msg[1] = s_max;
         write( pipels[i].fd[W], msg, 2*sizeof(int) );
      }

      for ( int i=0; i<nthr; i++ ) {
         close(pipels[i].fd[W]);
      }

      for ( int i=0; i<nthr; i++ ) {
         waitpid(pidls[i],NULL,0);
      }
      free(pidls);
   }

   return 0;
}

