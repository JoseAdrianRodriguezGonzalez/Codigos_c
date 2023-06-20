#include<stdio.h>
#include<conio.h>
int main(){
	int h,m,s,c1,c2;
	printf("Escribe la hora: ");
	scanf("%i",&h);
	printf("Escribe los minutos: ");
	scanf("%i",&m);
	printf("Escribe los segundos: ");
	scanf("%i",&s);
	c1=h*3600+m*60+s;
	printf("Este es el tiempo: %i",c1);
	getch();
	return 0;
}
