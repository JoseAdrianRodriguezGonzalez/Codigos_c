#include<stdio.h>
#include<math.h>
#include<conio.h>
main(){
	float a,b,c,raiz,x1,x2,re,im;
	char r= 130,s=160,i=161;		//Letras

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
	printf("\n\n\t\t\t\t\t TAREA 2--Ecuaciones cuadraticas con numeros imaginarios\n");
	printf("\t\t\t\t\t Por: Jos%c Adri%cn Rodr%cguez Gonz%clez",r,s,i,s);
	printf("\n\t\t\t\t\t Tercer Semestre ");
	
	printf("\n\t\tVamos a realizar una ecuacion cuadratica");
	printf("\n\t\tInserte los datos\n");
	printf("\t\ta= ");
	scanf("%f",&a);
	
	printf("\t\tb= ");
	scanf("%f",&b);
	printf("\t\tc= ");
	scanf("%f",&c);
	raiz=pow(b,2)-4*a*c;
	if(raiz>=0){
	
		x2=(-b+sqrt(pow(b,2)-(4*a*c)))/(2*a);
		x1=(-b-sqrt(pow(b,2)-(4*a*c)))/(2*a);
		printf("X1= %.2f",x1);
		printf("\tx2= %.2f",x2);
	}
	else{
		re=(-b/(2*a));
		im=sqrt((-(pow(b,2)-(4*a*c))))/(2*a);
		printf("\n\tX1= %.2f+%.2fi",re,im);
		printf("\tX2= %.2f-%.2fi",re,im);
	}	
	getch();
}
