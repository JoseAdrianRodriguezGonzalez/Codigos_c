#include<stdio.h>
#include<conio.h>
main(){
	int j,i,n;
	printf("que altura de aasteriscos quiere");
	scanf("%i",&n);
	for(i=n;i>=1;i--){
		for(j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}
}
