#include<stdio.h>
#include<conio.h>
int main(){
    int edad;
    printf("\n  Introduzca la edad:  ");
    scanf("%i",&edad);
    if(edad >=0 && edad<=120){
        if(edad<2)
            printf("\n BEB%c",144);
        else if(edad<13)
            printf("\n NI%cO",165);
            else if(edad<18)
                printf("\n ADOLESCENTE");
                else if(edad<31)
                    printf("\n ADULTO");
                    else if(edad<65)
                        printf("\n ADULTO");
                        else
                        printf("\n ANCIANO");    
}   else
        printf("\n ERROR: Edad incorrecta");
getch();
return 0;
}