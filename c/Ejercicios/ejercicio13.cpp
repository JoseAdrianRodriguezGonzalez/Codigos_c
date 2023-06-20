#include<stdio.h>
#include<stdlib.h>
int main(){
    float aux,tabla[10];
    int i,j,n=10;
    for ( i = 0; i < n; i++)
    {
        printf("Escriba un numero: ");
        scanf("%f",&tabla[i]);
    }
    for ( i = 0; i < n-1; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if(tabla[i]<tabla[j]){
                aux=tabla[i];
                tabla[i]=tabla[j];
                tabla[j]=aux;
            }
        }
    }
    for ( i = 0; i < n; i++)
    {
        printf("%f\n",tabla[i]);
    }
    system ("PAUSE");
    return 0;
    
}