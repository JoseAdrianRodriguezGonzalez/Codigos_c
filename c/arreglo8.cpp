/*Figurade 6.|0.c
Manipulación de arregñps de caracteres como cadenas*/
#include<stdio.h>
/*La función main comienza la ejecución del programa*/
int main(){
    char cadena1[20]; //Reserva 20 caracteres
    char cadena2[]="literal de cadena";//reserva 18 caracteres
    int i;//contador
    /*Lee la cadena del usuario y la introduce en el arreglo cadena1*/
    printf("Introduce una cadena: ");
    scanf("%s",cadena1);//Entrada que finaliza con un espacio en blanco

    /*Muestra las cadenas*/
    printf("La cadena es: %s\ncadena2 es %s\n"
    "La cadena1 con espacios entre caracteres es: \n",cadena1,cadena2);

    /*Muestra los caracteres hasta que encuentra el caracter nulo*/
    for(i=0;cadena1[ i ]!='\0';i++){
        printf("%c ",cadena1[ i ]);
    }//fIN DE FOR
    printf("\n");
    return 0;//indica que terminaos exitosamente     
}//fin de main