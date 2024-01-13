#include<stdio.h>
#include<conio.h>

main(){
	int x,y,n=0;
	printf("Escoja el numero serie: ");
	scanf("%i",&x);
	y=x;
	while(n<=9){
		printf("%i, ",x);
		x*=y;
		n++;
	}
}
