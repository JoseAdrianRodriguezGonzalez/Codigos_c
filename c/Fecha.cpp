#include<stdio.h>
#include<conio.h>
int main(){
    int dia, mes,anio;
    printf("\n Introduzca el d%ca: ",161);
    scanf("%i",&dia);
    printf("\n Introduzca el mes: ");
    scanf("%i",&mes);
    printf("\n Introduzca el a%co: ",164);
    scanf("%i",&anio);
    if(mes>=1&&mes<=12){
        switch (mes)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if(dia>=1 && dia <=31)
                printf("\n Fecha correcta:");
            else    
                printf("\n Fecha incorrecta");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (dia>=1 && dia<=31)
                printf("\n Fecha correcta");
            else 
                printf("\nFecha incorrecta");
            break;
        case 2:
        if (anio%4 ==0 &&anio %100 !=0||anio%400==0)
            if(dia>=1 &&dia<=29)
                printf("\n Fecha correcta");
            else 
                printf("\n Fecha incorrecta");
        else
            if(dia>=1 &&dia <=28)
                printf("\n FECHA CORRECTA");
            else
                printf("\n FECHA INCORRECTA");

        }
    }
    else    
        printf("\n FECHA INCORRECTA");
    
    getch();
    return 0;
}
