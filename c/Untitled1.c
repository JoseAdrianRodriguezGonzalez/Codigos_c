#include <stdio.h>
#include<math.h>
int main(){
	int a, d;
	int resultado=0;
	float rad,seno=0;
	printf("Inserte el digito: ");
	scanf("%i", &a);
	printf("Inserte el segundo numero: ");
	scanf("%i", &d);
	resultado=a+d;
	printf("Este es su resultado: %i", resultado);
	float b= pow(8,3);
	printf("\nPotencia:%f",b);
	printf("\nIngrese dato:");
	scanf("%f", &rad);
	seno= sin(rad);
	printf("Su valor es:%f",seno);
	return 0;
}
