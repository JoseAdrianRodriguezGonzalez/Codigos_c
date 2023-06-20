#include<stdio.h>
#include<stdlib.h>
void datos(int *x,float *y, char *c);
int main(){
    int x=9;
    float y=44.6;
    char c='a';
    datos(&x,&y,&c);
    printf("%d %f %c",x,y,c);
    return 0;
}
void datos(int *x,float *y, char *c){
    *x=8;
    *y=4.2;
    *c='g';
}
