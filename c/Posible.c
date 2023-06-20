/*leer una línea un texto en minúsculas y escribirla en mayúsculas*/
#include<stdio.h>
#include<ctype.h>
main(){
	char letras[80];
	int cont,auxiliar;
	char a;

	/*leer la línea*/
	printf("Es mayuscula y/n");
	a=getchar();
	if(a=='y'){
for(cont =0; (letras[cont]=getchar()) !='\n';++cont)
/*guardar el contador de caracteres*/
auxiliar=cont;
/*escribir la línea en mayúsculas*/
for(cont=0; cont<auxiliar; ++cont)
putchar(toupper(letras[cont]));
		
 }else if(a=='n'){
for(cont =0; (letras[cont]=getchar()) !='\n';++cont)
/*guardar el contador de caracteres*/
auxiliar=cont;
/*escribir la línea en mayúsculas*/
for(cont=0; cont<auxiliar; ++cont)
putchar(tolower(letras[cont]));
}
