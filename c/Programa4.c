#include<stdio.h>
#include<conio.h>
main(){
	int a, b,c=0;
	char n=164,pregunta=168;
	printf("%cQue a%co naciste?\n",pregunta,n);
	scanf("%i",&a);
	printf("%cEn que a%co estamos?\n ",pregunta,n);
	scanf("%i",&b);
	c=b-a;
	printf("Esta es tu edad:\n%i",c);
	getch();
}
