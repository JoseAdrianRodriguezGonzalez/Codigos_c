#include<stdio.h>
#include<stdlib.h>
int main(){
    int x[5]={1,2,3,4,5};
    int *punt, i;
    punt=x;
    *x=11;
    *(punt+3)=9;
    for ( i = 0; i < 5; i++)
    {
        printf("%d,",x[i]);
    }
    return 0;
}
