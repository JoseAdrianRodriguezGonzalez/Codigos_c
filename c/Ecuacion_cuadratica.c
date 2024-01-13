/*Incluye la librería*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
main(){
	float a,b,c,d,e,f,x1,x2;//Variables a encontrar y coeficientes a pedir
	char r= 130,s=160,i=161;		//Letras
	/*Portada*/
	printf("\n\t\t\t  &&&&&  &&&&&&  &&&&&&   &&&&&&& &     &  &&&&&     &&&&&&&  &     &      ");
	printf("\n\t\t\t &      &      & &     &     &    &&    & &             &     &&    &     ");
	printf("\n\t\t\t &      &      & &      &    &    & &   & &             &     & &   &     ");
	printf("\n\t\t\t &      &      & &       &   &    &  &  & &   &&&       &     &  &  &     ");
	printf("\n\t\t\t &      &      & &      &    &    &   & & &     &       &     &   & &   ");
	printf("\n\t\t\t &      &      & &     &     &    &    && &     &       &     &    &&     ");
	printf("\n\t\t\t  &&&&&  &&&&&&  &&&&&&   &&&&&&& &     &  &&&&&     &&&&&&&  &     &            ");
	
	printf("\n\n\t\t\t\t\t\t      &"    );
	printf("\n\t\t\t\t\t\t    && && "    );
	printf("\n\t\t\t\t\t\t   &     &    ");
	printf("\n\t\t\t\t\t\t  &  &&&  & ");
	printf("\n\t\t\t\t\t\t  & &     &");
	printf("\n\t\t\t\t\t\t  & &     & "); 
	printf("\n\t\t\t\t\t\t  & &     & ");
	printf("\n\t\t\t\t\t\t  &  &&&  &   ");
	printf("\n\t\t\t\t\t\t   &     &   ");
	printf("\n\t\t\t\t\t\t    && && "    );
	printf("\n\t\t\t\t\t\t      &"    );
	printf("\n\n\t\t\t\t\t TAREA 2--Ecuaciones cuadraticas\n");
	printf("\t\t\t\t\t Por: Jos%c Adri%cn Rodr%cguez Gonz%clez",r,s,i,s);
	printf("\n\t\t\t\t\t Tercer Semestre ");
	/*Petición de datos*/
	printf("\nVamos a realizar una ecuacion cuadratica");
	printf(" \n Inserte a: ");
	scanf("%f",&a);
	printf(" Inserte b: ");
	scanf("%f",&b);
	printf(" Inserte c: ");
	scanf("%f",&c);
	/*Sacar las operaciones de x1 y x2 */
	x1=(-b+sqrt(pow(b,2)-(4*a*c)))/(2*a);
	x2=(-b-sqrt(pow(b,2)-(4*a*c)))/(2*a);	
	/*Imprime el resutlado*/
	printf("Este es el valor de x1: %f\n Este es el valor de x2:%f ",x1,x2);
	getch();
}
