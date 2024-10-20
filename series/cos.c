#include<stdio.h>
double cos_approx(double x, int terms);
int main(int argc,int *argv[]){
    double x=1.2, a=cos_approx(x,10);
    printf("cos(%lf)=%lf",x,a);
    //0.35235
    return 0;
}
double cos_approx(double x, int terms){
    double sx=0,fact=1;
    for(int i=0;i<terms;i++){
        sx+=(2*((i+1)%2)-1)*fact;
       // printf("%lf\t",sx);
        fact*=(x/(2*(i+1)))*(x/(2*(i+1)-1));

    }
    return sx;
}