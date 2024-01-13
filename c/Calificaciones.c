#include<stdio.h>
#include<math.h>
#include<conio.h>
main()
{
	float c1,c2,c3,c4,c5,c6,c7,c8,c9,promedio,promediof;
	 	
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

	printf("\n\n\t\t\t\t\t Participacion 3-Calificaciones");
	printf("\t\t\t\t\t\t\t\t\t\t Por: Alberto Delgado Zavala");
	printf("\n\t\t\t\t\t\t\t Tercer Semestre ");
	printf("\nInserta tu primera calificacion: ");
	scanf("%f",&c1);
	printf("Inserta tu segunda calificacion: ");
	scanf("%f",&c2);
	printf("Inserta tu tercera calificacion: ");
	scanf("%f",&c3);
	printf("Inserta tu cuarta calificacion: ");
	scanf("%f",&c4);
	printf("Inserta tu quinta calificacion: ");
	scanf("%f",&c5);
	printf("Inserta tu sexta calificacion: ");
	scanf("%f",&c6);
	printf("Inserta tu septima calificacion: ");
	scanf("%f",&c7);
	printf("Inserta tu octava calificacion: ");
	scanf("%f",&c8);
	printf("Inserta tu novena calificacion: ");
	scanf("%f",&c9);
	promedio=(c1+c2+c3+c4+c5+c6+c7+c8+c9)/9;
	promediof=round(promedio);
	printf("Este es tu promedio: %f ",promedio);
	printf("Esta es tu calificacion final: %f",promediof);
	getch();
}
