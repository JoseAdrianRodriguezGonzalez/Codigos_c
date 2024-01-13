#include<stdio.h>
#include<stdlib.h>
int main(){
    int x;
    char frase[50];
    printf("Introduzca la frase: ");
    gets(frase);
    for ( x = 0; x < 50; x++)
    {
        if (frase[x]!='\0')
        {
            frase[x]=frase[x]+3;
        }
    }
    printf("\n\nLa nueva frase es:\n\n");
    printf("\n\n%s\n\n",frase);
    printf("\n\n");
    system("PAUSE");
    return 0;
    
}
