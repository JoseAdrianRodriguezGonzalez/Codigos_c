#include<stdio.h>
int main(){
    int a;
    int *ptrA;
    a =7;
    ptrA=&a;
    printf("La direccion de a es %p""\nEL valor de a ptrA es %p",&a,ptrA);
    printf("\n\nEl valor de a es %d""\nEl valor de *ptrA es %d",a,*ptrA);
    printf("\n\Muestra de que * y & son complementos""uno del otro\n&*ptrA = %p""\n*&ptrA =%p\n",&*ptrA,*&ptrA);
    return 0;
}