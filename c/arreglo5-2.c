#include<stdio.h>
#define TAMANIO 15

int busquedaBinaria (const int b[],int claveDeBusqueda, int bajo, int alto);
void despliegaEncabezado(void);
void despliegaLinea(const int b[], int bajo,int medio,int alto);

int main(){
    int a [TAMANIO];
    int i;
    int llave;
    int resultado;
    for ( i = 0; i < TAMANIO; i++)
    {
        a[i] =2*i;
    }
    printf("Introduzca un numero entre 0 y 28: ");
    scanf("%d",&llave);
    despliegaEncabezado();
    resultado=busquedaBinaria(a, llave,0,TAMANIO-1);
    if (resultado !=-1)
    {
        printf("\n%d se encuentra en el elemento del arreglo\n",llave,resultado);
    }
    else
    {
        printf("\n%d no se encuentra\n",llave);
    }
    return 0;    
}

int busquedaBinaria(const int b[], int claveDeBusqueda, int bajo, int alto){
    int central;

    while (bajo<=alto)
    {
        central =(bajo+alto)/2;
    
        despliegaLinea(b,bajo,central,alto);
        if (claveDeBusqueda ==b[central])
        {
            return central;
        }
        else if (claveDeBusqueda <b[central])
        {
            alto=central-1;
        }else{
            bajo=central+1;
        }
        
    }
    return -1;
}
void despliegaEncabezado(void){
    int i;
    printf("\nSubindices:\n");
    for ( i = 0; i < TAMANIO; i++)
    {
        printf("%3d",i);
    }
    printf("\n");
    for ( i = 1; i <= 4*TAMANIO; i++)
    {
        printf("-");
    }
    printf("\n");    
}
void despliegaLinea(const int b[],int baj,int cen, int alt){
    int i;
    for ( i = 0; i < TAMANIO; i++)
    {
        if (i<baj||i>alt)
        {
            printf(" ");
        }
        else if (i==cen)
        {
            printf("%3d*",b[i]);
        }else
        {
            printf("3%d",b[i]);
        }
        
        
        
    }
    printf("\n");
    
}
