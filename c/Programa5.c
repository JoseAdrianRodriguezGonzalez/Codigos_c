#include<stdio.h>
#include<conio.h>
main(){
	int a,b,c,d,e,f=0;
	printf("\tInserte 5 numeros(Escriba los numeros seguido de una coma): ");
	scanf("%i,%i ,%i, %i, %i",&a,&b,&c,&d,&e);
	f=a+b+c+d+e;
	printf("\n\tLa suma de %i+%i+%i+%i+%i=%i",a,b,c,d,e,f);
	getch();
	
}
