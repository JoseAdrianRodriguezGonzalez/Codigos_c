#include<stdio.h>
#include<stdlib.h>
int main (){
    int x,z,tabla[100],contador,i=0;;
    for ( x = 1; x <= 100; x++)
    {
        contador=0;
        for ( z = 1; z <= x; z++)
        {
            if(x%z==0){
                contador++;
            }
        }
        if(contador==2){
            tabla[i]=x;
            i++;
        }
    }
    for ( x = 0; x < i; x++)
    {
        printf("%d\n",tabla[x]);
    }
    system("PAUSE");
    return 0;
}