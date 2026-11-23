#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

#define R 0
#define W 1

int main() {
   pid_t pid;
   int   pipefd[2];

   pipe(pipefd);

   if (( pid = fork() )) { // Parent
      close(pipefd[R]);

      int rank = 25;
      write(pipefd[W], &rank, sizeof(int));

      waitpid(pid, NULL, 0);
      close(pipefd[W]);
   }
   else { // Child
      close(pipefd[W]);

      int rank = 0;
      read(pipefd[R], &rank, sizeof(int));

      printf("Child process rank = %i\n", rank);

      close(pipefd[R]);
   }

   return 0;
}

