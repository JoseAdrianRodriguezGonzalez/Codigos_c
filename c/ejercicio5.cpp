#include<stdio.h>
#include<stdlib.h>
int main(){
    int *punt;
    int x=7;
    int y=5;
    punt=&x;
    *punt=3;
    punt=&y;
    *punt=x;
    x=9;
    printf("%d,%d",*punt,x);
    return 0;

}