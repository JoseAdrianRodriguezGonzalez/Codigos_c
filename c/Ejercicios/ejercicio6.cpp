#include<stdio.h>
#include<stdlib.h>

int main (){
    int x,tabla[10];
    int suma,resta,multi,divi;
    for(x=0;x<11;x++){
        printf("Escriba el numero que guste: ");
        scanf("%d",&tabla[x]);
    }
    suma=tabla[0];
    resta=tabla[0];
    multi=tabla[0];
    divi=tabla[0];
    for ( x = 1; x < 10; x++)
    {
        suma+=tabla[x];
        resta-=tabla[x];
        multi*=tabla[x];
        divi/=tabla[x];
    }
    printf("%d\n",suma);
    printf("%d\n",resta);
    printf("%d\n",multi);
    printf("%d\n",divi);
    system("PAUSE");
    return 0;
}
