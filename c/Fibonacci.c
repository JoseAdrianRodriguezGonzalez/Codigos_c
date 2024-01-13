#include<stdio.h>
#include<conio.h>

main(){
	int u=1,n,resultado,p=0;
	
	printf("Escriba hasta que numero quiere escribir: ");
	scanf("%i",&n);
	printf("%i, ",u);
	resultado=u+p;
	p=u;
	u=resultado;

	while(resultado<n){
		printf("%i, ",resultado);
		resultado=u+p;
		p=u;
		u=resultado;
		

	}
	getch();
}

