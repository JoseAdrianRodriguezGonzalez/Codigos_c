#include<stdio.h>
struct empleado
{
    char nombre[30];
    char sexo[12];
    float salario;
};
int main(){
    struct empleado emp[100];
    int e=0,nemp=0,pmay=0,pmen=0;
    float mayor=0.0,menor=9999.0;
    printf("Introduzca el numero de empleados: ");
    scanf("%d",&nemp);
    for ( e = 0; e < nemp; e++)
    {
        printf("\n");
        printf("Nombre[%d]",e+1);
        scanf("%s",&emp[e].nombre);
        printf("Sexo[%d]",e+1);
        scanf("%s",&emp[e].sexo);
        printf("Salario[%d]",e+1);
        scanf("%f",&emp[e].salario);
        if (emp[e].salario>mayor)
        {
            mayor=emp[e].salario;
            pmay=e;
        }
        if (emp[e].salario<menor)
        {
            menor=emp[e].salario;
            pmen=e;
        }
    }
    printf("\n\n%s es el trabajador con MAYOR salario\n",emp[pmay].nombre);
    printf("\n\n%s es el trabajador con MENOR salario\n",emp[pmen].nombre);
}
