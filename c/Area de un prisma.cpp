/*Librerías*/
#include<stdio.h>
#include<conio.h>

main()
{/*Varialbes*/	
float a,b,h,x=0,y=0;
char e1= 130,a1=160,i1=161;
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

	printf("\n\n\t\t\t\t\t Participacion 3-Area y volumen de un prisma\n");
	printf("\t\t\t\t\t Por: Jos%c Adri%cn Rodr%cguez Gonz%clez",e1,a1,i1,a1);
	printf("\n\t\t\t\t\t Tercer Semestre ");
	/*Petición de datos*/
	printf("\n\n\t\t\tVamos a sacar el volume y el area de un prisma\t Primero, introduzca las dimensiones");
	printf("\n\t\t\t Altura: ");
	scanf("%f",&h);
	printf("\t\t\t Base: ");
	scanf("%f",&b);
	printf("\t\t\t Ancho: ");
	scanf("%f",&a);
	/*Operaciones*/
	x=a*b*h;
	y=2*(a*b+a*h+h*b);
	/*Muestra resultado*/
	printf("\t\t\tVolumen:%.2f \tArea:%.2f ",x,y);
	getch();
}
