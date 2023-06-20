/*leer una línea un texto en minúsculas y escribirla en mayúsculas*/
#include<stdio.h>
#include<ctype.h>
#include<conio.h>
main(){
	char letras[80];
	int cont,auxiliar;
	/*leer la línea*/
	for(cont =0; (letras[cont]=getchar()) !='\n';++cont);
/*guardar el contador de caracteres*/
	auxiliar=cont;
/*escribir la línea en mayúsculas*/
	for(cont=0; cont<auxiliar; ++cont)
		putchar(toupper(letras[cont]));
	putchar('\n');
	getch();
}

