#include<stdio.h>
#include<conio.h>

int main(){
	float Bm,bm,h,A;
	printf("Bienvenido al programa para calcular el area de trapecios");
	printf("\nintroduzca la base mayor: ");
	scanf("%f",&Bm);
	printf("\nintroduzca la base menor: ");
	scanf("%f",&bm);
	printf("\nintroduzca el area de la altura: ");
	scanf("%f",&h);
	A=((Bm+bm)*h)/2;
	printf("El area del trapecio es: %f",A);
	getch();
}
