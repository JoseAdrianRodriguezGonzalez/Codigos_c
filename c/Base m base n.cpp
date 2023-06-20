#include<stdio.h>
#include<conio.h>

main(){
	int a,b,j,i;
	char de=42;
	printf("Cuantos astericos de largo: ");
	scanf("%i",&a);
	printf("cuantos astericos de ancho: ");
	scanf("%i",&b);
	for(i=0;i<a;i++){
		printf("\n%c",de);
		for(j=1; j<b;j++){
			printf("\t%c",de);
		}
	}
}
