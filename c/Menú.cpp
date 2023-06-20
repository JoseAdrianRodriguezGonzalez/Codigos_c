#include<stdio.h>
void suma(float x,float y);
void resta(float x,float y);
void prod(float x,float y);
void divi(float x,float y);
void(*p[4])(float x, float y)={suma,resta,prod,divi};

int main(void){
    float num1, num2;
    int opcion;
    printf("\nIntroducir dos numeros \n");
    scanf("%f%f",&num1,&num2);
    printf("1.-Suma\n");
    printf("2.-Resta\n");
    printf("3.-Multiplicacion\n");
    printf("4.-Division\n");
    do{
        printf("Seleccionar una opcion\n");
        scanf("%d",&opcion);
    }while(opcion<1||opcion>4);
    (*p[opcion-1])(num1,num2);
}
    void suma(float x, float y){
        printf("La suma vale:%f",x+y);
    }
    void resta(float x, float y){
        printf("La resta vale:%f",x-y);
    }
    void prod(float x, float y){
        printf("El producto vale:%f",x*y);
    }
    void divi(float x, float y){
        if (y==0)
        {
            printf("La division no es posible. Divisor=0");
        }else{
            printf("La division vale:%f",x/y);
        }       
    }