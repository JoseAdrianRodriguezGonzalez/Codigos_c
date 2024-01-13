#include<stdio.h>
#include<stdlib.h>
int main(){
    int *punt,i;
    int x[5]={1,2,3,4,5};
    punt=&x[0];
    *punt=9;
    punt[3]=7;
    for (size_t i = 0; i < 5; i++)
    {
        printf("%d,",x[i]);
    }
    return 0;
}
