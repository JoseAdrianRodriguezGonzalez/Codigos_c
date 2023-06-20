/* 
Datos personales
*/
#include<stdio.h>
#include<conio.h>
main ()
{
	char Nom[30],Apep[30],Apem[30],dd[10],mm[20],aa[20];
	char cale[50],numca[10],colo[20],ciu[20],esta[20],numtel[20];

	
	printf(" Cual es tu nombre?:");
	scanf("%s" ,&Nom);
	printf("\n Cual es tu apellido paterno?:");
	scanf("%s" ,&Apep);
	printf("\n Cual es tu apellido materno?:");
	scanf("%s" ,&Apem);
	printf("\n Cual es tu fecha de nacimiento?:");
	scanf("%s" ,&dd);
	printf("\n Cual es tu calle?:");
	scanf("%s" ,&cale);
	printf("\n Cual es tu numero?:");
	scanf("%s" ,&numca);
	printf("\n Cual es tu colonia?:");
	scanf("%s" ,&colo);
	printf("\n Cual es tu ciudad?:");
	scanf("%s" ,&ciu);
	printf("\n Cual es tu estado?:");
	scanf("%s" ,&esta);
	printf("\n Cual es tu numero de telefono?:");
	scanf("%s" ,&numtel);
	printf("\n\n                                 FICHA DE DATOS DEL USUARIO" );
	printf("\n Nombre: %s %s %s       Tel: %s",Nom,Apep,Apem,numtel);
	printf("Direccion: %s %s          Col: %s          %s                %s",cale,numca,colo,ciu,esta);
	
	
	
}
