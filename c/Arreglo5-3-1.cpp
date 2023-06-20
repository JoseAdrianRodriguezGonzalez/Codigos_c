/*Ejemplo de un arreglo de doble subindice*/
#include <stdio.h>
#define ESTUDIANTES 3
#define EXAMENES 4

int minimo(const int calificaciones[][EXAMENES], int alumnos, int examenes);
int maximo(const int calificaciones[][EXAMENES], int alumnos, int examenes);
double promedio(const int estableceCalif[], int examenes);
void despliegaArreglo(const int calificaiones[][EXAMENES], int alumnos, int examenes);

int main()
{
	int estudiante;
	
	const int calificacionesEstudiantes[ESTUDIANTES][EXAMENES]=
	{{77, 68, 86, 73}, 
	{96, 87, 89, 78}, 
	{70, 90, 86, 81}};
	
	printf("El arreglo es: \n");
	despliegaArreglo(calificacionesEstudiantes, ESTUDIANTES, EXAMENES);
	
	printf("\n\nCalificacion mas baja: %d\nCalificacion mas alta: %d\n",
	minimo(calificacionesEstudiantes, ESTUDIANTES, EXAMENES),
	maximo(calificacionesEstudiantes, ESTUDIANTES, EXAMENES));
	
	for(estudiante = 0; estudiante < ESTUDIANTES; estudiante++)
	{
		printf("El promedio de calificaciones del estudiante %d es %.2f\n",
		estudiante, promedio(calificacionesEstudiantes[estudiante], EXAMENES));
	}
	return 0;
	
}

int minimo(const int calificaciones[][EXAMENES], int alumnos, int examenes)
{
	int i;
	int j;
	int califBaja = 100;
	
	for(i = 0; i < alumnos; i++)
	{
		for(j = 0; j < examenes; j++)
		{
			if(calificaciones[i][j] < califBaja)
			{
				califBaja = calificaciones[i][j];
			}
		}
	}
	return califBaja;
	
} 

int maximo(const int calificaciones[][EXAMENES], int alumnos, int examenes)
{
	int i;
	int j;
	int califAlta = 0;
	
	for(i = 0; i < alumnos; i++)
	{
		for(j=0; j< examenes; j++)
		{
			if(calificaciones[i][j] > califAlta)
			{
				califAlta = calificaciones[i][j];
			}
		}
	}
	return califAlta;
	
}

double promedio(const int conjuntoDeCalificaciones[], int examenes)
{
	int i;
	int total= 0;
	
	for(i = 0; i < examenes; i++)
	{
		total+= conjuntoDeCalificaciones[i];
	}
	
	return (double) total/examenes;
	
}

void despliegaArreglo(const int calificaciones[][EXAMENES], int alumnos, int examenes)
{
	int i;
	int j;
	
	printf("[0][1][2][3]");
	
	for(i = 0; i < alumnos; i++)
	{
		printf("\ncalificacionesEstudiante[%d]", i);
	
		for(j=0; j < examenes; j++)
		{
			printf("%-5d", calificaciones[i][j]);
		}
		
	}
}
