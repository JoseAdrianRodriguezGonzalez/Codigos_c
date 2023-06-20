#include<stdio.h>
#include<stdlib.h>

int main(){
    int x,y=0,z=0,Tabla[10];
    for ( x = 0; x < 10; x++)
    {
        printf("Escriba un numero: ");
        scanf("%d",&Tabla[x]);
    }
    for ( x = 0; x < 10; x++)
    {
        y+=Tabla[x];
        z=y/10;
    }
    printf("%d\n",z);
    system("PAUSE");
    return 0;
}