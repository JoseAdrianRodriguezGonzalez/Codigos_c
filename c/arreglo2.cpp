#include<stdio.h>

void intentaModifElArreglo(const int b[]);

int main(){
    int a[]={10,20,30};
    intentaModifElArreglo(a);
    printf("%d %d %d\n",a[0],a[1],a[2]);
    return 0;
    
}
void intentaModifElArreglo(const int b[]){
    b[0]/=2;
    b[1]/=2;
    b[2]/=2;
}