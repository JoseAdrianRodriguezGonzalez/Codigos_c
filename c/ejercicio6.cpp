#include<stdio.h>
#include<stdlib.h>
int main(){
    int *punta,*puntb;
    int x=7;
    int y =5;
    punta=&x;
    *punta=3;
    puntb=&y;
    *puntb=x;
    x=9;
    printf("%d,%d",*puntb,x);
    return 0;
}