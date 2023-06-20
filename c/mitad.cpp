#include<stdio.h>
#include<conio.h>

int main(){
    int contador;
    float numero,resultado;
    printf("\n Introduzca un n%cmero real (0=Fin): ",163);
    scanf("%f",&numero);
    contador=0;
    while (numero!=0)
    {
        resultado=numero/2;
        printf("La mitad de %f es %f", numero,resultado);
        contador++;
        printf("\n Introduzca un n%cmero real (0=Fin): ",163);
        scanf("%f",&numero);
    }
    printf("\n Ha puesto %d n%cmero(s) distinto(s) de cero", contador,163);
    getch();
    return 0;
}