/*leer una l�nea un texto en min�sculas y escribirla en may�sculas*/
#include<stdio.h>
#include<ctype.h>
#include<conio.h>
main(){
	char letras[80];
	int cont,auxiliar;
	/*leer la l�nea*/
	for(cont =0; (letras[cont]=getchar()) !='\n';++cont);
/*guardar el contador de caracteres*/
	auxiliar=cont;
/*escribir la l�nea en may�sculas*/
	for(cont=0; cont<auxiliar; ++cont)
		putchar(toupper(letras[cont]));
	putchar('\n');
	getch();
}

