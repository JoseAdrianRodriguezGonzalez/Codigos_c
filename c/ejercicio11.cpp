#include<stdio.h>
#include<stdlib.h>
int main(){
    int *punt,i;
    int x[5]={1,2,3,4,5};
    punt=x,
    *(punt+2)=9;
    *(x+3)=7;
    punt[1]=11;
    for ( i = 0; i < 5; i++)
    {
        printf("%d,",*(punt+i));
    }
    return 0;
}