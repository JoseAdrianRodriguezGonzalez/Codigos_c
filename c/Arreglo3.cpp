/*Figura6..5
Incializ a los elementos del arreglo s a los enteros pares de 2 a 20*/
#include<stdio.h>
#define TAMANIO 10
/*La función main comienza la ejecución del programa*/
int main(){
    /*Se puede utilizafr la consgange simbólica tamanio para especificar el tamaño del arreglo*/
    int s[TAMANIO];//El arreglo s contienen 10 elementos
    int j;//contador
    for(j=0 ; j <TAMANIO; j++){//Estable los valores
        s[j] =2+2*j;
    }//fin de for
    printf("%s%13s\n","Elemento","Valor");
    //muestra el contenido el arreglo s en forma tabular
    for(j=0;j<TAMANIO;j++){
        printf("%7d%13d\n",j, s[j]);
    }//fin de for
    return 0;//resulto bien
}//fin de main