#include<stdio.h>
int Pepe(),Ana(),Maria();
int(*mf[])()={Pepe,Ana,Maria};

int main(){
    int j;
    for ( j = 0; j < 3; j++)
    {
        (*mf[j])();
    }
    return 0;
}
int Pepe(){
    printf("Soy Pepe\n");
    return 0;
}
int Ana(){
    printf("Soy Ana\n");
    return 0;
}
int Maria(){
    printf("Soy Maria\n");
    return 0;
}
