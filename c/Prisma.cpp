#include<stdio.h>
#include<conio.h>
main()
{
	float altura,ancho,largo,volumen,area;
	 	
	printf("\n\t\t\t bbbbbbbbbbbbbbbbbbbb bbbbbbbbbbbbbbbbbbbb bbbbbbbbbbbbbbbbbbbb bbbbbbbbbb: ");
	printf("\n\t\t\t b                  b b                              b          b        b: ");
	printf("\n\t\t\t b                 b  b                              b          b        b: ");
	printf("\n\t\t\t b                b   b                              b          b        b: ");
	printf("\n\t\t\t b               b    b                              b          b        b: ");
	printf("\n\t\t\t b              b     b                              b          b        b: ");
	printf("\n\t\t\t b             b      bbbbbbbbbbbbbbbbbbbb           b          b        b: ");
	printf("\n\t\t\t b             b      b                              b          b        b: ");
	printf("\n\t\t\t b              b     b                              b          b        b: ");
	printf("\n\t\t\t b               b    b                              b          b        b: ");
	printf("\n\t\t\t b                b   b                              b          b        b: ");
	printf("\n\t\t\t b                 b  b                              b          b        b: ");
	printf("\n\t\t\t bbbbbbbbbbbbbbbbbbb  bbbbbbbbbbbbbbbbbbbb           b          bbbbbbbbbb: ");

	printf("\n\n\t\t\t\t\t Participacion 3-Area y volumen de un prisma");
	printf("\t\t\t\t\t\t\t\t\t\t Por: Alberto Delgado Zavala");
	printf("\n\t\t\t\t\t\t\t Tercer Semestre ");
	printf("\nInserta el largo: ");
	scanf("%f",&largo);
	printf("Inserta el ancho: ");
	scanf("%f",&ancho);
	printf("Inserta la altura: ");
	scanf("%f",&altura);
	volumen=altura*largo*ancho;
	area=2*(largo*altura)+2*(altura*ancho)+2*(largo*ancho);
	printf("Volumen: %f",volumen);
	printf("\nArea: %f",area);
	
}
