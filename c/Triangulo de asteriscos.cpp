#include<stdio.h>
#include<conio.h>

main(){
	int n,i,j;
	printf("Que altura quiere usted su traingulo: ");
	scanf("%i",&n);
	n--;
	for(i=0 ;i<=n;i++){
		for(j=0;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}
