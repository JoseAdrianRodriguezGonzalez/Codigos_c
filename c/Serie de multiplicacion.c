#include<stdio.h>
#include<conio.h>
main(){
	int x,y,n;
	printf("Escoja la serie: ");
	scanf("%i",&x);
	printf("Escojha el limite: ");
	scanf("%i",&n);
	y=x;
	while(x<n){
		printf("%i, ",x);
		x*=y;
	}
}
