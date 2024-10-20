#include<stdio.h>

long int s2l(char *argc){
    long int i =0,s=1,x=0;
    
    while (argc[i]>='0'&&argc[i]<='9')
    {
        x*=10;
        x+=argc[i++]-'0';
    }
    return x;
}
int main(int argc,char *argv[]){
    if(argc!=5)
        return -1;
    long int A,B,S,N,X;
    double Xf;
    A=s2l(argv[1]);
    B=s2l(argv[2]);
    S=s2l(argv[3]);
    N=s2l(argv[4]);
    X=(S-B*N)/(A-B);
    Xf=(S-B*N)/(double)(A-B);
    if(X>N||X<0)
        X=-1;
    else if(X!=Xf)
        X=-1;
    else
        printf("%ld",X);
    return 0;
}