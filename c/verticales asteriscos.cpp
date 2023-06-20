#include<stdio.h>
#include<conio.h>
main(){
	int a,i;
	char b=42;
	printf("Cuantos asteriscos verticales");
	scanf("%i",&a);
	for(i=0; i<a;i++){
		printf("%c\n",b);
	}
	getch();
}
