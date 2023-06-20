#include<stdio.h>
#define TAMANIO 100

int busquedaLineal ( const int arreglo[], int llave, int tamanio);

int main(){
    int a [TAMANIO];
    int x;
    int llaveBusqueda;
    int elemento;

    for ( x = 0; x < TAMANIO; x++)
    {
        a[x] =2*x;
    }
    printf("Introduzca la llave de busqueda entera:\n");
    scanf("%d",&llaveBusqueda);

    elemento =busquedaLineal(a,llaveBusqueda,TAMANIO);

    if(elemento !=-1){
        printf("Encontre el valor en el elemento %d\n",elemento);
    }
    else{
        printf("Valor no encontrado");
    }
 return 0;
}
/*Compara la llave con cada elemento del arreglo hasta que localiza el elemento o hasta que alcanza el final del arreglo; devuelvue el subíndice del elemento*/

int busquedaLineal ( const int arreglo[], int llave, int tamanio){
    int n;
    for ( n = 0; n < TAMANIO; n++)
    {
        if (arreglo[n]==llave)
        {
            return n;
        }
        
    }
    return -1;
}