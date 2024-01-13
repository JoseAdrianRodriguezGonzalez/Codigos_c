#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,tabla[20],buscar,inf=0,n=20,sup=n-1,cont=0;
    for ( x = 0; x < 20; x++)
    {
        printf("Escriba un numero: ");
        scanf("%d",&tabla[x]);
    }
    printf("Numero a buscar: ");
    scanf("%d",&buscar);
    for ( x = 0; x <= sup; x++)
    {
            if(tabla[x]==buscar){
                inf=1;
                cont++;
            }
    }
    if (inf==1)
    {
        printf("Existe %d veces\n",cont);
    }
    else{
        printf("No existe\n");
    }
    system("PAUSE");
    return 0;
}
