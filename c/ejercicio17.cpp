#include<stdio.h>
#include<stdlib.h>
char datos(int *x,float *y, char *c);
int main(){
    int x=9;
    float y=44.6;
    char c='a';
    c=datos(&x,&y,&c);
    printf("%d %f %c",x,y,c);
    return 0;
}
char datos(int *x,float *y, char *c){
    printf("%d %f %c\n",x,y,c);
    *x=8;
    *y=4.2;
    *c='g';
    return 'h';
}
