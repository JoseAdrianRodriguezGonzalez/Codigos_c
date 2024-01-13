#include<stdio.h>
#include<conio.h>

int main(){
    int numero,contador;
    printf("Que numero quiere dividr? ");
    scanf("%i",&numero);
    int i; 
    for(i=2;numero>1;i++){
        int contador=0;
        while (numero%i==0)
        {
            numero/=i;
            contador++;
            if(numero%i!=0){
                if (contador>1)
                {
                    printf("%i^%ix",i,contador);
                }else if (numero>1)
                {
                    printf("%ix",i);
                }
                else{
                    printf("%i",i);
                }
            
                
            }
            
            
        }
        
    }
    getch();
    return 0;
}
