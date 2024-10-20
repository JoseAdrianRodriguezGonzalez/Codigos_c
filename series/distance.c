#include<stdio.h>
#define SWAP(a,b){\
    a^=b;\
    b^=a;\
    a^=b;\
}
long int s2l(char *argc){
    long int i =0,s=1,x=0;
    if(argc[i]=='-'){
        s=-1;
        i++;
    }
    while (argc[i]>='0'&&argc[i]<='9')
    {
        x*=10;
        x+=argc[i]-'0';
        i++;
    }
    return x*s;
}
int main(int argc,char *argv[]){
   long int A, B, C, D, X;
    if(argc!=5)
        return -1;
    A = s2l(argv[1]);
	B = s2l(argv[2]);
	C = s2l(argv[3]);
	D = s2l(argv[4]);
	printf("%ld\t%ld\t%ld\t%ld\n", A, B, C, D);
	if(A>B)
		SWAP(A,B);
	if(C>D)
		SWAP(C,D);
	if(A>C)
		SWAP(A,C);
	if(B>D)
		SWAP(B,D);
	X = D-A;
	printf("%ld\t%ld\t%ld\t%ld\n", A, B, C, D);
	printf("%ld\n", X);
	return 0;
}