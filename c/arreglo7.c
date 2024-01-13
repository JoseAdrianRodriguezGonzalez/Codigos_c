/*Lancza un dado de 6 lados*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAMANIO 7
/*L función main comienza la ejecución dle programa*/
int main(){
    int cara;// valor aleatorio del dado entre 1 a 6
    int tiro;//contador de tiros 1 a 6000
    int frecuencia[TAMANIO]={0};//inicializa a 0 la cuenta
    srand(time(NULL));//Generador de la semilla de números aleatorios
//Tira el dado 6000 veces
    for ( tiro = 1; tiro <= 6000; tiro++)
    {
        cara =1+rand()%6;
        ++frecuencia[cara];//Remplaza la isntrucción switch de la linea 26 de la figura
    }//Fin del for
    printf("%s%17s\n","Cara","Frecuencia");
//muestra los elementos 1-6 de frecuencia de fomra tabular
    for ( cara = 1; cara < TAMANIO; cara++)
    {
        printf("%4d%17d\n",cara,frecuencia[cara]);
    }//fin de for
    return 0;//terminaci´+on exitsoa
}//fin de main
