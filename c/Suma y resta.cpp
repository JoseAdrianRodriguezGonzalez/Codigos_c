#include<stdio.h>
int main(){
	/*Primera suma*/
	int x,y,x2,y2,suma1,suma2,resta,x3,y3;
	printf("Escriba un numero: ");
	scanf("%i",&x);
	printf("Escriba otro numero: ");
	scanf("%i",&y);
	suma1=x+y;
	printf("%i+%i=%i",x,y,suma1);
	/*Segunda suma*/
	printf("\n Vamos a hacer la suma de otros dods terminos");
	printf ("\nInserte otro numero: ");
	scanf("%i",&x2);
	printf ("\nInserte otro numero: ");
	scanf("%i",&y2);	
	suma2=x2+y2;
	printf("%i+%i=%i",x2,y2,suma2);
	/*Resta*/
	printf("\nVamos a restar otros dos numeros: ");
	printf("\nInserte un numero: ");
	scanf("%i",&x3);
	printf("\nInserte otro numero: ");
	scanf("%i",&y3);
	resta=x3-y3;
	
	printf("%i-%i=%i",x3,y3,resta);	
}
