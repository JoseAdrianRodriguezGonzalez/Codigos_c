/*Mayor que
librerías*/
#include<stdio.h>
#include<conio.h>
main(){/*Variables*/
	int a,b,c,d,e,max;
	/*Ingresa numeros*/
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
	scanf("%i",&e);/*Si a mayor que*/
	if(a>=b&&a>=c&&a>=d&&a>=e){
		max=a;
	}
	else{/*Si b es mayor que*/
		if(b>=a&&b>=c&&b>=d&&b>=e){
			max=b;
		}
		else{/*Si c es mayor que*/
			if(c>=b&&c>=a&&c>=d&&c>=e){
				max=c;
			}
			else{/*Si d es mayor que*/
				if(d>=b&&d>=a&&d>=c&&d>=e){
					max=d;
				}
				else{/*Si e es mayor que*/
					if(e>=b&&e>=a&&e>=c&&e>=d){
						max=e;
					}
				}
			}
		}
	}
	printf("El mayor numero es:%i",max);//Se imprime el numero
}
