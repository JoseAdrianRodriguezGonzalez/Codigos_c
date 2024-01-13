#include<stdio.h>
#include<conio.h>
int main (){
    float calificacion;
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
    getch();
    return 0;
}
