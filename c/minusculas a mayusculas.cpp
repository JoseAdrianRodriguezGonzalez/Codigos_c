#include<stdio.h>
#include<ctype.h>
void convierteAMayusculas(char *ptrS);
int main(){
    char cadena[] ="Hola juanito son $40";
    printf("La cadena antes de la conversion es: %s",cadena);
    convierteAMayusculas(cadena);
    printf("\n%s",cadena);
    return 0;
}

/*convierrte una cadena a letras mayusculas*/
void convierteAMayusculas(char *ptrS){
    while (*ptrS !='\0')
    {
        if (islower(*ptrS))
        {
            *ptrS =toupper(*ptrS);
        }
        ++ptrS;
    }
}