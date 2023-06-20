#include<stdio.h>
#include<stdlib.h>
int main(){
    int x;
    int tabla[100];
    for ( x = 100; x >= 1; x--)
    {
        tabla[x]=x;
    }
    for ( x = 100; x >= 1; x--)
    {
        printf("%d\n",tabla[x]);
    }
    system("PAUSE");
    return 0;
}