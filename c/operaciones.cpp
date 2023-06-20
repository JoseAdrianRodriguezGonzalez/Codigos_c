#include<stdio.h>
#include<stdlib.h>
int main(){
    int x, tabla[10];
    int sum,res,mul,div;
    for(x=0;x<10;x++){
        printf("Introduzca n%cmero: \n",163);
        scanf("%d",&tabla[x]);
    }
    sum=tabla[0];
    res=tabla[0];
    mul=tabla[0];
    div=tabla[0];
    for ( x = 0; x < 10; x++)
    {
        sum+=tabla[x];
        res-=tabla[x];
        mul*=tabla[x];
        div/=tabla[x];
    }
    printf("Suma: %d\n",sum);
    printf("Resta: %d\n",res);
    printf("Multiplicaci%cn: %d\n",162,mul);
    printf("divisi%cn: %d\n",162,div);
    system("PAUSE");
    return 0;
    
}