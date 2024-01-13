#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    int indice,x;
    char frase[50];
    printf("Introduzca una frase: ");
    gets(frase);
    for ( x = 0; x < 50; x++)
    {
        if (frase[x]=='\0');
        {
            indice=x;
        }
    }
    printf("La frase al reves es: \n\n");
    for ( x = indice-1; x >= 0; x--)
    {
        printf("%c",frase[x]);
    }
    printf("\n\n");
    system("PAUSE");
    return 0;
}
