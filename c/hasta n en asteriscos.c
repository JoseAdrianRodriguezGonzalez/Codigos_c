#include<stdio.h>
#include<conio.h>
main(){
	int a,i;
	char b=42;
	printf("Hasta que numero quieres");
	scanf("%i",&a);
	for(i=0; i<a;i++){
		printf("%c",b);
	}
}
