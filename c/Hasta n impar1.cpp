#include<stdio.h>
#include<conio.h>
main(){
	int n,x=1;
	printf("Hasta que numero: ");
	scanf("%i",&n);
	while(x<n){
		printf("%i, ",x);
		x+=2;
	}
	getch();
}
