#include<stdio.h>
#include<conio.h>
#include<math.h>
main(){
	float a,b,c,d,prom;
	printf("Escriba su 1 parcial: ");
	scanf("%f",&a);
	printf("Escriba su 2 parcial: ");
	scanf("%f",&b);
	printf("Escriba su 3 parcial: ");
	scanf("%f",&c);
	printf("Escriba su 4 parcial: ");
	scanf("%f",&d);
	prom=(a+b+c+d)/4;
	prom=round(prom);
	if(prom>=6){
		printf("Aprobado!!");
	}else{
		printf("reprobado");
	}
}
