#include<stdio.h>
#define TAMANIO 99
/*Este programa introduce el tema de análisis de datos calcula la media, la mediana y la moda de datos*/
/*Prototippos*/
void media (const int resp[]);
void mediana(int resp[]);
void moda(int frec[],const int resp[]);
void ordenanmBurbuja(int a[]);
void imprimeArreglo(const int a[]);

int main(){
    int frecuencia [10] ={0};
    int respuesta [TAMANIO] ={
        6,7,8,9,8,7,8,9,8,9,
        7,8,9,5,9,8,7,8,7,8,
        6,7,8,9,3,9,8,7,8,7,
        7,8,9,8,9,8,9,7,8,9,
        6,7,8,7,8,7,9,8,9,2,
        7,8,9,8,9,8,9,7,5,3,
        5,6,7,2,5,3,9,4,6,4,
        7,8,9,6,8,7,8,9,6,8,
        7,4,4,2,5,3,8,7,5,6,
        4,5,6,1,6,5,7,8,7
    };
    media(respuesta);
    mediana(respuesta);
    moda(frecuencia,respuesta);
    return 0;
}

void media(const int resp[]){
    int j;
    int total =0;

    printf("%s\n%s\n%s\n", "********","Media","********");

    for ( j = 0; j < TAMANIO; j++)
    {
        total+=resp[j];
    }
    printf("La media es el valor promedio de los datos.\n""La media es igual al total de \n""todoslos elementos de datos divididos por\n""el numero de elementos de datos (%d).La media\n""en esta ejecucion es :%d /%d =%.4f\n\n",TAMANIO,total,TAMANIO,(double) total/TAMANIO);
}
void mediana(int resp[]){
    printf("\n%s\n%s\n%s\n%s","********","Mediana","********","El arreglo de respuestas desordenado es");
    imprimeArreglo(resp);
    ordenanmBurbuja(resp);
    printf("\n\nEl arreglo ordenado es");
    imprimeArreglo(resp);

    printf("\n\nLa mediana es el elemento %d del\n""arreglo ordenado de elementos %d.\n""Para esta ejecucion la mediana es %d\n\n",TAMANIO/2,TAMANIO,resp[TAMANIO/2]);
}

void moda(int frec [],const int resp[]){
    int rango;
    int j;
    int h;
    int masGrande =0;
    int valorModa =0;
    printf("\n%s\n%s\n%s\n","********","Moda","********");

    for ( rango = 1; rango<=9;rango++)
    {
        frec[rango] =0;
    }

    for ( j = 0; j < TAMANIO; j++)
    {
        ++frec[resp[j]];
    }
    printf("%s%11s%19s\n\n%54s\n%54s\n\n","Respuesta","frecuecnia","histograma","1 1 2 2","5 0 5 0 5");
    for (rango = 1; rango <= 9; rango++)
    {
        printf("%8d%11d",rango,frec[rango]);
        if (frec[rango] >masGrande){
            masGrande=frec[rango];
            valorModa=rango;
        }
        for ( h = 1; h <= frec[rango]; h++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("La moda es el valor mas frecuente.\n""Para esta ejecucionla moda es %d de lo cual ocurrio"" %d veces.\n",valorModa,masGrande);
    
}

void ordenanmBurbuja (int a[]){
    int pasada;
    int j;
    int almacena;
    for ( pasada = 1; pasada < TAMANIO; pasada++)
    {
        for ( j = 0; j < TAMANIO; j++)
        {
            if (a[j]>a[j+1])
            {
                almacena=a[j];
                a[j]=a[j+1];
                a[j+1]=almacena;
            }
            
        }
        
    }
    
}
void imprimeArreglo (const int a[]){
    int j;
    for ( j = 0; j < TAMANIO; j++)
    {
        if (j%20==0)
        {
            printf("\n");
        }
        printf("%2d",a[j]);
    }
    
}