//Figuras con asterifcos
//Linea de n asteriscos
//Ejemplo N=10

#include<stdio.h>
#include<conio.h>

main(){
	int a,j,i;
	char b=42;
	printf("Hasta que numero quieres?");
	scanf("%i",&a);
	for( i=0; i<a;i++){
			printf("\n%c",b);
		for(j=1; j<a; j++){
			printf("\t%c",b);	
		}
	}
	getch();
}
