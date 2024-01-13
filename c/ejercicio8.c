#include<stdio.h>
#include<stdlib.h>
int main(){
    int *punt,i;
    int x[5]={1,2,3,4,5};
    punt=x;
    *punt=9;
    for ( i = 0; i < 5; i++)
    {
        printf("%d,",x[i]);
    }
    return 0;
}
