#include<stdio.h>
#include<conio.h>
main(){
	int  a,b,c;
		char um=163,am=160,im=161,pre=168,om=162,em= 130;//caracteres
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

	printf("\n\n\t\t\t\t\t TAREA 1-- Tipo de tri%cngulo \n",am);
	printf("\t\t\t\t\t Por: Jos%c Adri%cn Rodr%cguez Gonz%clez",em,am,im,am);
	printf("\n\t\t\t\t\t Tercer Semestre ");;
	printf("\n\t\t\tVamos a ver si que tipo de triangulo es con los valores dados:  ");
	printf("\n\t\t\tInserte a: ");
	scanf("%i",&a);
	printf("\t\t\tInserte b: ");
	scanf("%i",&b);
	printf("\t\t\tInserte c: ");
	scanf("%i",&c);
	if(a==b&&a==c&&b==c){
		printf("\n\t\t\tSu triangulo es equilatero");
		}
		else{
			if(a==b||b==c||a==c){
			printf("\n\t\t\tSu triangulo es is%csceles",om);
			}
				else{
				printf("\n\t\t\tSu triangulo es escaleno");
				}
		}
			
	getch();
}

