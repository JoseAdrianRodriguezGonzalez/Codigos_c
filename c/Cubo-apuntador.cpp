#include<stdio.h>
void cuboPorReferencia(int *ptrN);
int main(){
    int numero=5;
    printf("El valor origianl de numero es %d", numero);
    cuboPorReferencia(&numero);
    printf("\nEl nuevo valor de numero es %d\n",numero);
    return 0;
}
void cuboPorReferencia(int *ptrN){
    *ptrN=*ptrN* *ptrN * *ptrN;
}