#include<stdio.h>
#include<conio.h>

main(){
	int n,x=2;
	printf("Hasta que numero quiere hacer la serie: ");
	scanf("%i",&n);
	while(x<n){
		printf("%i, ",x);
		x+=2;
	}
	getch();
}
