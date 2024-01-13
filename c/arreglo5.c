#include<stdio.h>
#include<locale.h>

void despliegaArreglo(const int a [][3]);
int main(){
    int arreglo1[2][3] ={{1,2,3},{4,5,6}};
    int arreglo2[2][3] ={1,2,3,4,5};
    int arreglo3[2][3]={{1,2},{4}};

    printf("Los valores en el arreglo1 por l%cnea son:\n",161);
    despliegaArreglo(arreglo1);
    
    printf("Los valores en el arreglo2 por l%cnea son:\n",161);
    despliegaArreglo(arreglo2);
    
    printf("Los valores en el arregl3 por l%cnea son:\n",161);
    despliegaArreglo(arreglo3);

    return 0;
    
}

void despliegaArreglo (const int a[][3]){
    int i;
    int j;
    for ( i = 0; i <= 1; i++)
    {
        for ( j = 0; j <= 2; j++)
        {
            printf("%d",a[i][j]);
        }
    printf("\n");
    }
    
}
