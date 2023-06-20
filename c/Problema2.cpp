#include<stdio.h>
struct datos
{
    char nombre[40];
    char pais[25];
};
struct atleta
{
    char deporte[30];
    struct datos pers;
    int nmedallas;
};
int main(){
    struct atleta ats[30];
    int e=0,natl=0,Mmay=0,mayor=0;
    printf("Introduzca la cantidad de atletas: ");
    scanf("%d",&natl);
    for ( e = 0; e < natl; e++)
    {
        printf("\n");
        printf("Nombre[%d]: ",e+1);
        scanf("%s",&ats[e].pers.nombre);
        printf("Nacionalidad[%d]: ",e+1);
        scanf("%s",&ats[e].pers.pais);
        printf("Deporte[%d]: ",e+1);
        scanf("%s",&ats[e].deporte);
        printf("Numero de medallas: ",e+1);
        scanf("%d",&ats[e].nmedallas);
        if (ats[e].nmedallas>mayor)
        {
            mayor=ats[e].nmedallas;
            Mmay=e;
        }
    }
    printf("\n\n%s es el atleta con mayor numero de medallas\n",ats[Mmay].pers.nombre);
}