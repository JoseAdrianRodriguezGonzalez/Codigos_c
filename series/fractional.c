#include<stdio.h>
double fractional(double x,int terms);
int main(){
    double x=2,a=fractional(x,100);
    printf("1/(1-%lf)=%lf",x,a);
    return 0;
}
double fractional(double x,int terms){
    double sx=0,fract=1;
    for(int i=0;i<terms;i++){
        sx+=fract;
        fract*=x;
    }
    return sx;
}