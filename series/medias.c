#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N  5
int main(int argc,char *argv[]){
    int P[N],n;
    float m[N-4],md,de,d;
    srand(time(NULL));
    do{
        printf("Ingrese el numero de productos: ");
        scanf("%d",&n);
    }while(n<1);
    for(int i=0;i<N-1;i++){
        printf("Ingrese el rango %d: ",i+1);
        scanf("%f",&m[i]);
    }
    for(int i=0;i<N;i++)
        P[i]=0;
    for(int i=0;i<n;i++){
        d=dist_norm(md,de);
        if(d<m[0])
            P[0]++;
        else if(d<m[1])
            P[1]++;
        else if(d<m[2])
            P[2]++;
        else if(d<m[3])
            P[3]++;
        else
            P[4]++;
    }
    return 0;
}