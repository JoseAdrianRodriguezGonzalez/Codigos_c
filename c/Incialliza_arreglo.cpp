/*Inciializa un arreglo*/
#include<stdio.h>
 /*La función main cmienza la ejecución del programa*/
 int main(){
     int n[10];//n es un arreglo de 10 entero
     int i; //Contador dew las iteraciones
     /*Inicializa los elementos del arreglo n a 0 del areglo*/
     for(i=0; i<10;i++){
         n[i]=0;//Establece eleemnto i a 0
     }
     printf("%s%13s\n","elemento","valor");
     /*Muestra el contenido del arreglo n en forma tabular*/
     for ( i = 0; i < 10; i++)
     {
         printf("%7d%13d\n",i,n[i]);

     }
     //fin de for
    return 0;//termina exitosamente
 }//fin de main