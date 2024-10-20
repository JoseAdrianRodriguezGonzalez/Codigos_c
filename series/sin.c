#include<stdio.h>
double sin_approx(double x,int terms);
int main(int argc, char *argv[]){
    double x=1.2;
    double a=sin_approx(x,100000);
    printf("sin(%lf)=%lf",x,a);
    return 0;
}
double sin_approx(double x,int terms){
    
    double sx=0,facto=x;
    for(int k=0;k<terms;k++){
        sx+=(2*((k+1)%2)-1)*facto;
        facto*=(x/(2*(k+1)+1))*(x/(2*(k+1)));

    }
    return sx;
}