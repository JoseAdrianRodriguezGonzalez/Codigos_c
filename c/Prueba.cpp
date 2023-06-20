#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#define pi 3.1415
main()
{
	float x;
	char y;
	int opc,num,n,m;
	char A[20];
	do{
		//insertar portada
		getch();
		system("cls");
		printf("\n\n\t\t\tMENU PRINCIPAL DE OPCIONES\n\n");
		printf("\t1.- SALUDO\n");
		printf("\t2.- PORTADA\n");
		printf("\t3.- SALUDO PERSONALIZADO\n");
		printf("\t4.- DATOS DE USUARIO\n");
		printf("\t5.- AREA Y VOLUMEN DE UN PRISMA\n");
		printf("\t6.- SOLUCIÓN DE UN SISTEMA DE ECUACIONES DE 2x2\n");
		printf("\t7.- CONVERTIR DE MINUSCULA A MAYUSCULA\n");
		printf("\t8.- APROBADO O REPROBADO\n");
		printf("\t9.- NÚMERO PAR O IMPAR\n");
		printf("\t10.- SOLUCIÓN DE UNA CUADRÁTICA\n");
		printf("\t11.- MAYOR DE 5 NÚMEROS\n");
		printf("\t12.- MENOR DE 5 NÚMEROS\n");
		printf("\t13.- MAYUSCULA O MINUSCULA\n");
		printf("\t14.- VOCAL O CONSONANTE\n");
		printf("\t15.- TIPOS DE TRIÁNGULOS\n");
		printf("\t16.- MENÚ DE ÁREAS DE FIGURAS\n");
		printf("\t17.- MENU DE SERIES NUMERICAS\n\n");
		printf("\t\tElija una opcion: ");
		scanf("%i",&opc);
		system("cls");
		switch(opc)
		{
			case 1:
				//insertar portada
				printf("\n\t1.- SALUDO\n\n");
				printf("Hola morrillo!");
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				break;
			case 8:
				break;
			case 9:
				break;
			case 10:
				break;
			case 11:
				break;
			case 12:
				break;
			case 13:
				break;
			case 14:
				break;
			case 15:
				break;
			case 16:
				break;
			case 17:
				do{
					system("cls");
					printf("\n\n\t\t\tMENU DE SERIES NUMERICAS\n\n");
					printf("\t1.- SERIE DEL 1 AL 10\n");
					printf("\t2.- SERIE DEL 1 A N\n");
					printf("\t3.- SERIE DE N A M ASCENDENTE\n");
					printf("\n\tElija una opcion: ");
					scanf("%i",&opc);
					switch(opc)
					{
						case 1:
							do{
								printf("\n\n\t\t\tSERIE DEL 1 AL 10\n\n");
								num=1;
								printf("\n\t");
								do{
									printf("%i, ",num);
									num++;
								}while(num<=10);
								printf("\n\n\tRepetir programa?(1.Si / 2.No):");
								scanf("%i",&opc);
							}while(opc == 1);
							break;
						case 2:
							do{
								printf("\n\n\t\t\tSERIE DEL 1 AL N\n\n");
								num=1;
								printf("\n\t");
								printf("Ingrese el final de la serie: ");
								scanf("%i",&n);
								printf("\n\t");
								do{
									printf("%i, ",num);
									num++;
								}while(num<=n);
								printf("\n\n\tRepetir programa?(1.Si / 2.No):");
								scanf("%i",&opc);
							}while(opc == 1);
							break;
						case 3:
							do{
								printf("\n\n\t\t\tSERIE DEL N A M\n\n");
								printf("\n\t");
								printf("Ingrese el inicio de la serie: ");
								scanf("%i",&n);
								printf("\tIngrese el final de la serie: ");
								scanf("%i",&m);
								do{
									printf("%i, ",n);
									n++;
								}while(n<=m);
								printf("\n\n\tRepetir programa?(1.Si / 2.No):");
								scanf("%i",&opc);
							}while(opc == 1);
							break;
						default:
							printf("Opcion invalida!!!");	
					}
					printf("\n\n\tRepetir MENU DE SERIES?(1.Si / 2.No):");
					scanf("%i",&opc);
					opc=0;
					getchar();
				}while(opc==1);
				break;
			default:
				printf("Opcion invalida!!!");	
		}
		printf("\n\n\tRepetir menu principal?(1.Si / 2.No):");
		scanf("%i",&opc);
	}while(opc==1);
	getch();
}
