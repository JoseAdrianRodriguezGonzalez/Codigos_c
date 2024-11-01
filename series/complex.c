#include<stdio.h>
typedef struct Z{
    float real;
    float imaginary;
}Z;
Z get(void);
Z suma(Z z1, Z z2);
Z multiplicacion(Z z1,Z z2);
Z conjugado(Z z1);
Z inverse(Z z1);
Z division(Z z1,Z z2);
void print(Z z1);
float mag(Z z1);
float ang(Z z1);
int main(){
    Z z1,z2;
    z1=get();
    z2=get();
    float x;
    print(suma(z1,z2));
    print(conjugado(z1));
    print(inverse(z1));
    x=mag(z1);
    printf("|Z1|=%f",x);
    x=ang(z1);
    printf("Ang(z1)=%f",x);
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
Z conjugado(Z z1){
    Z z3;
    z3.real=z1.real;
    z3.imaginary=-z1.imaginary;
    return z3;
}

Z inverse(Z z1){
    Z z3;
    if(((z1.real*z1.real)+(z1.imaginary*z1.imaginary))){
        z3.real=z1.real/((z1.real*z1.real)+(z1.imaginary*z1.imaginary));
        z3.imaginary=-z1.imaginary/((z1.real*z1.real)+(z1.imaginary*z1.imaginary));
        return z3;
    }
    else{
        z3.real=0;
        z3.imaginary=0;
    }
    return z3;

}
Z division(Z z1,Z z2){
    return multiplicacion(z1,inverse(z2));
}
float mag(Z z1){
    return sqrt(z1.real*z1.real+z1.imaginary*z1.imaginary);
}
float ang(Z z1){
    return atanf(z1.imaginary/z1.real);
}