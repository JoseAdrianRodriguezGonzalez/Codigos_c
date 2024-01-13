#include<stdio.h>
#include<stdlib.h>
void suma_dos(int *x,int *y, int *z);
int main(){
    int x,y,z;
    x=3;
    y=10;
    z=15;
    suma_dos(&x,&y,&z);
    printf("%d %d %d\n",x,y,z);
    return 0;
}
void suma_dos(int *x,int *y, int *z){
    *x=*x+2;
    *y=*y+2;
    *z=*z+2;
}
