#include<stdio.h>
#include<stdlib.h>

int main(){
    int *punt;
    int x=7;
    int y =5;
    punt=&x;
    x =4;
    printf("%d,%d",*punt,y);
    return 0;
}