#include<stdio.h>
#include<stdlib.h>
int main(){
    int sum=0,x;
    char frase[50];

    printf("Introduzca una frase: ");
    gets(frase);
    for ( x = 0; x < 50; x++)
    {
        switch (frase[x])
        {
        case 'a':
            sum++;
            break;
        
        case 'e':
            sum++;
            break;
        
        case 'i':
            sum++;
            break;
        
        case 'o':
            sum++;
            break;
        
        case 'u':
            sum++;
            break;
        
        default:
            break;
        }
    }
    printf("En la frase hay %d vocales\n\n",sum);

    printf("\n\n");
    system("PAUSE");
    return 0;
}