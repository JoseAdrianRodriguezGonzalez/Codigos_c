#include<stdio.h>
#include<stdlib.h>
int main(){
    int numero1[5],numero2[5],numero3[10];
    int i,j,k;
    for ( i = 0; i < 5; i++)
    {
        printf("Escriba un numero: ");
        scanf("%d",&numero1[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        numero2[i]=numero1[i]*2;
    }
    for ( i = 0; i < 5; i++)
    {
        numero3[i]=numero1[i];
    }
    for ( i = 0; i < 5; i++)
    {
        numero3[5+i]=numero2[i];
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%d\n",numero3[i]);
    }
    system("PAUSE");
    return 0;
    
    
}
