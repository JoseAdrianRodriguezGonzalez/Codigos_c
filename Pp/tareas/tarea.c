#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#define BUFLEN 512
typedef struct Matrix{
    int cols;
    int rows;
    int* data;
}Matrix;
typedef struct parameters{
    const Matrix * A;
    const Matrix * B;
    Matrix * result;
    int row;
}parameters;
void help_message();
int index_m( int Cols,int rows,int cols);
void error_message(const char* message);
void error_handler(const int flag);
int matrix_read(const char* name_file,Matrix* m);

void print_matrix(const Matrix *m);
int matrix_write(Matrix* resultado);
void* mult(void * args);

int main(int argc,char**argv){
    if(argc!=3) help_message();
    Matrix m={0,0,NULL};
    int flag=matrix_read(argv[1],&m); 
    if(flag!=0){
        free(m.data);
        error_handler(flag);
    }
    Matrix v={0,0,NULL};
    flag=(matrix_read(argv[2],&v));
    if(flag!=0){
        free(m.data);
        free(v.data);
        error_handler(flag);
    }
    //Let's multipy with threads
    if(m.cols!=v.rows){ 
        free(m.data);
        free(v.data);
        error_message("Wrong number of columns and rows");
    }
    pthread_t* tlist=malloc(m.rows*sizeof(pthread_t));
    //Rows per threads
    parameters* val=malloc(m.rows*sizeof(parameters));
    Matrix result;
    result.cols=1;
    result.rows=m.rows;
    result.data=malloc(result.rows*sizeof(int));
    for(int t=0;t<m.rows;t++){
        val[t].A=&m;
        val[t].B=&v;
        val[t].result=&result;
        val[t].row=t;
        pthread_create(&tlist[t],  NULL,mult,&val[t]);
    }
    for(int t=0;t<m.rows;t++){
        pthread_join(tlist[t],NULL);
    }
    print_matrix(&result);
    matrix_write(&result);
    free(m.data);
    free(v.data);
    free(result.data);
    free(tlist);
    free(val);
    return 0;
}
void help_message(){
    printf("mvmut <matrix.txt> <vector.txt> ");
    exit(1);
}
void error_message(const char* message){
    fprintf(stderr,"Error: %s",message);
    exit(2);
}
int matrix_read(const char* name_file,Matrix* m){
    //OPen a file
    FILE * fd=fopen(name_file,"rt");
    if(fd==NULL) return 1;
    char buffer[BUFLEN];
    //read rows
    fgets(buffer,BUFLEN,fd);
    m->rows=atoi(buffer);
    if(m->rows<=0) return 2;
    //read cols
    fgets(buffer,BUFLEN,fd);
    m->cols=atoi(buffer);
    if(m->cols<=0) return 3;
    //allocate memory
    m->data=malloc(m->cols*m->rows*sizeof(int));
    if(m->data==NULL) return 4;
    //read stream
    for(int i=0 ;i<m->rows*m->cols;i++){
        if(fgets(buffer,BUFLEN,fd)==NULL){
            free(m->data);
            return 5;
        }
        m->data[i]=atoi(buffer);
    }
    fclose(fd);
    return 0;
    
}

/*
*/

void print_matrix(const Matrix *m){
    for(int r=0;r<m->rows*m->cols;r++){
        printf(" %i",m->data[r]);
        if(!((r+1)%m->cols)) printf("\n");
    }
}
int index_m( int Cols,int rows,int cols){
    return (Cols)*(rows)+(cols);
}
void error_handler(const int flag){
    switch (flag)
    {
    case 0:
        printf("Everything is ok\n");
        break;
    case 1:
        error_message("Wrong opening file name\n");
        break;
    case 2:
        error_message("Wrong number of rows\n");
        break;
    case 3:
        error_message("Wrong number of columns\n");
        break;
    case 4:
        error_message("Allocation matrix wrong!\n");
        break;
    case 5:
        error_message("Corrupted file or lack numbers\n");
        break;
    default:
        break;
    }
}
void* mult(void * args){
    parameters* val=((parameters*)args);
        int sum=0;
        for(int col=0;col<val->A->cols;col++){
            sum+=val->A->data[index_m(val->A->cols,val->row,col)]*val->B->data[col];
        }
        val->result->data[val->row]=sum;
    
    
    return NULL;
}
int matrix_write(Matrix* resultado){
    FILE* fd=fopen("resultante.txt","wt");
    if(fd==NULL) return 1;
    fprintf(fd,"%i\n%i\n",resultado->rows,resultado->cols);
    for(int element=0;element<resultado->cols*resultado->rows;element++)fprintf(fd,"%i\n",resultado->data[element]);
    return 0;
}