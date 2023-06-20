/*Incluye librerías*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
main(){
	float a,b,c,d,e,f,x,y;//Variables a usar en el sistema de ecuaciones
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
	printf("\n\n\t\t\t\t\t TAREA 2--Sistema de ecucaciones\n");
	printf("\t\t\t\t\t Por: Jos%c Adri%cn Rodr%cguez Gonz%clez",r,s,i,s);
	printf("\n\t\t\t\t\t Tercer Semestre ");

	/*Petición de datos*/
	printf("\nVamos a realizar un sistema de ecuaciones de 2x2");
	printf("\nInserte el coeficiente  a ");
	scanf("%f",&a);
	printf("Inserte el coeficiente b ");
	scanf("%f",&b);
	printf("Inserte el coeficiente c ");
	scanf("%f",&c);
	printf("Inserte el coeficiente d ");
	scanf("%f",&d);
	printf("Inserte el coeficiente e " );
	scanf("%f",&e);
	printf("Inserte el coeficiente f ");
	scanf("%f",&f); 
    /*Resoluciónd de sistema de ecuacion por suma y resta*/
	y = (a*f - c*d)/(a*e - b*d);
	x = (c - b*y)/a;
	/*Se imprime el resultado*/
	printf("Este es el valor de x: \n%f\nEste es el valor de y: \n%f",x,y);
	getch();
}
