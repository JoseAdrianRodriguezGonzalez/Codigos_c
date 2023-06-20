/*Librerías*/
#include<stdio.h>
#include<math.h>
#include<conio.h>
#define pi  3.1415//constante
main(){
	char pregunta,um=163,am=160,im=161,pre=168,om=162,em= 130;//caracteres
	float l,base,altura,baseM,basem,area,radio;//varaibles de formulas
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

	printf("\n\n\t\t\t\t\t TAREA 1--Men%c de figuras\n",um);
	printf("\t\t\t\t\t Por: Jos%c Adri%cn Rodr%cguez Gonz%clez",em,am,im,am);
	printf("\n\t\t\t\t\t Tercer Semestre ");
	/*Menu*/

	printf("\n\n\t\t\tMen%c de figuras.\n\t\t\ta)Cuadrado.\n\t\t\tb)Rect%cngulo.",um,am);
	printf("\n\t\t\tc)C%crculo.\n\t\t\td)Tri%cngulo.\n\t\t\te)Trapecio.",im,am);
	printf("\n\t\t\t%cCu%cl quieres sacar su %crea?\n\t\t\t(Escoja entre las opciones con el numero asignado al principio de cada opci%cn): ",pre,am,am,om);
	scanf("%c",&pregunta);
	/*Cuadrado*/
	switch(pregunta){
		case'a':
		case'A':
		printf("\n\t\t\tHa escogido el cuadrado,esta es su formula:\n\n\t\t\t%crea=l^2",am);
		printf("\n\n\t\t\tingrese el valor de un lado:");
		scanf("%f",&l);
		area=pow(l,2);
		printf("\n\t\t\tEsta es su %crea: %.2f m^2",am,area);
		break;
	/*Rectangulo*/
	case'b':
	case'B':
		printf("\n\t\t\tHa escogido el rect%cngulo, esta es su formula:\n\n\t\t\t%crea=b*h",am,am);
		printf("\n\n\t\t\tEscriba la altura: ");
		scanf("%f",&base);
		printf("\t\t\tEscriba la altura: ");
		scanf("%f",&altura);
		area=base*altura;
		printf("\n\t\t\tEsta es su %crea:%.2f m^2",am,area);
		break;
	/*Circulo*/
	case'c':
	case'C':
		printf("\n\t\t\tHa escogido el c%crculo, esta es su formula:\n\n\t\t\t%crea=(3.1415)r^2 ",im,am);
		printf("\n\n\t\t\tInserte el radio:  ");
		scanf("%f",&radio);
		area=pi*pow(radio,2);
		printf("\n\t\t\tEsta es su %crea:%.2f m^2",am,area);
		break;
	/*Triangulo*/
	case'd':
	case'D':
		printf("\n\t\t\tHa escogido el tri%cngulo, esta es su formula\n\n\t\t\t%crea=(b*h)/2",am,am);
		printf("\n\n\t\t\tInserte la base: ");
		scanf("%f",&base);
		printf("\t\t\tInserte la altura: ");
		scanf("%f",&altura);
		area=(base*altura)/2;
		printf("\n\t\t\tEsta es su %crea:%.2f m^2",am,area);
		break;
	/*Trapecio*/
	case'e':
	case'E':
		printf("\n\t\t\tHa escogido el trapecio, esta es su formula:\n\n\t\t\t%crea=((B+b)*h)/2",am);
		printf("\n\n\t\t\tInserte la base mayor: ");
		scanf("%f",&baseM);
		printf("\t\t\tInserte la base menor: ");
		scanf("%f",&basem);
		printf("\t\t\tInserte la altura: ");
		scanf("%f",&altura);
		area=((baseM+basem)*altura)/2;
		printf("\n\t\t\tEsta es su %crea:%.2f m^2",am,area);
		break;
	default:
		printf("No existe la opci%cn: %c",om,pregunta);
	}
	getch();//Finaliza el programa
}
