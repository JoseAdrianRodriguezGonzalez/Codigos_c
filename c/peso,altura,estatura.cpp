#include<stdio.h>
#include<conio.h>
void captura(int *,float ,float );
int imprimir(int *,float ,float );
int main(){
    int edad;
    float estatura,peso;
    printf("Programa que permite leer la edad, la estatura y el peso de una persona\n");
    captura(&edad,estatura,peso);
    getch();
}
void captura(int *ed,float est,float pe){
    printf("Introduzca su edad: ");
    scanf("%d",&ed);
    printf("Introduzca su estatura: ");
    scanf("%f",&est);
    printf("Introduzca su peso: ");
    scanf("%f",&pe);
    imprimir(ed,est,pe);
}
/*observación: la función imprimir manipula punteros, es decir, recibe variables que son punteros y las recoge en parámetros punteros, por lo tanto, deben referenciarse
Las variables de tipo puntero el uso del operador "*" ya qu ese trata de una indirección de punters "*"
*/
int imprimir(int *e,float es,float p){
    printf("\nsu edad %d",e);
    printf("\nsu estatura %.2f",es);
    printf("\nsu peso %.2f",p);
    
}