#include<stdio.h>
#include<conio.h>

int main(){
    int numero,j,i=0, a[100];
    printf("\n\t\t\tDe decimal a binario");
    printf("\n\t\t\t Inserte un n%cmero: ",163);
    scanf("%i",&numero);
    i=0;
    while(numero>0){
        a[i]=numero%2;
        numero/=2;
        ++i;
    }
    for(j=i-1;j>=0;--j){
        printf("%i",a[j]);
    }
    getch();
    return 0; 
}
