#include<stdio.h>
#include<conio.h>
int main(){
	float a,b,c,resultado;
	printf("Vamos a sacar la media aritmetica de tres valores");
	printf("\n Introduzca su primer valor: ");
	scanf("%f",&a);
	printf("\n Introduzca su segundo valor: ");
	scanf("%f",&b);
	printf("\n Introduzca su tercer valor: ");
	scanf("%f",&c);
	resultado=(a+b+c)/3;
	printf("El promedio es: %f",resultado);
	getch();
}
