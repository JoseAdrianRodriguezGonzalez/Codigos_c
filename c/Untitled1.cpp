/*Numero par e impar*/
#include<stdio.h>//librer�as
#include<conio.h>//Liber�as
 main(){
	int a,residuo;
	printf("Introduce un numero: ");
	scanf("%i",&a);
	residuo=a%2;
	if(residuo==0){
		printf("Tu numero es par");
	}
	if(residuo==1){
		printf("Tu numero es impar");
	}
	getch();
}
