#include<stdio.h>
int main(int argc,char** argv){
    printf("Argumentos: %i\n",argc);
    for(int i=0;i<argc;i++)
       printf("ELemento [%i]=%s\n",i,argv[i]); 
    return 0;
}
