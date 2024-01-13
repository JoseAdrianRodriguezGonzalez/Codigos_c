#include<stdio.h>
#include<ctype.h>
int main(void){
	char texto[80];
	char *ptext=texto;
	printf("\nIntroducir un texro menor de 80 caracteres:\n");
	gets(texto);
	*ptext=toupper(*ptext);
	while(*ptext!='\0'){
		ptext++;
		if(*ptext==' '){
			*(ptext+1)=toupper(*(ptext+1));
		}
	}
	puts(texto);
	return 0;
}
