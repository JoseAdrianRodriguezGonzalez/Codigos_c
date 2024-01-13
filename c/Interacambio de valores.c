#include<stdio.h>
#include<conio.h>
int main(){
	int auxiliar,v1,v2;
	printf("Introduzca un valor 1: ");
	scanf("%i",&v1);
	printf("Introduzca un valor 2: ");
	scanf("%i",&v2);
	
	auxiliar=v1;
	v1=v2;
	v2=auxiliar;
	printf("\n\n Ahora el valor de v1 es: %i",v1);
	printf("\n\n Ahora el valor de v2 es: %i",v2);
	
	getch();
	return 0;
	
	
}
