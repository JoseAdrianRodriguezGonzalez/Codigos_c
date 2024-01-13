#include<stdio.h>
#include<conio.h>
main(){
	/*Carácteres especiales*/
	char pre=168,e=144,a=160, o=162;
	/*Variables*/
	char name[20],surname1[20],surname2[20]; //nombre
	char date[9];		//Fecha
	char street[40],col[40],num[8],city[30],state[30];	//Localización
	char telephone[15];		//Telefono
	
	/*Ingreso de datos*/
	printf("\n\t\tEjercicio 2--FORMULARIO");
	printf("\n\n\tEscriba los datos que se te piden:\n");

	/*Nombre y apellidos*/
	printf("\n\t%cCu%cl es tu nombre? \n\t",pre,a);
	scanf("%s",&name);
	
	printf("\n\t%cCu%cl es tu apellido paterno? \n\t",pre,a);
	scanf("%s",&surname1);
	
	printf("\n\t%cCu%cl es tu apellido materno? \n\t",pre,a);
	scanf("%s",&surname2);
	
	/*Fecha*/
	
	printf("\n\t%cCu%cl es tu fecha de nacimiento? \t (Escriba las separaciones con una diagonal normal) \n\t",pre,a);
	scanf("%s",&date);
	
	/*Ubicacion*/
	
	printf("\n\t%cCu%cl es tu calle? \t(los espacios escribalos con gui%cn bajo) \n\t",pre,a,o);
	scanf("%s",&street);
	
	printf("\n\t%cCu%cl es tu colonia? \t(los espacios escribalos con gui%cn bajo) \n\t",pre,a,o);
	scanf("%s",&col);
	
	printf("\n\t%cCu%cl es tu numero? \n\t",pre,a);
	scanf("%s",&num);
	
	
	printf("\n\t%cCu%cl es tu ciudad?\n\t",pre,a);
	scanf("%s",&city);
	
	printf("\n\t%cCu%cl es tu estado?\n\t",pre,a);
	scanf("%s", &state);
	
	/*Telefono*/
	printf("\n\t%cCu%cl es tu numero telef%cnico?\n\t",pre,a,o);
	scanf("%s",&telephone );
	
	
	/*Imprime el texto*/
	printf("\n\t\t\tFicha de formulario:Respuestas proporcionadas\n");
	/*Datos escritos en el formulario*/
	
	printf("\n\tNombre: %s %s %s\t\tTelef%cno:%s \n",name,surname1,surname2,o,telephone);//Nombre y telefóno
	printf("\n\tFecha de nacimiento: %s \n" ,date);		//Fecha de nacimiento	
	printf("\n\tDirecci%cn:%s, %s, #%s, %s, %s, ",o,street,col,num,city,state);//Dirección
	getch();		
}
