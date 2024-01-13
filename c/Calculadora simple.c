#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main (){
    int opcion=0,opcion1;
    float a=0,b=0,resultado=0;
    do{
        printf("\n\t\t\t Calculadora simple: ");
        printf("\n\t\t1.-Suma\n\t\t2.-Resta\n\t\t3.-Multiplicaci%cn\n\t\t4.-Divisi%cn",162,162);
        printf("\n\t\tEscoja entre una de estas opciones: ");
        scanf("%i",&opcion);
        switch (opcion)
        {
        case 1:
            /* Suma */
                
            do{
                system("cls");    
                printf("\n\t\tInserte el primer t%crmino: ",130);
                scanf("%f",&a);
                printf("\n\t\tInserte el primer t%crmino: ",130);
                scanf("%f",&b);
                resultado=a+b;
                printf("\n\t\tEl resultado de la suma : %f+%f es igual a %.2f",a,b,resultado);
                printf("\n\t\t%cQuiere volver a sumar? \n\t1.-S%c   2.-No ",168,161);
                scanf("%i",&opcion1);
            }while(opcion1==1);
            break;
        case 2:
            do{
                system("cls");    
                printf("\n\t\t\n\t\t\n\t\tInserte el primer t%crmino: ",130);
                scanf("%f",&a);
                printf("\n\t\tInserte el segundo t%crmino: ",130);
                scanf("%f",&b);
                resultado=a-b;
                printf("\n\t\tEl resultado de la suma : %f-%f es igual a %.2f",a,b,resultado);
                printf("\n\t\t%cQuiere volver a restar? \n\t1.-S%c   2.-No " ,168,161);
                scanf("%i",&opcion1);
            }while(opcion1==1);
            break;
        case 3:
            do{
                system("cls");    
                printf("\n\t\tInserte el primer t%crmino: ",130);
                scanf("%f",&a);
                printf("\n\t\tInserte el tercer t%crmino: ",130);
                scanf("%f",&b);
                resultado=a*b;
                printf("\n\t\tEl resultado de la suma : %f*%f es igual a %.2f",a,b,resultado);
                printf("\n\t\t%cQuiere volver a multiplicar? \n\t1.-S%c   2.-No ",168,161);
                scanf("%i",&opcion1);
            }while(opcion1==1);
            break;
        case 4:
            do{
                system("cls");    
                printf("\n\t\tInserte el primer t%crmino: ",130);
                scanf("%f",&a);
                printf("\n\t\tInserte el cuarto t%crmino: ",130);
                scanf("%f",&b);
                resultado=a/b;
                printf("\n\t\tEl resultado de la suma : %f/%f es igual a %.2f",a,b,resultado);
                printf("\n\t\t%cQuiere volver a dividir? \n\t1.-S%c   2.-No ",168,161);
                scanf("%i",&opcion1);
            }while(opcion1==1);
            break;
        default:
        system("cls");
            printf("\n\t\tNO es valido ese numero o caracter: ");
            break;
        }
        opcion1=0;
        getchar();
        printf("%cQuiere repetir el programa? \n\t1.-S%c   2.-No ",168,161);
        scanf("%i",&opcion1);
    }while(opcion1==1);
    getch();
    return 0;
}
