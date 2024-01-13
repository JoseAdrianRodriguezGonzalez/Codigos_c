#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
    int opcion=0,opcion1=0;
     int numero,contador,i;//variables del primer programa
     int a,b,c;//variables del segundo programa
     float calificacion;//variabgles del tercer programa
    int opcion2=0,opcion3;
    float a1=0,b1=0,resultado=0;
     do{
        printf("\n\t\t\tProgramas de tareas: \n\t\t1.-Descomponer por factor primo\n\t\t2.-N%cmero mayor\n\t\t3.-Calificaci%cn seg%cn nota\n\t\t4.-Convertir de binario a decimal\n\t\t5.-Calculadora simple",163,162,163);
        printf("\n\t\t%cC%cal programa quiere iniciar? ",168,163);
        scanf("%i",&opcion);
        switch (opcion)
        {
        case 1:
            do
            {
                printf("Que numero quiere dividr? ");
                scanf("%i",&numero);
                for(i=2;numero>1;i++){
                    int contador=0;
                    while (numero%i==0)
                    {
                        numero/=i;
                        contador++;
                        if(numero%i!=0){
                            if (contador>1)
                            {
                                printf("%i^%ix",i,contador);
                                }else if (numero>1)
                                {
                                    printf("%ix",i);
                                }
                                else{
                                    printf("%i",i);
                                }
                
                    
                            }
                
                
                        }
            
                    }
                    printf("\n\t\t%cQuiere repetir el programa?. \n\t1.-S%c   2.-No ",168,161);
                    scanf("%i",&opcion1);

            } while (opcion1==1);
            
            break;
        case 2:
        do{
            printf("\n\t\t\t\tVamos a determinar el n%cmero mayor",163);
            printf("\n\t\tImprima su primer valor: ");
            scanf("%i",&a);
            printf("\n\t\tImprima su segundo valor: ");
            scanf("%i",&b);
            printf("\n\t\tImprima su tercer valor: ");
            scanf("%i",&c);
            if(a>=b&&a>=c){
                printf("%i es el mayor",a);
            }
            else if(b>=c&&b>=a){
                printf("%i es el mayor",b);
            }
            else if(c>=a&&c>=b){
                printf("%i es el mayor",c);
            }
            printf("\n\t\t%cQuiere repetir el programa?. \n\t1.-S%c   2.-No ",168,161);
            scanf("%i",&opcion1);

            } while (opcion1==1);
            break;
        case 3:
        do
        {
                 printf("\n\t\t\t\t Vamos a checar si aprobaste o reprobaste");
    do{
       
        printf("\n\t\t\t EScriba una calificaci%cn: ",162);
        scanf("%f",&calificacion);
        if(calificacion<0 ||calificacion>10){
            printf("\t\aERROR--la calificacion tiene que estar dentro del rango de 0 a 10");
        }
        }while(calificacion<0 ||calificacion>10);
        if(calificacion>5){
            printf("%c%c%c Felicidades!!!, tu calificaci%cn de %.2f es aprobatoria :)",173,173,173,162,calificacion);
        }
        else{
            printf("%c%c%cMala suerte!!!, tu calificaci%cn de %.2f es muy baja, reprobaste :(",173,173,173,162,calificacion);
        }
        printf("\n\t\t%cQuiere repetir el programa? \n\t1.-S%c   2.-No ",168,161);
        scanf("%i",&opcion1);
        } while (opcion1==1);
        
            break;
        case 4:
        do
        {
            int numero1,j,i=0, a[100];//variables del cuarto programa
            printf("\n\t\t\tDe decimal a binario");
            printf("\n\t\t\t Inserte un n%cmero: ",163);
            scanf("%i",&numero1);
            i=0;
            while(numero1>0){
                a[i]=numero1%2;
                numero1/=2;
                ++i;
            }
            for(j=i-1;j>=0;--j){
                printf("%i",a[j]);
            }
            printf("\n\t\t%cQuiere repetir el programa? \n\t1.-S%c   2.-No ",168,161);
            scanf("%i",&opcion1);
        } while (opcion1==1);
        
            break;
        case 5:
        do{
        printf("\n\t\t\t Calculadora simple: ");
        printf("\n\t\t1.-Suma\n\t\t2.-Resta\n\t\t3.-Multiplicaci%cn\n\t\t4.-Divisi%cn",162,162);
        printf("\n\t\tEscoja entre una de estas opciones: ");
        scanf("%i",&opcion2);
        switch (opcion2)
        {
        case 1:
            /* Suma */
                
            do{
                system("cls");    
                printf("\n\t\tInserte el primer t%crmino: ",130);
                scanf("%f",&a1);
                printf("\n\t\tInserte el primer t%crmino: ",130);
                scanf("%f",&b1);
                resultado=a1+b1;
                printf("\n\t\tEl resultado de la suma : %f+%f es igual a %.2f",a1,b1,resultado);
                printf("\n\t\t%cQuiere volver a sumar? \n\t1.-S%c   2.-No ",168,161);
                scanf("%i",&opcion3);
            }while(opcion3==1);
            break;
        case 2:
            do{
                system("cls");    
                printf("\n\t\t\n\t\t\n\t\tInserte el primer t%crmino: ",130);
                scanf("%f",&a1);
                printf("\n\t\tInserte el segundo t%crmino: ",130);
                scanf("%f",&b1);
                resultado=a1-b1;
                printf("\n\t\tEl resultado de la suma : %f-%f es igual a %.2f",a1,b1,resultado);
                printf("\n\t\t%cQuiere volver a restar? \n\t1.-S%c   2.-No " ,168,161);
                scanf("%i",&opcion3);
            }while(opcion3==1);
            break;
        case 3:
            do{
                system("cls");    
                printf("\n\t\tInserte el primer t%crmino: ",130);
                scanf("%f",&a1);
                printf("\n\t\tInserte el tercer t%crmino: ",130);
                scanf("%f",&b1);
                resultado=a1*b1;
                printf("\n\t\tEl resultado de la suma : %f*%f es igual a %.2f",a1,b1,resultado);
                printf("\n\t\t%cQuiere volver a multiplicar? \n\t1.-S%c   2.-No ",168,161);
                scanf("%i",&opcion3);
            }while(opcion3==1);
            break;
        case 4:
            do{
                system("cls");    
                printf("\n\t\tInserte el primer t%crmino: ",130);
                scanf("%f",&a1);
                printf("\n\t\tInserte el cuarto t%crmino: ",130);
                scanf("%f",&b1);
                resultado=a1/b1;
                printf("\n\t\tEl resultado de la suma : %f/%f es igual a %.2f",a1,b1,resultado);
                printf("\n\t\t%cQuiere volver a dividir? \n\t1.-S%c   2.-No ",168,161);
                scanf("%i",&opcion3);
            }while(opcion1==3);
            break;
        default:
        system("cls");
            printf("\n\t\tNO es valido ese numero o caracter: ");
            break;
        }
        opcion2=0;
        getchar();
        printf("%cQuiere repetir el programa? \n\t1.-S%c   2.-No ",168,161);
        scanf("%i",&opcion1);
    }while(opcion1==1);

            break;
        
        default:
            printf("\n\t\tEse no es un valor permitido");
            getchar();
            opcion1=0;
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
