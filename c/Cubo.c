#include<stdio.h>
int elevaAlCubo(int n);
int main(){
    int numero =5;
    printf("El valor original de numero es %d",numero);
    numero=elevaAlCubo(numero);
    printf("\nEl nuevo valor es: %d",numero);
    return 0;
}
int elevaAlCubo(int n){
    return n*n*n;
}
