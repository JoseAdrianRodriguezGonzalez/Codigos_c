#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,y,sum=0,numeros[11][10];
    for ( y = 0; y < 10; y++)
    {
        for ( x = 0; x < 10; x++)
        {
            numeros[x][y]=(x*10)+1+y;
            sum+=numeros[x][y];
        }
    }
    for ( x = 0; x < 11; x++)
    {
        for ( y = 0; y < 10; y++)
        {
            printf("%d ",numeros[x][y]);
        }
    }
    system("PAUSE");
    return 0;
}