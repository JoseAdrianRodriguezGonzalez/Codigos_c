#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,y,num=2,numeros[3][3];
    for ( x = 0; x < 3; x++)
    {
        for ( y = 0; y < 3; y++)
        {
            numeros[x][y]=num;
            num*=2;
        }   
    }
    printf("Introduzca coordenada en x: ");
    scanf("%d",&x);
    printf("Introduzca coordenada en y: ");
    scanf("%d",&y);
    printf("El numero es: %d\n", numeros[x][y]);
    system("PAUSE");
    return 0;
}