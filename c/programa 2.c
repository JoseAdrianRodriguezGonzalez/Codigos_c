/*Librerias de entrada y salida y tambien de consola*/
#include<stdio.h>
#include<conio.h>
/*funcion principal*/
main()
{
/*Variables para escribir ASCII*/
	char pregunta=168;
	char a =160;
	char admiracion = 173;
	char nombre[20];//Variable para guardar el nombre
	printf("Hola disculpe,%cCu%cl es su nombre? ",pregunta,a);//Te pide el nombre
	scanf("%s", &nombre);//Lo escribes
	printf("%cHola %s! ;D",admiracion,nombre);//Imprime un saludo con tu nombre
	getch();
}
