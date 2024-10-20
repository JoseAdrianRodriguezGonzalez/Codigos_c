#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 1000
double suma2(double *x,int n,double media);
double media(int n_size,double *arg);
void generar(double *x,size_t n,float min,float max);
void imprimir(double *x,size_t n);
double suma(double *x,int n);
double media2(double *x,int n);
double varianza(double *x,int n);
double varianza2(double *x,int n);
int main(int argc,char *argv[]){
    double x[N];
    generar(x,N,0,10);
    srand(time(NULL));
    printf("Varianza\n");
    printf("%lf",varianza(x,10));
}
double media(int n_size,double *arg){
    double mean=0.0;
    for(int i=0;i<n_size;i++){
        mean+=arg[i];
    }
    return mean/(double)n_size;
}
void generar(double *x,size_t n,float min,float max){
    for(size_t i=0;i<n;i++){
        x[i]=(max-min)*((float)rand())/(RAND_MAX)+min;
    }
}
void imprimir(double *x,size_t n){
    for(size_t i=0;i<n;i++)
        printf("%lf ",x[i]);
}
//media recursiva
double suma(double *x,int n){
    return --n?x[0]+suma(x+1,n):x[0];
}
double media2(double *x,int n){
    return suma(x,n)/n;
}
int imprimir2(double x[],int n){
    printf("%lf \n",x[0]);
    if(n-1){
        return imprimir2(x+1,n-1);
    }
    else{
        return 0;
    }
}///(x_i-x)^2/n-1
double varianza(double *x,int n){
    double mean=media(n,x);
    double sm=0;
    for(int i=0;i<n;i++){
        sm+=(x[i]-mean)*(x[i]-mean);
    }
    return sm/(n-1);
}
double suma2(double *x,int n,double media){
    return --n?(x[0]-media)*(x[0]-media)+suma2(x+1,n-1,media):x[0];
}
double varianza2(double *x,int n){
    double md;
    md=media2(x,n);
    return suma2(x,n,md)/(n-1);
}