/*Librerías*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
/*Variables y caracteres*/
	float a,b,c,d,e,f,g,h,i,x=0,y=0;
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

	printf("\n\n\t\t\t\t\t Participacion 3-Promedio y calificacion final\n");
	printf("\t\t\t\t\t Por: Jos%c Adri%cn Rodr%cguez Gonz%clez",e1,a1,i1,a1);
	printf("\n\t\t\t\t\t Tercer Semestre ");
	/*Pedir datos*/
	printf("\n\t\t\tVamos a sacar el promedio:");
	printf("\n\t\t\tPrimera calificacion: ");
	scanf("%f",&a);
	printf("\t\t\tSegunda calificacion: ");
	scanf("%f",&b);
	printf("\t\t\tTercera calificacion: ");
	scanf("%f",&c);
	printf("\t\t\tCuarta calificacion: ");
	scanf("%f",&d);
	printf("\t\t\tQuinta calificacion: ");
	scanf("%f",&e);
	printf("\t\t\tSexta calificacion: ");
	scanf("%f",&f);
	printf("\t\t\tSeptima calificacion: ");
	scanf("%f",&g);
	printf("\t\t\tOctava calificacion: ");
	scanf("%f",&h);
	printf("\t\t\tNovena calificacion: ");
	scanf("%f",&i);
	/*Ecuacion*/
	x=(a+b+c+d+e+f+g+h+i)/9;
	y=round(x);
	printf("\t\t\tEste es tu promedio:%.2f \tEsta es tu calificacion:%.2f",x,y);
	getch();
}
