#include<stdio.h>
double sin_approx(double x,int terms);
int main(int argc, char *argv[]){
    int n=0;
    double x=0;
    if(argc!=3){
        printf("Error");
        return -1;
    }
    //int
    int s=1,i=0;
    if(*(argv[2]+i)=='-'){
        s=-1;
        i++;
    }
    while(*(argv[2]+i)>='0'&&*(argv[2]+i)<='9'){
        n*=10;
        n+=*(argv[2]+i)-'0';
        i++;
    }

    //float
    double pot=0.1;
    s=1;
    i=0;
    if(*(argv[1]+i)=='-'){
        s=-1;
        i++;
    }
    
    while(*(argv[1]+i)>='0'&&*(argv[1]+i)<='9'){
        x*=10;
        x+=(*argv[1]+i)-'0';
        i++;
    }
    if(*(argv[1]+i)=='.'){
        i++;
        while(*(argv[1]+i)>='0'&&*(argv[1]+i)<='9'){
            x+=(*(argv[1]+i)-'0')*pot;
            pot*=0.1;
            i++;
        }
    }
    
    printf("%lf",x);
    printf("sin(%d)=%lf",n,sin_approx(x,n));
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