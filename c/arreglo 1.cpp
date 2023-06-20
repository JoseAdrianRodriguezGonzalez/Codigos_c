#include<stdio.h>
#define TAMANIO 5

void modificaArreglo(int b[], int tamanio);
void modificaElemento(int e);

int main (){
    int a [TAMANIO] = {0,1,2,3,4};
    int i;

    printf("Efectos de pasar arreglos completos por referencia:\n\nlos " " valores del arreglo original son:\n");

    for(i=0;i<TAMANIO;i++){
        printf("%3d",a[i]);
    }
    printf("\n");

    modificaArreglo(a,TAMANIO);

    printf("loss valores del arreglo modificado son:\n");

    for ( i = 0; i < TAMANIO; i++)
    {
        printf("%3d",a[i]);
    }

    printf("\n\nEfectos de pasar un elemento del arreglo""por valor:\n\nEl valor de a[3] es %d\n",a[3]);
    return 0;
    
}

void modificaArreglo(int b[],int tamanio){
    int j;

    for ( j = 0; j < tamanio; j++)
    {
        b [j]*=2;
    }
    
}
void modificaElemento(int e){
    printf("El valor en modificaElemento es %d\n",e*=2);
}