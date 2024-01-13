#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c;
    printf("\n\t\t\t\tVamos a determinar el n%cmero mayor",163);
    printf("\n\t\tImprima su primer valor: ");
    scanf("%i",&a);
    printf("\n\t\tImprima su segundo valor: ");
    scanf("%i",&b);
    printf("\n\t\tImprima su tercer valor: ");
    scanf("%i",&c);
    if(a>=b&&a>=c){
        printf("%i es el mayor",a);
    }
    else if(b>=c&&b>=a){
        printf("%i es el mayor",b);
    }
    else if(c>=a&&c>=b){
        printf("%i es el mayor",c);

    }
    getch();
    return 0;
}
