#include<stdio.h>
typedef union dato{
    int i;
    float f;
    char c[4];
}dato;
int main(){
    dato d;
    d.i=-40300;
    printf("%u\t%u\t%u\t%u",(unsigned char)d.c[3],(unsigned char)d.c[2],(unsigned char)d.c[1],(unsigned char)d.c[0]);
    return 0;
}