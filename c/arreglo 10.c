//Fiugra 6.12
//El nombre de un arreglo es lo msimo que &arreglo[0]
#include<stdio.h>
int main(){
    char arreglo[5];
    printf("arreglo =%p\n&arreglo[0]=%p\n"
    "&arreglo =%p\n",
    arreglo, &arreglo [0],&arreglo);
    return 0;
}
