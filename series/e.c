#include<stdio.h>
double e_approx(double x, int terms);
int main(int argc,char *argv[]){
    printf("%lf",e_approx(1,1000));
    return 0;
}
double e_approx(double x, int terms){
    double sx,fact=1;
    for(int i=0;i<terms;i++){
        sx+=fact;
        fact*=x/(i+1);
    }
    return sx;
}