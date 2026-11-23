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
    int start_row;
    int end_row;
    Matrix * result;
}parameters;
void help_message();
int index_m( int Cols,int rows,int cols);
void error_message(const char* message);
void error_handler(const int flag);
int matrix_read(const char* name_file,Matrix* m);
void print_matrix(const Matrix *m);
void* mult(void * args);
int main(int argc,char**argv){
    pthread_t tlist[32];
    if(argc!=4) help_message();
    int nthreads=atoi(argv[3]);
    if(nthreads<1||nthreads>32) error_message("Number incorrect");
    printf("No. Threads = %i\n",nthreads); //Debug
    Matrix m; 
    error_handler(matrix_read(argv[1],&m));
    Matrix v;
    error_handler(matrix_read(argv[2],&v));

    //Let's multipy with threads
    if(m.cols!=v.rows) error_message("Wrong number of columns and rows");
    //Rows per threads
    parameters val[nthreads];
    int blocks=m.rows/nthreads;
    int extra=m.rows%nthreads;

    Matrix result;
    result.cols=1;
    result.rows=m.rows;
    result.data=malloc(result.rows*sizeof(int));
    for(int t=0;t<nthreads;t++){
        val[t].A=&m;
        val[t].B=&v;
        val[t].start_row=t*blocks+(t<extra?t:extra);
        val[t].end_row=val[t].start_row+blocks+(t<extra?1:0);
        val[t].result=&result;
        pthread_create(&tlist[t],  NULL,mult,&val[t]);
    }
    for(int t=0;t<nthreads;t++){
        pthread_join(tlist[t],NULL);
    }
    print_matrix(&result);
    free(m.data);
    free(v.data);
    free(result.data);
    return 0;
}
void help_message(){
    printf("mvmut <matrix.txt> <vector.txt> <thread_number[0-32]>");
    exit(1);
}
void error_message(const char* message){
    fprintf(stderr,"Error: %s",message);
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
        error_message("Wrong file name\n");
        break;
    case 2:
        error_message("Wrong number of rows\n");
        break;
    case 3:
        error_message("Wrong number of columns\n");
        break;
    case 5:
        error_message("Allocation matrix wrong!\n");
        break;
    case  6:
        error_message("Corrupted file or lack numbers\n");
        break;
    default:
        break;
    }
}
void* mult(void * args){
    parameters* val=((parameters*)args);
    for(int row=val->start_row;row<val->end_row;row++){
        int sum=0;
        for(int cols=0;cols<val->A->cols;cols++){
            sum+=val->A->data[index_m(val->A->cols,row,cols)]*val->B->data[cols];
        }
        val->result->data[row]=sum;
    }
    return NULL;
}