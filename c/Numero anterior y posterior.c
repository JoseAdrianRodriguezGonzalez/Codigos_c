#include<stdio.h>
#include<conio.h>
int main(){
	int a;
	printf("Escribe un numero: ");
	scanf("%i",&a);
	printf("\nEste es es el n%cmero posterior: %i",163,++a);
	printf("\nEste es el n%cmero anterior %i",163,a-2);
	getch();
	return 0;
	
}
