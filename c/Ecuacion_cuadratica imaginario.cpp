#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	char e= 130,a=160,i=161;
	char o=162;
	float b,c,d,raiz;

	printf("Vamos a resolver una ecuaci%cn cuadr%ctica",o,a);
	printf("Ingresa los valores: ");
	printf("a= ");
	scanf("%i",&b);
	printf("b= ");
	scanf("%i",&c);
	printf("c= ");
	scanf("%i",&d);
	raiz=sqrt(pow(b,2)-(4*a*c));
	if(raiz=='-'){
		printf("hola");
	}
	else{
		printf("adios");
	}
}
