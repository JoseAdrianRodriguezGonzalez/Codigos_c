#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(int argc,char *argv[]){
    int n;
    float *x;
    FILE *fp;
    printf("Cuantos elementos quiero: ");
    scanf("%d",&n);
    x=(float*)malloc(n*sizeof(float));
    if(x==NULL){
        return 1;
    }
    for(int i=0;i<n;i++)
        x[i]=(20*rand())/RAND_MAX-10;
    if(argc>1)
        fp=fopen("Prueba.txt","w+t");
    else
        fp=fopen(argv[1],"w+t");
    if(fp==NULL){
        free(fp);
        return 2;
    }
    for(int i=0;i<n;i++)
        printf("x[%d]=%f\n",i+1,x[i]);
    fp=fopen("Prueba.txt","w+t");
    if(fp==NULL){
        free(fp);
        return 2;
    }
    for(int i=0;i<n;i++)
        fprintf(fp,"%f\n",x[i]);
    free(x);
    return 0;
}