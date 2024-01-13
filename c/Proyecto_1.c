#include<stdio.h>
#include<conio.h>

main(){
	/*Nombre*/
	char nombre1[20];
	/*Apellido*/
	char apellido1[20];
	/*Edad*/
	int edad1;
	/*Tipo de sangre*/
	char tiposanguineo1[20];
	/*Curp*/ 
	char CURP1[18];
	/*Calle*/
	char calle1[35];
	/*Numero de casa*/
	int numero1;
	/*Nombre*/
	printf("Escribe tu nombre: ");
	scanf("%s",&nombre1);
	/*Apellido*/
	printf("Escribe tu apellido: ");
	scanf("%s",&apellido1);
	/*Edad*/
	printf("Ingresa tu edad: ");
	scanf("%i",&edad1);
	/*Tipo sanguineo*/
	printf("Ingrese Tipo Sanguineo: ");
	scanf("%s",&tiposanguineo1);
	/*CURP*/
	printf("Ingrese CURP: ");
	scanf("%s",&CURP1);
	/*Nombre de la calle*/
	printf("Nombre de la calle que vive: ");
	scanf("%s",&calle1);
	/*Numero de casa*/
	printf("Numero de casa: ");
	scanf("%i",&numero1);
	/*Datos ingresados*/
	printf("\n\t\t\tdatos ingresados: ");
	printf("\n\t\tNombre: %s",nombre1);
	printf("\t\t\tApellido: %s",apellido1);
	printf("\n\t\tEdad: %i",edad1);
	printf("\t\t\tTipo sanguineo: %s",tiposanguineo1);
	printf("\n\t\tCURP: %s",CURP1);
	printf("\t\t\tNombre de calle: %s",calle1);
	printf("\n\t\tNumero de casa: %i",numero1);
	getch();
	
}
