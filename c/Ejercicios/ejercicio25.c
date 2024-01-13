#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct alumno
{
    char nombre[50];
    float nota;
};

int main(){
    struct alumno alum,alumnos[5];
    int x=0,opcion=1;
    float sum=0,cont=0,mejor,peor;
    for ( x = 0; x < 5; x++)
    {
    	if(x==0){
	        printf("Introduzca nombre del alumno: ");
	        gets(alumnos[x].nombre);
	        printf("Introduzca nota: ");
	        scanf("%f",&alumnos[x].nota);
		}else{
        	printf("Introduzca nombre del alumno: ");
        	gets(alumnos[x].nombre);
        	gets(alumnos[x].nombre);
        	printf("Introduzca nota: ");
        	scanf("%f",&alumnos[x].nota);
    	}
    }
    while ((opcion==1||opcion==2||opcion==3||opcion==4||opcion==5||opcion==6)&&opcion!=7)
    {
        printf("1.-Buscar un alumno\n");
        printf("2.-Modificar nota\n");
        printf("3.-Media de todas las notas\n");
        printf("4.-Media de todas las notas inferiores a 5\n");
        printf("5.-Alumno con mejores notas\n");
        printf("6.-Alumno con peores notas\n");
        printf("7.-Salir\n");
        scanf("%d",&opcion);
        if(opcion==1){
            printf("Introduzzca un nombre: ");
            gets(alum.nombre);
            gets(alum.nombre);
            for ( x = 0; x < 5; x++)
            {
                if (strcmp(alumnos[x].nombre,alum.nombre)==0)
                {
                    printf("\nNombre: %s\n", alumnos[x].nombre);
                    printf("Nota: %f\n",alumnos[x].nota);
                }
                
            }
            printf("\n\n");
        }
        else if (opcion==2)
        {
            printf("Introduzzca un nombre: ");
            gets(alum.nombre);
            gets(alum.nombre);
            for ( x = 0; x < 5; x++)
            {
                if (strcmp(alumnos[x].nombre,alum.nombre)==0)
                {
                    printf("Introduzca una nota");
                    scanf("%f",&alumnos[x].nota);
                    printf("Nota modificada. ");
                }
            }
            printf("\n\n");
        }
        else if (opcion==3)
        {
            sum=0;
            for(x=0;x<5;x++){
                sum+=alumnos[x].nota;
            }
            printf("\nLa media de las notas es de: %f\n",(sum/5));
        }else if(opcion==4){
        	sum=0;
        	cont=0;
        	for(x=0;x<5;x++){
        		if(alumnos[x].nota<5){
        			sum+=alumnos[x].nota;
        			cont++;
				}
			}
        	printf("\nLa media de las notas inferiores a 5 es %f\n",sum/cont);
		}else if(opcion==5){
        	mejor=0;
        	for(x=0;x<5;x++){
        		if(alumnos[x].nota>mejor){
					mejor=alumnos[x].nota;
					alum.nota=alumnos[x].nota;
					strcpy(alum.nombre,alumnos[x].nombre);
				}
			}
        printf("\nEl alumno con mejores notas es: %s \n",alum.nombre);
    }else if(opcion==6){
    	peor=10;
    	for(x=0;x<5;x++){
    		if(alumnos[x].nota<peor){
    			peor=alumnos[x].nota;
    			alum.nota=alumnos[x].nota;
    			strcpy(alum.nombre,alumnos[x].nombre);
			}
		}
		printf("\nEl alumno con peores notas es: %s\n",alum.nombre);
	}
	}
system("PAUSE");
return 0;
   
    
}
