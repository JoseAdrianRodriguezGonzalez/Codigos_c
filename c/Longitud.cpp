#include<stdio.h>
#define pi 3.1416
int main(){
	float radio,resultado;
	printf("Vamos a sacar la longitud de un circulo");
	printf("\nInserte el radio: ");
	scanf("%f",&radio);
	resultado=2*pi*radio;
	printf("El radio es %.3f",resultado);
}
