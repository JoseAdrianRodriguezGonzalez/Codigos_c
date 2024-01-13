#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,y=0,tabla[100],suma=0;
    for ( x = 0; x <= 100; x++)
    {
        if (x%2==0)
        {
            tabla[y]=x;
            y++;
        }
    }
    for ( x = 0; x < y; x++)
    {
        suma+=tabla[x];
    }
    printf("%d\n",suma);
    system("PAUSE");
    return 0;
    
}
