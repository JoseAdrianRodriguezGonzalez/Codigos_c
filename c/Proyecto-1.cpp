#include<stdio.h>
#include<conio.h>

main()
{
	/*Primer nombre*/
	char nombre1[50];
	/*Primer apellido*/
	char apellido1[50];
	/*Edad*/
	int edad1;
	/*Tipo de sangre*/
	char tiposanguineo1[50];
	/*Curp*/
	char CURP1[50];
	/*Calle*/
	char calle1[50];
	/*Numero de casa*/
	int numerodecasa1;
	/*Primer nombre*/
	printf("Ingrese Nombre: ");
	scanf("%s",&nombre1);
	/*Apellido*/
	printf("Ingrese apellido: ");
	scanf("%s",&apellido1);
	/*Edad*/
	printf("Ingrese edad: ");
	scanf("%i",&edad1);
	/*Tipo de sangre*/
	printf("Ingrese Tipo sanguineo: ");
	scanf("%s",&tiposanguineo1);
	/*CURP*/
	printf("Ingrese  su CURP: ");
	scanf("%s",&CURP1);
	/*Calle*/
	printf("Ingrese nombre de la calle donde vive: ");
	scanf("%s",&calle1);
	/*Numero de casa*/
	printf("Ingrese numero de casa: ");
	scanf("%i",numerodecasa1);
	
	
	
	printf("Nombre: %s ",nombre1);
	printf("Apellido: %s", apellido1);
	
	
	getch();
}
