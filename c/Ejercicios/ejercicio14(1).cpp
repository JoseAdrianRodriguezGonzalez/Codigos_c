#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
    int i,x=0,vector[20],n=20,dato,centro,inf=0,sup=n-1;
    for ( i = 0; i < 20; i++)
    {
        printf("Escriba un numero: ");
        scanf("%d",&vector[i]);
    }
    printf("Escriba el valor a buscar: ");
    scanf("%d",&dato);
    while (inf<=sup)
    {
        centro=(sup+inf)/2;
        if(vector[centro]==dato){
            printf("Existe\n");
            x=1;
            break;
        }else if (dato<vector[centro]){
            sup=centro-1;
        }else{
            inf=centro+1;
        }
    }
    
    if(x==0){
        printf("No existe\n");
    }
    system("PAUSE");
    return 0;
}