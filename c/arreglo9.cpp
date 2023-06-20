//Arregloa estáticos que se inicializan a cero
#include <stdio.h>

void iniciaArregloEstatico (void);//prototipo de la función
void iniciaArregloAutomatico (void);//Ptrototipo de la función
//L función main comienz al aejeucción del programa
int main(){
    printf("Primera llama a cada funcion:\n");
    iniciaArregloEstatico();
    iniciaArregloAutomatico();

    printf("\n\n Segunda llamada a cada funcion:\n");
    iniciaArregloEstatico();
    iniciaArregloAutomatico();

    return 0;//Indica terminación exitosa
}
//funciona para demsotrar una arreglo etaticolocal
void iniciaArregloEstatico(void){
    //inicializa los eleemntos a 0 la primera vez que se llama a la funci+ón
    static int arreglo1[3];
    int i;//cotnador
    printf("\nValores al entrar a iniciarArregloEstatico:\n");
    for ( i = 0; i <= 2; i++)
    {
        printf("arreglo1[ %d ] = %d",i,arreglo1[i]);
    }
    printf("\nValores al salir de iiniciarArregloEstatico\n");

    for(i=0;i<=2;i++){
        printf("arreglo1[%d] =%d",i,arreglo1[i]+=5);
    }
}


void iniciaArregloAutomatico(void){
    int arreglo2[3]={1,2,3};
    int i;
   printf("\n\nValores al entrar a iniciarArregloAutomatico:\n");
    for ( i = 0; i <= 2; i++)
    {
        printf("arreglo2[%d]=%d",i,arreglo2[i]);
    }
    printf("\nValores al salir de iniciaArregloAutomatico:\n");

    for(i=0;i<=2;i++){
        printf("arreglo2[%d]=%d",i,arreglo2[i]+=5);
    }
}