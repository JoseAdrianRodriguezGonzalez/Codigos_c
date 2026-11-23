#include<stdio.h>
#include<stdlib.h>
#define BUFLEN
void help_message(){
    fprint(stderr,"mvmut <matrix.txt> <vector.txt>");
    exit(1);
}
int* matrix_read(const char* filename,int* r, int* c){
  FILE * fd=fopen(filename,"rt");
    if(fd==NULL) NULL;
    char buffer[BUFLEN];
    fgets(buffer,BUFLEN,fd);
    int rows=atoi(buffer);
    if(rows<=0) return NULL;
    fgets(buffer,BUFLEN,fd);
    int cols=atoi(buffer);
    if(cols<=0) return NULL;
    int* mat= malloc(rows*cols*sizeof(int));
    if(mat==NULL) return NULL;
    for(int i=0;i<rows*cols;i++){
        if(fgets(buffer,BUFLEN,fd)==NULL){
            free(mat);
            return NULL;
        }
       mat[i]=atoi(buffer);
    }
    fclose(fd);
    *r=rows;
    *c=cols;
    return mat;
   }
int index(int Cols, int rows, int cols){
    return Cols*rows+cols;
}
void error_message(const char* error){
    fprintf(stderr,error);
    exit(2);
}
int main(int argc, char** argv){
    if(argc!=2) help_message();
    int rows=0,cols=0;
    int * mat=matrix_read(argv[1],&rows,&cols);
    if(mat==NULL)error_message("File Corrupted");
    for(int r=0;r<rows;r++){
        for(int c=0;c<cols;c++){
            printf("%i",mat[index(cols,r,c)]);
        }
        printf("\n");
    }
    return 0;
}
