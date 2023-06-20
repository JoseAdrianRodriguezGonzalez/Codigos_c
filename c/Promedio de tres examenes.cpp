#include<stdio.h>
#include<conio.h>
int main(){
	float a,b,c,resultado;
	printf("Escriba el primer examen: ");
	scanf("%f",&a);
	printf("Escriba el segundo examen: ");
	scanf("%f",&b);
	printf("Escriba el tercer examen: ");
	scanf("%f",&c);
	
	resultado=(a+b+c)/3;
	printf("Este es tu promedio: %.2f",resultado);
	getch();
	return 0;
}
