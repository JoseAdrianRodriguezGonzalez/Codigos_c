#include<stdio.h>
#include<stdlib.h>
int datos(int x,float y, char c);
int main(){
    int x=9;
    float y=44.6;
    char c='a';
    x=datos(x,y,c);
    printf("%d %f %c",x,y,c);
    return 0;
}
int datos(int x,float y, char c){
    printf("%d %f %c\n",x,y,c);
    x=8;
    y=4.2;
    c='g';
    return x;
}
