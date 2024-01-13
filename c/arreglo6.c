/*Figura 6.8 
Programa de impersión de un Histograma*/
#include<stdio.h>
#define TAMANIO 10

/*La función main comienza la ejecución del programa*/
int main(){
    
    /*Usar una lista de inicialización para incializar el arreglo n*/
    int n [TAMANIO]={19,3,15,7,11,9,13,5,17,1};
    int i;//Contador for externo para los elementos dela rreglo
    int j;//Contador for interno cuenta *s en cada barra del histograma
    
    printf("%s%13s%17s\n","Elemento","Valor","Histograma");
    
/*Para cada  elemento del arreglo n, muestra una barra en el histograma*/
    for ( i = 0; i < TAMANIO; i++){
        printf("%7d%13d ",i,n[i]);

        for ( j = 1; j <= n[i]; j++){//imprime una barra
            printf("%c",'*');
        }//Fin del for interno

        printf("\n");//Find una barra del histograma
    }//Findel for externo
    
    return 0;//Terminación exitosa

}
