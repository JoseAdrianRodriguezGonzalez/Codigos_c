#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,numero1[5],numero2[5];
    for ( i = 0; i < 5; i++)
    {
        printf("Escriba un numero: ");
        scanf("%d",&numero1[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        numero1[i]*=2;
        numero2[i]=numero1[i];
    }
    for ( i = 0; i < 5; i++)
    {
        printf("%d\n",numero2[i]);
    }
    system("PAUSE");
    return 0;
}