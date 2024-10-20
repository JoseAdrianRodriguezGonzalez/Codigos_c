#include<stdio.h>
typedef struct Z{
    float real;
    float imaginary;
}Z;
Z get(void);
Z suma(Z z1, Z z2);
void print(Z z1);
int main(){
    Z z1,z2;
    z1=get();
    z2=get();
    print(suma(z1,z2));
    return 0;
}
Z get(void){
    Z z1;
    printf("Dame la parte real");
    scanf("%f",&z1.real);
    printf("Dame la parte imaginaria");
    scanf("%f",&z1.imaginary);
    return z1;
} 
void print(Z z1){
    printf("Z=%f%+fi\n",z1.real,z1.imaginary);
}
Z suma(Z z1, Z z2){
    Z z3;
    z3.real=z1.real+z2.real;
    z3.imaginary=z1.imaginary+z2.imaginary;
    return z3;
}
Z suma(Z z1, Z z2){
    Z z3;
    z3.real=z1.real-z2.real;
    z3.imaginary=z1.imaginary-z2.imaginary;
    return z3;
}
Z multiplicacion(Z z1,Z z2){
    Z z3;
    z3.real=((z1.real*z2.real)-(z1.imaginary*z2.imaginary));
    z3.imaginary=(z1.real*z2.imaginary)+(z1.imaginary*z2.real);
    return z3;
}