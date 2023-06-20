#include<stdio.h>
#define TAMANIO 10
int main(){
    int a [TAMANIO] = {2,4,6,8,10,12,89,68,45,37};
    int pasadas;
    int i;
    int almacena;
    printf("Elementos de datos en el oren original\n");
    for ( i = 0; i < TAMANIO; i++)
    {
        printf("%4d",a[i]);
    }
    for (pasadas = 1; pasadas < TAMANIO;pasadas++)
    {
        for ( i = 0; i < TAMANIO-1; i++)
        {
            if (a[i]>a[i+1])
            {
                almacena =a[i];
                a[i]=a[i+1];
                a[i+1]=almacena;
            }
            
        }
        
    }
    printf("\nElementos de datos en orden ascendente\n");

    for ( i = 0; i < TAMANIO; i++)
    {
        printf("%4d",a[i]);
    }
    printf("\n");
    return 0;
}
