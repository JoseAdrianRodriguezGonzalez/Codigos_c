/*Figura 6.6
Caclucla la suma de los elementos del arreglo
*/
#include<stdio.h>
#define TAMANIO 12
int main(){
    int a [TAMANIO]={1,3,5,4,7,2,99,16,45,67,89,45};
    int i;
    int total=0;
    for (i = 0; i < TAMANIO; i++)
    {
        total+=a[i];
    }
    printf("El total de los elementos del arreglo es %d\n", total);
    return 0;
    
}
