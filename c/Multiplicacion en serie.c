#include<stdio.h>
#include<conio.h>

main(){
	int x,n,y;
	printf("Escoja el numero serie: ");
	scanf("%i",&x);
	
	printf("Escoja el numero limite: ");
	scanf("%i",&n);
	y=x;
	while(x<=n){
		printf("%i, ",x);
		x+=y;
	}
	getch();
}
