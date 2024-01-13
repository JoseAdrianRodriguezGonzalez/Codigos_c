#include<stdio.h>
#include<conio.h>

main(){
	int u=1,n,resultado,p=0,cont=1;
	
	printf("Escriba hasta que numero quiere escribir: ");
	scanf("%i",&n);
	printf("%i, ",u);
	resultado=u+p;
	p=u;
	u=resultado;
	/*n--;*/
	while(cont<=n){
		printf("%i, ",resultado);
		cont++;
		resultado=u+p;
		p=u;
		u=resultado;
		

	}
	getch();
}

