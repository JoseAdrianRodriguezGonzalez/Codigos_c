#include<stdio.h>
#include<conio.h>

main(){
	int espacios=0,n,i,j,k;
	printf("Altura del triangulo: ");
	scanf("%i",&n);
	for(i=0;i<n;i++){
		for(j=0;j<espacios;j++){
			printf(" ");
		}
		for(k=0;k<n-i;k++){
			printf("*");
		}
		printf("\n");
		espacios++;
	}
}
