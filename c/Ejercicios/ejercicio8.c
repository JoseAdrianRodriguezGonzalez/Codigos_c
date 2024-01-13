#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,n=5;
    float numero1[5],numero2[5],numero3[10];
    for ( i = 0; i < n; i++)
    {
        printf("Escriba un numero: ");
        scanf("%f",&numero1[i]);
    }
    for ( i = 0; i < n; i++)
    {
        printf("Escriba un numero: ");
        scanf("%f",&numero2[i]);
    }
    for ( i = 0; i < n; i++)
    {
        numero3[i]=numero1[i];
    }
    
    for ( i = 0; i < n; i++)
    {
        numero3[n+i]=numero2[i];
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%.2f\n",numero3[i]);
    }
    system("PAUSE");
    return 0;
}
