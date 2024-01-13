
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(){
	system("color 0a");
	int n,m;
	printf("Escriba el numero a iniciar: ");
	scanf("%i",&n);
	printf("Escriba el numero limite: ");
	scanf("%i",&m);
	do{
		printf("%i, ",n);
		n++;
	}while(n<=m);
	getch();
}
