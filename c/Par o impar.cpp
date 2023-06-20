#include<stdio.h>
#include<conio.h>
int main(){
	int a;
	printf("Inserte un numero: ");
	scanf("%i",&a);
	if(a%2==0)
		printf("\n %i es par", a);
	else
		printf("\n %i es impar",a);
	getch();
	return 0;
}
