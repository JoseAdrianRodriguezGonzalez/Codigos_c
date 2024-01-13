#include<stdio.h>
int main(void){
	float med, suma=0;
	int tabla[10],j;
	int *pt=tabla;
	for(j=0;j<10;j++){
		printf("\nIntroducir el elemento %d: ",j+1);
		scanf("%d",pt+j);
	}
	for(j=0;j<10;j++){
		suma+=*(pt+j);
	}
	med=suma/10;
	printf("La media vale:%f",med);
	return 0;
}
