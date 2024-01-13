#include<stdio.h>
#include<conio.h>
main(){
	int a,b,i,j;
	char de=42;
	printf("Cuanto de largo?");
	scanf("%i",&a);
	printf("Cuanto de ancho?");
	scanf("%i",&b);
	for(i=0; i<b;i++){
		printf("\n%c",de);
		for(j=1; j<a;j++){
			if(i==0 || i==b-1 || j==0 || j==a-1 ){
			
				printf("\t%c ",de);
			}else{
				printf("\t ");
			}
		}
		printf("\n");
	}
}
