/*menor que*/
/*Librerías*/
#include<stdio.h>
#include<conio.h>
main(){
	/*Variables*/
	int a,b,c,d,e,min;
	
	/*Ingrese los datos*/
	printf("Ingrese los numeros: ");
	printf("a: ");
	scanf("%i",&a);
	printf("b: ");
	scanf("%i",&b);
	printf("c: ");
	scanf("%i",&c);
	printf("d: ");
	scanf("%i",&d);
	printf("e: ");
	scanf("%i",&e);
	/*SI a es menor que*/
	if(a<=b&&a<=c&&a<=d&&a<=e){
		min=a;
	}
	else{/*Si b es menor que*/
		if(b<=a&&b<=c&&b<=d&&b<=e){
			min=b;
		}
		else{/*Si c es menor que*/
			if(c<=b&&c<=a&&c<=d&&c<=e){
				min=c;
			}
			else{/*Si d es menor que*/
				if(d<=b&&d<=a&&d<=c&&d<=e){
					min=d;
				}
				else{/*Si e menor que*/
					if(e<=b&&e<=a&&e<=c&&e<=d){
						min=e;
					}
				}
			}
		}
	}
	printf("El menor numero es: %i",min);//se imprime el menor
}
