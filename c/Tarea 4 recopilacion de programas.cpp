 #include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<ctype.h>
#define pi 3.1415
main(){
	system("color 0a");
	char um=163,am=160,im=161,pre=168,om=162,em= 130,Am=181,Om=224,Um=233, admi=173;//caracterse
	char nombre1[120];//variable del tercer programa
	char name[20],surname1[20],surname2[20],date[9],street[40],col[40],num[8],city[30],state[30],telephone[15];//variables del cuarto programa
	float ap,bp,hp,Ap,Vp;//variables del 5 progrma
	float a,b,c,d,e,f,x,y;//Variables del 6 programa
	char letras1[80];//Variable del programa 7
	int cont1,auxiliar1;//variable del programa 7
	float pp,sp,tp,cp,prom;//Varaibles del 8 program
	int n; //variable del programa 9
	float ac,bc,cc,x1,x2,raiz,re,ima; //Varaibles de 10 programa
	int anM,bnM,cnM,dnM,enM, max;//variables del 11 programa
	int anm,bnm,cnm,dnm,enm, min;//variables del 12 programa
	char letra;//variables del 13 programa
	char letra2;//variable del 14 programa  
	int at,bt,ct;//variables del 15 programa
	float lc,rb,rh,rc,tb,th,TB,Tb,Th,area;//variable del 16 programa
	char pregunta;//varaibles del 16 programa
	int num1,n1,m1,opc17;
	int opc;
	int opcion;//Pregunta si repetir el programa
	/*Portada*/
	do{
		system("cls");	
		printf("\n\t\t\t  &&&&&  &&&&&&  &&&&&&   &&&&&&& &     &  &&&&&     &&&&&&&  &     &      ");
		printf("\n\t\t\t &      &      & &     &     &    &&    & &             &     &&    &     ");
		printf("\n\t\t\t &      &      & &      &    &    & &   & &             &     & &   &     ");
		printf("\n\t\t\t &      &      & &       &   &    &  &  & &   &&&       &     &  &  &     ");
		printf("\n\t\t\t &      &      & &      &    &    &   & & &     &       &     &   & &   ");
		printf("\n\t\t\t &      &      & &     &     &    &    && &     &       &     &    &&     ");
		printf("\n\t\t\t  &&&&&  &&&&&&  &&&&&&   &&&&&&& &     &  &&&&&     &&&&&&&  &     &            ");
	
		printf("\n\n\t\t\t\t\t\t      &"    );
		printf("\n\t\t\t\t\t\t    && && "    );
		printf("\n\t\t\t\t\t\t   &     &    ");
		printf("\n\t\t\t\t\t\t  &  &&&  & ");
		printf("\n\t\t\t\t\t\t  & &     &");
		printf("\n\t\t\t\t\t\t  & &     & "); 
		printf("\n\t\t\t\t\t\t  & &     & ");
		printf("\n\t\t\t\t\t\t  &  &&&  &   ");
		printf("\n\t\t\t\t\t\t   &     &   ");
		printf("\n\t\t\t\t\t\t    && && "    );
		printf("\n\t\t\t\t\t\t      &"    );
	
		printf("\n\n\t\t\t\t\t TAREA 4-- Recopilaci%cm de programas\n",om);
		printf("\t\t\t\t\t Por: Jos%c Adri%cn Rodr%cguez Gonz%clez",em,am,im,am);
		printf("\n\t\t\t\t\t Tercer Semestre ");
		printf("\n\n\t\t\t\t\t Presione enter para continuar");
		getch();
		system("cls");
		/*Menú*/
		printf("\n\n\t\t\tMENU PRINCIPAL DE OPCIONES\n\n");
		printf("\t1.- SALUDO\n");
		printf("\t2.- PORTADA\n");
		printf("\t3.- SALUDO PERSONALIZADO\n");
		printf("\t4.- DATOS DE USUARIO\n");
		printf("\t5.- %cREA Y VOLUMEN DE UN PRISMA\n",Am);
		printf("\t6.- SOLUCI%cN DE UN SISTEMA DE ECUACIONES DE 2x2\n",Om);
		printf("\t7.- CONVERTIR DE MIN%cSCULA A MAY%cSCULA\n",Um,Um);
		printf("\t8.- APROBADO O REPROBADO\n");
		printf("\t9.- NUMERO PAR O IMPAR\n");
		printf("\t10.- SOLUCI%cN DE UNA CUADR%cTICA\n",Om,Am);
		printf("\t11.- MAYOR DE 5 NUMEROS\n");
		printf("\t12.- MENOR DE 5 NUMEROS\n");
		printf("\t13.- MAY%cSCULA O MIN%cSCULA\n",Um,Um);
		printf("\t14.- VOCAL O CONSONANTE\n");
		printf("\t15.- TIPOS DE TRI%cNGULOS\n",Am);
		printf("\t16.- MEN%c DE %cREAS DE FIGURAS\n",Um,Am);
		printf("\t17.- MEN%c DE SERIES N%cMERICAS\n\n",Um,Um);
		printf("\t\tElija una opcion: ");
		scanf("%i",&opc);
		getchar();
		system("cls");
		/*Eleccion de opciones*/
		switch(opc){
			case 1:
				/*Hola mundo*/
				do{
					
					system("cls");
					printf("\n\t\t\t  &&&&&  &&&&&&  &&&&&&   &&&&&&& &     &  &&&&&     &&&&&&&  &     &      ");
					printf("\n\t\t\t &      &      & &     &     &    &&    & &             &     &&    &     ");
					printf("\n\t\t\t &      &      & &      &    &    & &   & &             &     & &   &     ");
					printf("\n\t\t\t &      &      & &       &   &    &  &  & &   &&&       &     &  &  &     ");
					printf("\n\t\t\t &      &      & &      &    &    &   & & &     &       &     &   & &   ");
					printf("\n\t\t\t &      &      & &     &     &    &    && &     &       &     &    &&     ");
					printf("\n\t\t\t  &&&&&  &&&&&&  &&&&&&   &&&&&&& &     &  &&&&&     &&&&&&&  &     &            ");
		
					printf("\n\n\t\t\t\t\t\t      &"    );
					printf("\n\t\t\t\t\t\t    && && "    );
					printf("\n\t\t\t\t\t\t   &     &    ");
					printf("\n\t\t\t\t\t\t  &  &&&  & ");
					printf("\n\t\t\t\t\t\t  & &     &");
					printf("\n\t\t\t\t\t\t  & &     & "); 
					printf("\n\t\t\t\t\t\t  & &     & ");
					printf("\n\t\t\t\t\t\t  &  &&&  &   ");
					printf("\n\t\t\t\t\t\t   &     &   ");
					printf("\n\t\t\t\t\t\t    && && "    );
					printf("\n\t\t\t\t\t\t      &"    );
		
					printf("\n\n\t\t\t\t\t Programa 1--Hola mundo\n");
					printf("\t\t\t\t\t Por: Jos%c Adri%cn Rodr%cguez Gonz%clez",em,am,im,am);
					printf("\n\n\t\t\t\t\t Presione enter para continuar");
					getch();
					system("cls");
					printf("\n\t\t\tHola mundo :3");
					printf("\n\n\t\t\t%cDesea repetir el programa?  (1.S%c   2.No) ",pre,im);
					scanf("%i",&opcion);
				}while(opcion==1);
			 break;
			case  2:
				/*Portada*/
				do{
					system("cls");
					printf("\n\t\t\t  &&&&&  &&&&&&  &&&&&&   &&&&&&& &     &  &&&&&     &&&&&&&  &     &      ");
					printf("\n\t\t\t &      &      & &     &     &    &&    & &             &     &&    &     ");
					printf("\n\t\t\t &      &      & &      &    &    & &   & &             &     & &   &     ");
					printf("\n\t\t\t &      &      & &       &   &    &  &  & &   &&&       &     &  &  &     ");
					printf("\n\t\t\t &      &      & &      &    &    &   & & &     &       &     &   & &   ");
					printf("\n\t\t\t &      &      & &     &     &    &    && &     &       &     &    &&     ");
					printf("\n\t\t\t  &&&&&  &&&&&&  &&&&&&   &&&&&&& &     &  &&&&&     &&&&&&&  &     &            ");
		
					printf("\n\n\t\t\t\t\t\t      &"    );
					printf("\n\t\t\t\t\t\t    && && "    );
					printf("\n\t\t\t\t\t\t   &     &    ");
					printf("\n\t\t\t\t\t\t  &  &&&  & ");
					printf("\n\t\t\t\t\t\t  & &     &");
					printf("\n\t\t\t\t\t\t  & &     & "); 
					printf("\n\t\t\t\t\t\t  & &     & ");
					printf("\n\t\t\t\t\t\t  &  &&&  &   ");
					printf("\n\t\t\t\t\t\t   &     &   ");
					printf("\n\t\t\t\t\t\t    && && "    );
					printf("\n\t\t\t\t\t\t      &"    );
		
					printf("\n\n\t\t\t\t\t Programa 2--portada\n");
					printf("\t\t\t\t\t Por: Jos%c Adri%cn Rodr%cguez Gonz%clez",em,am,im,am);
					printf("\n\n\t\t\t\t\t Presione enter para continuar");
					getch();
					system("cls");
					printf("\n\t\t\t  &&&&&  &&&&&&  &&&&&&   &&&&&&& &     &  &&&&&     &&&&&&&  &     &      ");
					printf("\n\t\t\t &      &      & &     &     &    &&    & &             &     &&    &     ");
					printf("\n\t\t\t &      &      & &      &    &    & &   & &             &     & &   &     ");
					printf("\n\t\t\t &      &      & &       &   &    &  &  & &   &&&       &     &  &  &     ");
					printf("\n\t\t\t &      &      & &      &    &    &   & & &     &       &     &   & &   ");
					printf("\n\t\t\t &      &      & &     &     &    &    && &     &       &     &    &&     ");
					printf("\n\t\t\t  &&&&&  &&&&&&  &&&&&&   &&&&&&& &     &  &&&&&     &&&&&&&  &     &            ");
		
					printf("\n\n\t\t\t\t\t\t      &"    );
					printf("\n\t\t\t\t\t\t    && && "    );
					printf("\n\t\t\t\t\t\t   &     &    ");
					printf("\n\t\t\t\t\t\t  &  &&&  & ");
					printf("\n\t\t\t\t\t\t  & &     &");
					printf("\n\t\t\t\t\t\t  & &     & "); 
					printf("\n\t\t\t\t\t\t  & &     & ");
					printf("\n\t\t\t\t\t\t  &  &&&  &   ");
					printf("\n\t\t\t\t\t\t   &     &   ");
					printf("\n\t\t\t\t\t\t    && && "    );
					printf("\n\t\t\t\t\t\t      &"    );
		
					printf("\n\n\t\t\t\t\t Programa 2--portada\n");
					printf("\t\t\t\t\t Por: Jos%c Adri%cn Rodr%cguez Gonz%clez",em,am,im,am);
					printf("\n\n\t\t\t%cDesea repetir el programa?  (1.S%c   2.No) ",pre,im);
					scanf("%i",&opcion);
				}while(opcion==1);
		 	break;	
			case  3:
				/*Saludo personalizado*/
				do{
					system("cls");
					printf("\n\t\t\t  &&&&&  &&&&&&  &&&&&&   &&&&&&& &     &  &&&&&     &&&&&&&  &     &      ");
					printf("\n\t\t\t &      &      & &     &     &    &&    & &             &     &&    &     ");
					printf("\n\t\t\t &      &      & &      &    &    & &   & &             &     & &   &     ");
					printf("\n\t\t\t &      &      & &       &   &    &  &  & &   &&&       &     &  &  &     ");
					printf("\n\t\t\t &      &      & &      &    &    &   & & &     &       &     &   & &   ");
					printf("\n\t\t\t &      &      & &     &     &    &    && &     &       &     &    &&     ");
					printf("\n\t\t\t  &&&&&  &&&&&&  &&&&&&   &&&&&&& &     &  &&&&&     &&&&&&&  &     &            ");
		
					printf("\n\n\t\t\t\t\t\t      &"    );
					printf("\n\t\t\t\t\t\t    && && "    );
					printf("\n\t\t\t\t\t\t   &     &    ");
					printf("\n\t\t\t\t\t\t  &  &&&  & ");
					printf("\n\t\t\t\t\t\t  & &     &");
					printf("\n\t\t\t\t\t\t  & &     & "); 
					printf("\n\t\t\t\t\t\t  & &     & ");
					printf("\n\t\t\t\t\t\t  &  &&&  &   ");
					printf("\n\t\t\t\t\t\t   &     &   ");
					printf("\n\t\t\t\t\t\t    && && "    );
					printf("\n\t\t\t\t\t\t      &"    );
		
					printf("\n\n\t\t\t\t\t Programa 3--Saludo personalizado\n");
					printf("\t\t\t\t\t Por: Jos%c Adri%cn Rodr%cguez Gonz%clez",em,am,im,am);
					printf("\n\n\t\t\t\t\t Presione enter para continuar");
					getch();
					system("cls");
				
					printf("\n\n\tHola disculpe,%cCu%cl es su nombre? ",pre,am);//Te pide el nombre
					scanf("%s", &nombre1);//Lo escribes
					printf("\n\t\a%cHola %s! ;D",admi,nombre1);//Imprime un saludo con tu nombre
					printf("\n\n\t\t\t%cDesea repetir el programa?  (1.S%c   2.No) ",pre,im);
					scanf("%i",&opcion);
				}while(opcion==1);
		 break;
			case 4:
				/*Datos de usuario*/
				do{
					system("cls");
					printf("\n\t\t\t  &&&&&  &&&&&&  &&&&&&   &&&&&&& &     &  &&&&&     &&&&&&&  &     &      ");
					printf("\n\t\t\t &      &      & &     &     &    &&    & &             &     &&    &     ");
					printf("\n\t\t\t &      &      & &      &    &    & &   & &             &     & &   &     ");
					printf("\n\t\t\t &      &      & &       &   &    &  &  & &   &&&       &     &  &  &     ");
					printf("\n\t\t\t &      &      & &      &    &    &   & & &     &       &     &   & &   ");
					printf("\n\t\t\t &      &      & &     &     &    &    && &     &       &     &    &&     ");
					printf("\n\t\t\t  &&&&&  &&&&&&  &&&&&&   &&&&&&& &     &  &&&&&     &&&&&&&  &     &            ");
		
					printf("\n\n\t\t\t\t\t\t      &"    );
					printf("\n\t\t\t\t\t\t    && && "    );
					printf("\n\t\t\t\t\t\t   &     &    ");
					printf("\n\t\t\t\t\t\t  &  &&&  & ");
					printf("\n\t\t\t\t\t\t  & &     &");
					printf("\n\t\t\t\t\t\t  & &     & "); 
					printf("\n\t\t\t\t\t\t  & &     & ");
					printf("\n\t\t\t\t\t\t  &  &&&  &   ");
					printf("\n\t\t\t\t\t\t   &     &   ");
					printf("\n\t\t\t\t\t\t    && && "    );
					printf("\n\t\t\t\t\t\t      &"    );
		
					printf("\n\n\t\t\t\t\t Programa 4--Datos de usuario\n");
					printf("\t\t\t\t\t Por: Jos%c Adri%cn Rodr%cguez Gonz%clez",em,am,im,am);
					printf("\n\n\t\t\t\t\t Presione enter para continuar");
					getch();
					system("cls");
					
					printf("\n\t\tEjercicio 2--FORMULARIO");
					printf("\n\n\tEscriba los datos que se te piden:\n");
		
					/*Nombre y apellidos*/
					printf("\n\t%cCu%cl es tu nombre? \n\t",pre,am);
					scanf("%s",&name);
					
					printf("\n\t%cCu%cl es tu apellido paterno? \n\t",pre,am);
					scanf("%s",&surname1);
			
					printf("\n\t%cCu%cl es tu apellido materno? \n\t",pre,am);
					scanf("%s",&surname2);
				
					/*Fecha*/
			
					printf("\n\t%cCu%cl es tu fecha de nacimiento? \t (Escriba las separaciones con una diagonal normal) \n\t",pre,am);
					scanf("%s",&date);
				
					/*Ubicacion*/
			
					printf("\n\t%cCu%cl es tu calle? \t(los espacios escribalos con gui%cn bajo) \n\t",pre,am,om);
					scanf("%s",&street);
			
					printf("\n\t%cCu%cl es tu colonia? \t(los espacios escribalos con gui%cn bajo) \n\t",pre,am,om);
					scanf("%s",&col);
			
					printf("\n\t%cCu%cl es tu numero? \n\t",pre,am);
					scanf("%s",&num);
				
			
					printf("\n\t%cCu%cl es tu ciudad?\n\t",pre,am);
					scanf("%s",&city);
			
					printf("\n\t%cCu%cl es tu estado?\n\t",pre,am);
					scanf("%s", &state);
			
					/*Telefono*/
					printf("\n\t%cCu%cl es tu numero telef%cnico?\n\t",pre,am,om);
					scanf("%s",&telephone );
			
			
					/*Imprime el texto*/
					printf("\n\t\t\tFicha de formulario:Respuestas proporcionadas\n");
					/*Datos escritos en el formulario*/
			
					printf("\n\tNombre: %s %s %s\t\tTelef%cno:%s \n",name,surname1,surname2,om,telephone);//Nombre y telefóno
					printf("\n\tFecha de nacimiento: %s \n" ,date);		//Fecha de nacimiento	
					printf("\n\tDirecci%cn:%s, %s, #%s, %s, %s, ",om,street,col,num,city,state);//Dirección		
					printf("\n\n\t\t\t%cDesea repetir el programa?  (1.S%c   2.No) ",pre,im);
					scanf("%i",&opcion);
					}while(opcion==1);
		 		break;
			case  5:
				/*Area y voulemnde un prisma*/
				do{
					
					system("cls");
					printf("\n\t\t\t  &&&&&  &&&&&&  &&&&&&   &&&&&&& &     &  &&&&&     &&&&&&&  &     &      ");
					printf("\n\t\t\t &      &      & &     &     &    &&    & &             &     &&    &     ");
					printf("\n\t\t\t &      &      & &      &    &    & &   & &             &     & &   &     ");
					printf("\n\t\t\t &      &      & &       &   &    &  &  & &   &&&       &     &  &  &     ");
					printf("\n\t\t\t &      &      & &      &    &    &   & & &     &       &     &   & &   ");
					printf("\n\t\t\t &      &      & &     &     &    &    && &     &       &     &    &&     ");
					printf("\n\t\t\t  &&&&&  &&&&&&  &&&&&&   &&&&&&& &     &  &&&&&     &&&&&&&  &     &            ");
		
					printf("\n\n\t\t\t\t\t\t      &"    );
					printf("\n\t\t\t\t\t\t    && && "    );
					printf("\n\t\t\t\t\t\t   &     &    ");
					printf("\n\t\t\t\t\t\t  &  &&&  & ");
					printf("\n\t\t\t\t\t\t  & &     &");
					printf("\n\t\t\t\t\t\t  & &     & "); 
					printf("\n\t\t\t\t\t\t  & &     & ");
					printf("\n\t\t\t\t\t\t  &  &&&  &   ");
					printf("\n\t\t\t\t\t\t   &     &   ");
					printf("\n\t\t\t\t\t\t    && && "    );
					printf("\n\t\t\t\t\t\t      &"    );
		
					printf("\n\n\t\t\t\t\t Programa 5--%crea y volumen de un prisma\n",Am);
					printf("\t\t\t\t\t Por: Jos%c Adri%cn Rodr%cguez Gonz%clez",em,am,im,am);
					printf("\n\n\t\t\t\t\t Presione enter para continuar");
					getch();
					system("cls");
					printf("\n\n\t\t\tVamos a sacar el volumen y el %crea de un prisma\t Primero, introduzca las dimensiones",am);
					printf("\n\t\t\t Altura: ");
					scanf("%f",&hp);
					printf("\t\t\t Base: ");
					scanf("%f",&bp);
					printf("\t\t\t Ancho: ");
					scanf("%f",&ap);
					/*Operaciones*/
					Ap=ap*bp*hp;
					Vp=2*(ap*bp+ap*hp+hp*bp);
					/*Muestra resultado*/
					printf("\t\t\tVolumen:%.2f u^3 \t%crea:%.2f u^2 ",Ap,Am,Vp);
					printf("\n\n\t\t\t%cDesea repetir el programa?  (1.S%c   2.No) ",pre,im);
					scanf("%i",&opcion);
				}while(opcion==1);
		 	break;
			case  6:
				/*Sistema de ecuaciones*/
				do{
					
					system("cls");
					printf("\n\t\t\t  &&&&&  &&&&&&  &&&&&&   &&&&&&& &     &  &&&&&     &&&&&&&  &     &      ");
					printf("\n\t\t\t &      &      & &     &     &    &&    & &             &     &&    &     ");
					printf("\n\t\t\t &      &      & &      &    &    & &   & &             &     & &   &     ");
					printf("\n\t\t\t &      &      & &       &   &    &  &  & &   &&&       &     &  &  &     ");
					printf("\n\t\t\t &      &      & &      &    &    &   & & &     &       &     &   & &   ");
					printf("\n\t\t\t &      &      & &     &     &    &    && &     &       &     &    &&     ");
					printf("\n\t\t\t  &&&&&  &&&&&&  &&&&&&   &&&&&&& &     &  &&&&&     &&&&&&&  &     &            ");
		
					printf("\n\n\t\t\t\t\t\t      &"    );
					printf("\n\t\t\t\t\t\t    && && "    );
					printf("\n\t\t\t\t\t\t   &     &    ");
					printf("\n\t\t\t\t\t\t  &  &&&  & ");
					printf("\n\t\t\t\t\t\t  & &     &");
					printf("\n\t\t\t\t\t\t  & &     & "); 
					printf("\n\t\t\t\t\t\t  & &     & ");
					printf("\n\t\t\t\t\t\t  &  &&&  &   ");
					printf("\n\t\t\t\t\t\t   &     &   ");
					printf("\n\t\t\t\t\t\t    && && "    );
					printf("\n\t\t\t\t\t\t      &"    );
		
					printf("\n\n\t\t\t\t\t Programa 6- Soluci%cn de un sistema de ecuaciones 2x2\n",om);
					printf("\t\t\t\t\t Por: Jos%c Adri%cn Rodr%cguez Gonz%clez",em,am,im,am);
					printf("\n\n\t\t\t\t\t Presione enter para continuar");
					getch();
					system("cls");
					
					printf("\n\t\t\tVamos a realizar un sistema de ecuaciones de 2x2");
					printf("\n\t\t\tInserte el coeficiente  a: ");
					scanf("%f",&a);
					printf("\t\t\tInserte el coeficiente b: ");
					scanf("%f",&b);
					printf("\t\t\tInserte el coeficiente c: ");
					scanf("%f",&c);
					printf("\t\t\tInserte el coeficiente d: ");
					scanf("%f",&d);
					printf("\t\t\tInserte el coeficiente e: " );
					scanf("%f",&e);
					printf("\t\t\tInserte el coeficiente f: ");
					scanf("%f",&f); 
			    	/*Resoluciónd de sistema de ecuacion por suma y resta*/
					y = (a*f - c*d)/(a*e - b*d);
					x = (c - b*y)/a;
					/*Se imprime el resultado*/
					printf("\t\t\tEste es el valor de x: \n\t\t\t%.2f\n\t\t\tEste es el valor de y: \n\t\t\t%.2f",x,y);
					printf("\n\n\t\t\t%cDesea repetir el programa?  (1.S%c   2.No) ",pre,im);
					scanf("%i",&opcion);
				}while(opcion==1);
				break;
			case  7:
				/*Minuscula a mayuscula*/
				do{
					
					system("cls");
					printf("\n\t\t\t  &&&&&  &&&&&&  &&&&&&   &&&&&&& &     &  &&&&&     &&&&&&&  &     &      ");
					printf("\n\t\t\t &      &      & &     &     &    &&    & &             &     &&    &     ");
					printf("\n\t\t\t &      &      & &      &    &    & &   & &             &     & &   &     ");
					printf("\n\t\t\t &      &      & &       &   &    &  &  & &   &&&       &     &  &  &     ");
					printf("\n\t\t\t &      &      & &      &    &    &   & & &     &       &     &   & &   ");
					printf("\n\t\t\t &      &      & &     &     &    &    && &     &       &     &    &&     ");
					printf("\n\t\t\t  &&&&&  &&&&&&  &&&&&&   &&&&&&& &     &  &&&&&     &&&&&&&  &     &            ");
		
					printf("\n\n\t\t\t\t\t\t      &"    );
					printf("\n\t\t\t\t\t\t    && && "    );
					printf("\n\t\t\t\t\t\t   &     &    ");
					printf("\n\t\t\t\t\t\t  &  &&&  & ");
					printf("\n\t\t\t\t\t\t  & &     &");
					printf("\n\t\t\t\t\t\t  & &     & "); 
					printf("\n\t\t\t\t\t\t  & &     & ");
					printf("\n\t\t\t\t\t\t  &  &&&  &   ");
					printf("\n\t\t\t\t\t\t   &     &   ");
					printf("\n\t\t\t\t\t\t    && && "    );
					printf("\n\t\t\t\t\t\t      &"    );
		
					printf("\n\n\t\t\t\t\t Programa 7--Min%cscula a may%cscula\n",um,um);
					printf("\t\t\t\t\t Por: Jos%c Adri%cn Rodr%cguez Gonz%clez",em,am,im,am);
					printf("\n\n\t\t\t\t\t Presione enter para continuar");
					getch();
					system("cls");
					printf("\t\t\tEscriba algo y se har%c en may%csculas\n",am,om);
					for(cont1 =0; (letras1[cont1]=getchar()) !='\n';++cont1);
					/*guardar el contador de caracteres*/
						auxiliar1=cont1;
					/*escribir la línea en mayúsculas*/
					for(cont1=0; cont1<auxiliar1; ++cont1)
						putchar(toupper(letras1[cont1]));
					putchar('\n');
					printf("\n\n\t\t\t%cDesea repetir el programa?  (1.S%c   2.No) ",pre,im);
					scanf("%i",&opcion);
					getchar();
				}while(opcion==1);
		 	break;
			case  8:
				/*Aprobado o reprobado*/
					do{
					system("cls");
					printf("\n\t\t\t  &&&&&  &&&&&&  &&&&&&   &&&&&&& &     &  &&&&&     &&&&&&&  &     &      ");
					printf("\n\t\t\t &      &      & &     &     &    &&    & &             &     &&    &     ");
					printf("\n\t\t\t &      &      & &      &    &    & &   & &             &     & &   &     ");
					printf("\n\t\t\t &      &      & &       &   &    &  &  & &   &&&       &     &  &  &     ");
					printf("\n\t\t\t &      &      & &      &    &    &   & & &     &       &     &   & &   ");
					printf("\n\t\t\t &      &      & &     &     &    &    && &     &       &     &    &&     ");
					printf("\n\t\t\t  &&&&&  &&&&&&  &&&&&&   &&&&&&& &     &  &&&&&     &&&&&&&  &     &            ");
		
					printf("\n\n\t\t\t\t\t\t      &"    );
					printf("\n\t\t\t\t\t\t    && && "    );
					printf("\n\t\t\t\t\t\t   &     &    ");
					printf("\n\t\t\t\t\t\t  &  &&&  & ");
					printf("\n\t\t\t\t\t\t  & &     &");
					printf("\n\t\t\t\t\t\t  & &     & "); 
					printf("\n\t\t\t\t\t\t  & &     & ");
					printf("\n\t\t\t\t\t\t  &  &&&  &   ");
					printf("\n\t\t\t\t\t\t   &     &   ");
					printf("\n\t\t\t\t\t\t    && && "    );
					printf("\n\t\t\t\t\t\t      &"    );
		
					printf("\n\n\t\t\t\t\t Programa 8--Aprobado o reprobado\n");
					printf("\t\t\t\t\t Por: Jos%c Adri%cn Rodr%cguez Gonz%clez",em,am,im,am);
					printf("\n\n\t\t\t\t\t Presione enter para continuar");
					getch();
					system("cls");
					/*Escritura de calificaciones*/
					printf("\t\t\tVamos a identificar si usted est%c aprobado o no",am);
					printf("\n\t\t\tEscriba su 1 parcial: ");
					scanf("%f",&pp);
					printf("\t\t\tEscriba su 2 parcial: ");
					scanf("%f",&sp);
					printf("\t\t\tEscriba su 3 parcial: ");
					scanf("%f",&tp);
					printf("\t\t\tEscriba su 4 parcial: ");
					scanf("%f",&cp);
					/*Promedio redondeado*/
					prom=(pp+sp+tp+cp)/4;
					prom=round(prom);
					if(prom>=6){
						printf("\t\t\t%c%cAprobado!!",admi,admi);
					}else{
						printf("\t\t\treprobado :c");
					}
					printf("\n\n\t\t\t%cDesea repetir el programa?  (1.S%c   2.No) ",pre,im);
					scanf("%i",&opcion);
				}while(opcion==1);
		 	break;
			case  9:
				do{
					system("cls");
					printf("\n\t\t\t  &&&&&  &&&&&&  &&&&&&   &&&&&&& &     &  &&&&&     &&&&&&&  &     &      ");
					printf("\n\t\t\t &      &      & &     &     &    &&    & &             &     &&    &     ");
					printf("\n\t\t\t &      &      & &      &    &    & &   & &             &     & &   &     ");
					printf("\n\t\t\t &      &      & &       &   &    &  &  & &   &&&       &     &  &  &     ");
					printf("\n\t\t\t &      &      & &      &    &    &   & & &     &       &     &   & &   ");
					printf("\n\t\t\t &      &      & &     &     &    &    && &     &       &     &    &&     ");
					printf("\n\t\t\t  &&&&&  &&&&&&  &&&&&&   &&&&&&& &     &  &&&&&     &&&&&&&  &     &            ");
		
					printf("\n\n\t\t\t\t\t\t      &"    );
					printf("\n\t\t\t\t\t\t    && && "    );
					printf("\n\t\t\t\t\t\t   &     &    ");
					printf("\n\t\t\t\t\t\t  &  &&&  & ");
					printf("\n\t\t\t\t\t\t  & &     &");
					printf("\n\t\t\t\t\t\t  & &     & "); 
					printf("\n\t\t\t\t\t\t  & &     & ");
					printf("\n\t\t\t\t\t\t  &  &&&  &   ");
					printf("\n\t\t\t\t\t\t   &     &   ");
					printf("\n\t\t\t\t\t\t    && && "    );
					printf("\n\t\t\t\t\t\t      &"    );
		
					printf("\n\n\t\t\t\t\t Programa 9--numero par o impar\n");
					printf("\t\t\t\t\t Por: Jos%c Adri%cn Rodr%cguez Gonz%clez",em,am,im,am);
					printf("\n\n\t\t\t\t\t Presione enter para continuar");
					getch();
					system("cls");
					printf("\t\t\tVamos a identificar si  su numero es par o impar: ");
					printf("\n\t\t\tIngrese un numero: ");
					scanf("%i",&n);
					if(n%2 ==0){
						printf("\t\t\t\tSu numero es par");
					}
					else{
						printf("\t\t\t\tSu numero es impar");
					}
					printf("\n\n\t\t\t%cDesea repetir el programa?  (1.S%c   2.No) ",pre,im);
					scanf("%i",&opcion);
				}while(opcion==1);
		 	break;
			case 10:
				/*Ecuaciones cuadratyicas normales*/
				do{
					system("cls");
					printf("\n\t\t\t  &&&&&  &&&&&&  &&&&&&   &&&&&&& &     &  &&&&&     &&&&&&&  &     &      ");
					printf("\n\t\t\t &      &      & &     &     &    &&    & &             &     &&    &     ");
					printf("\n\t\t\t &      &      & &      &    &    & &   & &             &     & &   &     ");
					printf("\n\t\t\t &      &      & &       &   &    &  &  & &   &&&       &     &  &  &     ");
					printf("\n\t\t\t &      &      & &      &    &    &   & & &     &       &     &   & &   ");
					printf("\n\t\t\t &      &      & &     &     &    &    && &     &       &     &    &&     ");
					printf("\n\t\t\t  &&&&&  &&&&&&  &&&&&&   &&&&&&& &     &  &&&&&     &&&&&&&  &     &            ");
		
					printf("\n\n\t\t\t\t\t\t      &"    );
					printf("\n\t\t\t\t\t\t    && && "    );
					printf("\n\t\t\t\t\t\t   &     &    ");
					printf("\n\t\t\t\t\t\t  &  &&&  & ");
					printf("\n\t\t\t\t\t\t  & &     &");
					printf("\n\t\t\t\t\t\t  & &     & "); 
					printf("\n\t\t\t\t\t\t  & &     & ");
					printf("\n\t\t\t\t\t\t  &  &&&  &   ");
					printf("\n\t\t\t\t\t\t   &     &   ");
					printf("\n\t\t\t\t\t\t    && && "    );
					printf("\n\t\t\t\t\t\t      &"    );
		
					printf("\n\n\t\t\t\t\t Programa 10 --s0luci%cn de una ecuaci%cn cuadr%ctica\n",um,om,am);
					printf("\t\t\t\t\t Por: Jos%c Adri%cn Rodr%cguez Gonz%clez",em,am,im,am);
					printf("\n\n\t\t\t\t\t Presione enter para continuar");
					getch();
					system("cls");
					
					printf("\nVamos a realizar una ecuaci%cn cuadr%ctica",om,am);
					printf(" \n Inserte a: ");
					scanf("%f",&ac);
					printf(" Inserte b: ");
					scanf("%f",&bc);
					printf(" Inserte c: ");
					scanf("%f",&cc);
					/*Sacar las operaciones de x1 y x2 */
					raiz=pow(bc,2)-4*ac*cc;
					if(raiz>=0){
			
						x2=(-bc+sqrt(pow(bc,2)-(4*ac*cc)))/(2*ac);
						x1=(-bc-sqrt(pow(bc,2)-(4*ac*cc)))/(2*ac);
						printf("X1= %.2f",x1);
						printf("\tx2= %.2f",x2);
					}
					else{
						re=(-bc/(2*ac));
						ima=sqrt((-(pow(bc,2)-(4*ac*cc))))/(2*ac);
						printf("\n\tX1= %.2f+%.2fi",re,ima);
						printf("\tX2= %.2f-%.2fi",re,ima);
					}	
					printf("\n\n\t\t\t%cDesea repetir el programa?  (1.S%c   2.No) ",pre,im);
					scanf("%i",&opcion);
				}while(opcion==1);
		 	break;
			case  11 :
				do{
				
					system("cls");
					printf("\n\t\t\t  &&&&&  &&&&&&  &&&&&&   &&&&&&& &     &  &&&&&     &&&&&&&  &     &      ");
					printf("\n\t\t\t &      &      & &     &     &    &&    & &             &     &&    &     ");
					printf("\n\t\t\t &      &      & &      &    &    & &   & &             &     & &   &     ");
					printf("\n\t\t\t &      &      & &       &   &    &  &  & &   &&&       &     &  &  &     ");
					printf("\n\t\t\t &      &      & &      &    &    &   & & &     &       &     &   & &   ");
					printf("\n\t\t\t &      &      & &     &     &    &    && &     &       &     &    &&     ");
					printf("\n\t\t\t  &&&&&  &&&&&&  &&&&&&   &&&&&&& &     &  &&&&&     &&&&&&&  &     &            ");
		
					printf("\n\n\t\t\t\t\t\t      &"    );
					printf("\n\t\t\t\t\t\t    && && "    );
					printf("\n\t\t\t\t\t\t   &     &    ");
					printf("\n\t\t\t\t\t\t  &  &&&  & ");
					printf("\n\t\t\t\t\t\t  & &     &");
					printf("\n\t\t\t\t\t\t  & &     & "); 
					printf("\n\t\t\t\t\t\t  & &     & ");
					printf("\n\t\t\t\t\t\t  &  &&&  &   ");
					printf("\n\t\t\t\t\t\t   &     &   ");
					printf("\n\t\t\t\t\t\t    && && "    );
					printf("\n\t\t\t\t\t\t      &"    );
		
					printf("\n\n\t\t\t\t\t Programa 11--Mayor de 5 numeros\n");
					printf("\t\t\t\t\t Por: Jos%c Adri%cn Rodr%cguez Gonz%clez",em,am,im,am);
					printf("\n\n\t\t\t\t\t Presione enter para continuar");
					getch();
					system("cls");
					
					printf("\t\t\tVamos a ver cu%cl es el mayor numero\nIngrese 5 numeros:",am);
					printf("\na: ");
					scanf("%i",&anM);
					printf("b: ");
					scanf("%i",&bnM);
					printf("c: ");
					scanf("%i",&cnM);
					printf("d: ");
					scanf("%i",&dnM);
					printf("e: ");
					scanf("%i",&enM);/*Si a mayor que*/
					if(anM>=bnM&&anM>=cnM&&anM>=dnM&&anM>=enM){
						max=anM;
					}
					else{/*Si b es mayor que*/
						if(bnM>=anM&&bnM>=cnM&&bnM>=dnM&&bnM>=enM){
							max=bnM;
						}
						else{/*Si c es mayor que*/
							if(cnM>=bnM&&cnM>=anM&&cnM>=dnM&&cnM>=enM){
								max=cnM;
							}
							else{/*Si d es mayor que*/
								if(dnM>=bnM&&dnM>=anM&&dnM>=cnM&&dnM>=enM){
									max=dnM;
								}
								else{/*Si e es mayor que*/
									if(enM>=bnM&&enM>=anM&&enM>=cnM&&enM>=dnM){
										max=enM;
									}
								}		
							}
						}
					}
					printf("El mayor numero es: %i",max);//Se imprime el numero
					printf("\n\n\t\t\t%cDesea repetir el programa?  (1.S%c   2.No) ",pre,im);
					scanf("%i",&opcion);
				}while(opcion==1);
		 	break;
	
			case  12 :
				do{
					system("cls");
					printf("\n\t\t\t  &&&&&  &&&&&&  &&&&&&   &&&&&&& &     &  &&&&&     &&&&&&&  &     &      ");
					printf("\n\t\t\t &      &      & &     &     &    &&    & &             &     &&    &     ");
					printf("\n\t\t\t &      &      & &      &    &    & &   & &             &     & &   &     ");
					printf("\n\t\t\t &      &      & &       &   &    &  &  & &   &&&       &     &  &  &     ");
					printf("\n\t\t\t &      &      & &      &    &    &   & & &     &       &     &   & &   ");
					printf("\n\t\t\t &      &      & &     &     &    &    && &     &       &     &    &&     ");
					printf("\n\t\t\t  &&&&&  &&&&&&  &&&&&&   &&&&&&& &     &  &&&&&     &&&&&&&  &     &            ");
		
					printf("\n\n\t\t\t\t\t\t      &"    );
					printf("\n\t\t\t\t\t\t    && && "    );
					printf("\n\t\t\t\t\t\t   &     &    ");
					printf("\n\t\t\t\t\t\t  &  &&&  & ");
					printf("\n\t\t\t\t\t\t  & &     &");
					printf("\n\t\t\t\t\t\t  & &     & "); 
					printf("\n\t\t\t\t\t\t  & &     & ");
					printf("\n\t\t\t\t\t\t  &  &&&  &   ");
					printf("\n\t\t\t\t\t\t   &     &   ");
					printf("\n\t\t\t\t\t\t    && && "    );
					printf("\n\t\t\t\t\t\t      &"    );
		
					printf("\n\n\t\t\t\t\t Programa 12--Menor de 5 numeros\n");
					printf("\t\t\t\t\t Por: Jos%c Adri%cn Rodr%cguez Gonz%clez",em,am,im,am);
					printf("\n\n\t\t\t\t\t Presione enter para continuar");
					getch();
					system("cls");
					
					printf("\t\t\tVamos a ver cu%cl es el menor numero\nIngrese 5 numeros:",am);
					printf("\na: ");
					scanf("%i",&anm);
					printf("b: ");
					scanf("%i",&bnm);
					printf("c: ");
					scanf("%i",&cnm);
					printf("d: ");
					scanf("%i",&dnm);
					printf("e: ");
					scanf("%i",&enm);/*Si a mayor que*/
					if(anm<=bnm&&anm<=cnm&&anm<=dnm&&anm<=enm){
						min=anm;
					}
					else{/*Si b es mayor que*/
						if(bnm<=anm&&bnm<=cnm&&bnm<=dnm&&bnm<=enm){
							 min=bnm;
						}
						else{/*Si c es mayor que*/
							if(cnm<=bnm&&cnm<=anm&&cnm<=dnm&&cnm<=enm){
								min=cnm;
							}
							else{/*Si d es mayor que*/
								if(dnm<=bnm&&dnm<=anm&&dnm<=cnm&&dnm<=enm){
									min=dnm;
								}
								else{/*Si e es mayor que*/
									if(enm<=bnm&&enm<=anm&&enm<=cnm&&enm<=dnm){
										min=enm;
									}
								}		
							}
						}
					}
					printf("El mayor numero es: %i",min);//Se imprime el numero
					printf("\n\n\t\t\t%cDesea repetir el programa?  (1.S%c   2.No) ",pre,im);
					scanf("%i",&opcion);
				}while(opcion==1);
		 	break;
				
			case  13 :
				do{
					system("cls");
					printf("\n\t\t\t  &&&&&  &&&&&&  &&&&&&   &&&&&&& &     &  &&&&&     &&&&&&&  &     &      ");
					printf("\n\t\t\t &      &      & &     &     &    &&    & &             &     &&    &     ");
					printf("\n\t\t\t &      &      & &      &    &    & &   & &             &     & &   &     ");
					printf("\n\t\t\t &      &      & &       &   &    &  &  & &   &&&       &     &  &  &     ");
					printf("\n\t\t\t &      &      & &      &    &    &   & & &     &       &     &   & &   ");
					printf("\n\t\t\t &      &      & &     &     &    &    && &     &       &     &    &&     ");
					printf("\n\t\t\t  &&&&&  &&&&&&  &&&&&&   &&&&&&& &     &  &&&&&     &&&&&&&  &     &            ");
		
					printf("\n\n\t\t\t\t\t\t      &"    );
					printf("\n\t\t\t\t\t\t    && && "    );
					printf("\n\t\t\t\t\t\t   &     &    ");
					printf("\n\t\t\t\t\t\t  &  &&&  & ");
					printf("\n\t\t\t\t\t\t  & &     &");
					printf("\n\t\t\t\t\t\t  & &     & "); 
					printf("\n\t\t\t\t\t\t  & &     & ");
					printf("\n\t\t\t\t\t\t  &  &&&  &   ");
					printf("\n\t\t\t\t\t\t   &     &   ");
					printf("\n\t\t\t\t\t\t    && && "    );
					printf("\n\t\t\t\t\t\t      &"    );
		
					printf("\n\n\t\t\t\t\t Programa 13--May%cscula o min%cscula\n",um,um);
					printf("\t\t\t\t\t Por: Jos%c Adri%cn Rodr%cguez Gonz%clez",em,am,im,am);
					printf("\n\n\t\t\t\t\t Presione enter para continuar");
					getch();
					system("cls");
					printf("\n\t\t\tVamos a identificar si es may%cscula o min%cscula\n\t\t\tIngrese una letra:  ",um,um);
					scanf("%c",&letra);
					if(letra>=65 && letra<=90||letra==-91){
						printf("\t\t\tEsta en may%cscula",um);
					}else{
						 if(letra>=97 && letra<=122||letra==-92){
							printf("\t\t\tEsta en min%cscula",um);
						}else{
							printf("\t\t\tNo es una letra");
						}
					}
					printf("\n\n\t\t\t%cDesea repetir el programa?  (1.S%c   2.No) ",pre,im);
					scanf("%i",&opcion);
					getchar();
				}while(opcion==1);
		 	break;
			
			case  14 :
				do{
					system("cls");
					printf("\n\t\t\t  &&&&&  &&&&&&  &&&&&&   &&&&&&& &     &  &&&&&     &&&&&&&  &     &      ");
					printf("\n\t\t\t &      &      & &     &     &    &&    & &             &     &&    &     ");
					printf("\n\t\t\t &      &      & &      &    &    & &   & &             &     & &   &     ");
					printf("\n\t\t\t &      &      & &       &   &    &  &  & &   &&&       &     &  &  &     ");
					printf("\n\t\t\t &      &      & &      &    &    &   & & &     &       &     &   & &   ");
					printf("\n\t\t\t &      &      & &     &     &    &    && &     &       &     &    &&     ");
					printf("\n\t\t\t  &&&&&  &&&&&&  &&&&&&   &&&&&&& &     &  &&&&&     &&&&&&&  &     &            ");
		
					printf("\n\n\t\t\t\t\t\t      &"    );
					printf("\n\t\t\t\t\t\t    && && "    );
					printf("\n\t\t\t\t\t\t   &     &    ");
					printf("\n\t\t\t\t\t\t  &  &&&  & ");
					printf("\n\t\t\t\t\t\t  & &     &");
					printf("\n\t\t\t\t\t\t  & &     & "); 
					printf("\n\t\t\t\t\t\t  & &     & ");
					printf("\n\t\t\t\t\t\t  &  &&&  &   ");
					printf("\n\t\t\t\t\t\t   &     &   ");
					printf("\n\t\t\t\t\t\t    && && "    );
					printf("\n\t\t\t\t\t\t      &"    );
		
					printf("\n\n\t\t\t\t\t Programa 14-- vocal o consonante\n");
					printf("\t\t\t\t\t Por: Jos%c Adri%cn Rodr%cguez Gonz%clez",em,am,im,am);
					printf("\n\n\t\t\t\t\t Presione enter para continuar");
					getch();
					system("cls");
					printf("\n\t\t\tVamos a ver si tu letra es vocal o consonate:");
					printf("\n\t\t\tIngrese una letra: ");
					scanf("%c",&letra2);
			
					switch(letra2){
						case'A':
						case'a':
						case'E':
						case'e':
						case'I':
						case'i':
						case'O':
						case'o':
						case'U':
						case'u':
							printf("\t\t\tVocal");
							break;
						default:
							if((letra2>=0&&letra2<=64)||(letra2>=91&&letra2<=96)||(letra2>=123&&letra2<=126)){
								printf("\t\t\tNo es una letra");
							}
							else{
					
								printf("\t\t\tConsonante");
								if(letra2==-91&&letra2==-92){
									printf("\t\t\tConsonante");
								}
							}
					}					
					printf("\n\n\t\t\t%cDesea repetir el programa?  (1.S%c   2.No) ",pre,im);
					scanf("%i",&opcion);
					getchar();
				}while(opcion==1);
		 	break;
			case  15 :
				do{
					system("cls");
					printf("\n\t\t\t  &&&&&  &&&&&&  &&&&&&   &&&&&&& &     &  &&&&&     &&&&&&&  &     &      ");
					printf("\n\t\t\t &      &      & &     &     &    &&    & &             &     &&    &     ");
					printf("\n\t\t\t &      &      & &      &    &    & &   & &             &     & &   &     ");
					printf("\n\t\t\t &      &      & &       &   &    &  &  & &   &&&       &     &  &  &     ");
					printf("\n\t\t\t &      &      & &      &    &    &   & & &     &       &     &   & &   ");
					printf("\n\t\t\t &      &      & &     &     &    &    && &     &       &     &    &&     ");
					printf("\n\t\t\t  &&&&&  &&&&&&  &&&&&&   &&&&&&& &     &  &&&&&     &&&&&&&  &     &            ");
		
					printf("\n\n\t\t\t\t\t\t      &"    );
					printf("\n\t\t\t\t\t\t    && && "    );
					printf("\n\t\t\t\t\t\t   &     &    ");
					printf("\n\t\t\t\t\t\t  &  &&&  & ");
					printf("\n\t\t\t\t\t\t  & &     &");
					printf("\n\t\t\t\t\t\t  & &     & "); 
					printf("\n\t\t\t\t\t\t  & &     & ");
					printf("\n\t\t\t\t\t\t  &  &&&  &   ");
					printf("\n\t\t\t\t\t\t   &     &   ");
					printf("\n\t\t\t\t\t\t    && && "    );
					printf("\n\t\t\t\t\t\t      &"    );
		
					printf("\n\n\t\t\t\t\t Programa 15--Tipos de tri%cngulos\n",am);
					printf("\t\t\t\t\t Por: Jos%c Adri%cn Rodr%cguez Gonz%clez",em,am,im,am);
					printf("\n\n\t\t\t\t\t Presione enter para continuar");
					getch();
					system("cls");
		
					printf("\n\t\t\tVamos a ver si que tipo de triangulo es con los valores dados:  ");
					printf("\n\t\t\tInserte a: ");
					scanf("%i",&at);
					printf("\t\t\tInserte b: ");
					scanf("%i",&bt);
					printf("\t\t\tInserte c: ");
					scanf("%i",&ct);
					if(at==bt&&at==ct&&bt==ct){
						printf("\n\t\t\tSu triangulo es equilatero");
					}
					else{
						if(at==bt||bt==ct||at==ct){
							printf("\n\t\t\tSu triangulo es is%csceles",om);
						}
						else{
						printf("\n\t\t\tSu triangulo es escaleno");
						}
					}
					printf("\n\n\t\t\t%cDesea repetir el programa?  (1.S%c   2.No) ",pre,im);
					scanf("%i",&opcion);
				}while(opcion==1);
		 	break;
			case  16 :
				do{
					system("cls");
					printf("\n\t\t\t  &&&&&  &&&&&&  &&&&&&   &&&&&&& &     &  &&&&&     &&&&&&&  &     &      ");
					printf("\n\t\t\t &      &      & &     &     &    &&    & &             &     &&    &     ");
					printf("\n\t\t\t &      &      & &      &    &    & &   & &             &     & &   &     ");
					printf("\n\t\t\t &      &      & &       &   &    &  &  & &   &&&       &     &  &  &     ");
					printf("\n\t\t\t &      &      & &      &    &    &   & & &     &       &     &   & &   ");
					printf("\n\t\t\t &      &      & &     &     &    &    && &     &       &     &    &&     ");
					printf("\n\t\t\t  &&&&&  &&&&&&  &&&&&&   &&&&&&& &     &  &&&&&     &&&&&&&  &     &            ");
		
					printf("\n\n\t\t\t\t\t\t      &"    );
					printf("\n\t\t\t\t\t\t    && && "    );
					printf("\n\t\t\t\t\t\t   &     &    ");
					printf("\n\t\t\t\t\t\t  &  &&&  & ");
					printf("\n\t\t\t\t\t\t  & &     &");
					printf("\n\t\t\t\t\t\t  & &     & "); 
					printf("\n\t\t\t\t\t\t  & &     & ");
					printf("\n\t\t\t\t\t\t  &  &&&  &   ");
					printf("\n\t\t\t\t\t\t   &     &   ");
					printf("\n\t\t\t\t\t\t    && && "    );
					printf("\n\t\t\t\t\t\t      &"    );
		
					printf("\n\n\t\t\t\t\t Programa 16--Men%c de figuras\n",um);
					printf("\t\t\t\t\t Por: Jos%c Adri%cn Rodr%cguez Gonz%clez",em,am,im,am);
					printf("\n\n\t\t\t\t\t Presione enter para continuar");
					getch();
					system("cls");
					printf("\n\n\t\t\tMen%c de figuras.\n\t\t\ta)Cuadrado.\n\t\t\tb)Rect%cngulo.",um,am);
					printf("\n\t\t\tc)C%crculo.\n\t\t\td)Tri%cngulo.\n\t\t\te)Trapecio.",im,am);
					printf("\n\t\t\t%cCu%cl quieres sacar su %crea?\n\t\t\t(Escoja entre las opciones con el numero asignado al principio de cada opci%cn): ",pre,am,am,om);
					scanf("%c",&pregunta);
					/*Cuadrado*/
					switch(pregunta){
						case'a':
						case'A':
							do{
								system("cls");
								printf("\t\t\t%crea de un cuadrado: ",Am);
								printf("\n\t\t\tHa escogido el cuadrado,esta es su formula:\n\n\t\t\t%crea=l^2",am);
								printf("\n\n\t\t\tingrese el valor de un lado:");
								scanf("%f",&lc);
								area=pow(lc,2);
								printf("\n\t\t\tEsta es su %crea: %.2f m^2",am,area);
								printf("\n\n\t\t\t%cDesea repetir el programa?  (1.S%c   2.No) ",pre,im);
								scanf("%i",&opcion);
							}while(opcion==1);
							break;
						/*Rectangulo*/
						case'b':
						case'B':
							do{
								system("cls");
								printf("\t\t\t%crea de un rect%cngulo",Am,am);
								printf("\n\t\t\tHa escogido el rect%cngulo, esta es su formula:\n\n\t\t\t%crea=b*h",am,am);
								printf("\n\n\t\t\tEscriba la altura: ");
								scanf("%f",&rb);
								printf("\t\t\tEscriba la altura: ");
								scanf("%f",&rh);
								area=rb*rh;
								printf("\n\t\t\tEsta es su %crea:%.2f m^2",am,area);
								printf("\n\n\t\t\t%cDesea repetir el programa?  (1.S%c   2.No) ",pre,im);
								scanf("%i",&opcion);
							}while(opcion==1);
							break;
						/*Circulo*/
						case'c':
						case'C':
							do{
								system("cls");
								printf("\t\t\t%crea de un c%crculo",Am,im);
								printf("\n\t\t\tHa escogido el c%crculo, esta es su formula:\n\n\t\t\t%crea=(3.1415)r^2 ",im,am);
								printf("\n\n\t\t\tInserte el radio:  ");
								scanf("%f",&rc);
								area=pi*pow(rc,2);
								printf("\n\t\t\tEsta es su %crea:%.2f m^2",am,area);
								printf("\n\n\t\t\t%cDesea repetir el programa?  (1.S%c   2.No) ",pre,im);
								scanf("%i",&opcion);
							}while(opcion==1);
							break;
						/*Triangulo*/
						case'd':
						case'D':
							do{
								system("cls");
								printf("\t\t\t%crea de un tri%cngulo",Am,am);	
								printf("\n\t\t\tHa escogido el tri%cngulo, esta es su formula\n\n\t\t\t%crea=(b*h)/2",am,am);
								printf("\n\n\t\t\tInserte la base: ");
								scanf("%f",&tb);
								printf("\t\t\tInserte la altura: ");
								scanf("%f",&th);
								area=(tb*th)/2;
								printf("\n\t\t\tEsta es su %crea:%.2f m^2",am,area);
								printf("\n\n\t\t\t%cDesea repetir el programa?  (1.S%c   2.No) ",pre,im);
								scanf("%i",&opcion);
							}while(opcion==1);
							break;
						/*Trapecio*/
						case'e':
						case'E':
							do{
								system("cls");
								printf("\n\t\t\t%crea de un trapecio",Am);
								printf("\n\t\t\tHa escogido el trapecio, esta es su formula:\n\n\t\t\t%crea=((B+b)*h)/2",am);
								printf("\n\n\t\t\tInserte la base mayor: ");
								scanf("%f",&TB);
								printf("\t\t\tInserte la base menor: ");
								scanf("%f",&Tb);
								printf("\t\t\tInserte la altura: ");
								scanf("%f",&Th);
								area=((TB+Tb)*Th)/2;
								printf("\n\t\t\tEsta es su %crea:%.2f m^2",am,area);
								printf("\n\n\t\t\t%cDesea repetir el programa?  (1.S%c   2.No) ",pre,im);
								scanf("%i",&opcion);
							}while(opcion==1);
							break;
						default:
							printf("\n\t\t\tNo existe la opci%cn: %c",om,pregunta);
							
						}
					printf("\n\n\t\t\t%cDesea voler al men%c?  (1.S%c   2.No) ",pre,um,im);
					scanf("%i",&opcion);
					getchar();
				}while(opcion==1);
		 	break;
			case 17:
				do{
					system("cls");	
					printf("\n\t\t\t  &&&&&  &&&&&&  &&&&&&   &&&&&&& &     &  &&&&&     &&&&&&&  &     &      ");
					printf("\n\t\t\t &      &      & &     &     &    &&    & &             &     &&    &     ");
					printf("\n\t\t\t &      &      & &      &    &    & &   & &             &     & &   &     ");
					printf("\n\t\t\t &      &      & &       &   &    &  &  & &   &&&       &     &  &  &     ");
					printf("\n\t\t\t &      &      & &      &    &    &   & & &     &       &     &   & &   ");
					printf("\n\t\t\t &      &      & &     &     &    &    && &     &       &     &    &&     ");
					printf("\n\t\t\t  &&&&&  &&&&&&  &&&&&&   &&&&&&& &     &  &&&&&     &&&&&&&  &     &            ");
	
					printf("\n\n\t\t\t\t\t\t      &"    );
					printf("\n\t\t\t\t\t\t    && && "    );
					printf("\n\t\t\t\t\t\t   &     &    ");
					printf("\n\t\t\t\t\t\t  &  &&&  & ");
					printf("\n\t\t\t\t\t\t  & &     &");
					printf("\n\t\t\t\t\t\t  & &     & "); 
					printf("\n\t\t\t\t\t\t  & &     & ");
					printf("\n\t\t\t\t\t\t  &  &&&  &   ");
					printf("\n\t\t\t\t\t\t   &     &   ");
					printf("\n\t\t\t\t\t\t    && && "    );
					printf("\n\t\t\t\t\t\t      &"    );
	
					printf("\n\n\t\t\t\t\t Programa 16--Men%c de series n%cmericas\n",um,um);
					printf("\t\t\t\t\t Por: Jos%c Adri%cn Rodr%cguez Gonz%clez",em,am,im,am);
					printf("\n\n\t\t\t\t\t Presione enter para continuar");
					getch();
					system("cls");	
					printf("\n\n\t\t\tMen%c de series\n\n",um);
					printf("\t\t1.Serie del 1 al 10\n");
					printf("\t\t2.-Serie del 1 al n\n");
					printf("\t\t3.-Serie de N a M\n");
					printf("\t\t Escoga con las opciones presentadas: ");
					scanf("%i", &opc17);
					switch(opc17){
						case 1:
							do{		
								system("cls");
								printf("\t\t\tSerie del 1 al 10");
								num1=1;
								printf("\n\t");
								do{
									printf("%i, ",num1);
									num1++;
								}while(num1<=10);
								printf("\n\n\t\t\t%cDesea repetir el programa?  (1.S%c   2.No) ",pre,im);
								scanf("%i",&opcion);
							}while(opcion==1);
							break;
						case 2:
							do{
								system("cls");
								printf("\t\t\tSerie del 1 a N");
								num1=1;
								printf("\n\t\t\tInserte el numero l%cmite: ",im);
								scanf("%i",&n1);
								printf("\n\t");
								do{
									printf("%i, ",num1);
									num1++;
								}while(num1<=n1);
								printf("\n\n\t\t\t%cDesea repetir el programa?  (1.S%c   2.No) ",pre,im);
								scanf("%i",&opcion);
							}while(opcion==1);	
							break;
						case 3:
							do{
								
								system("cls");
								printf("\t\t\tSeria de N a M");
								printf("\n\n\t\tEscriba el numero a iniciar: ");
								scanf("%i",&n1);
								printf("\t\tEscriba el numero limite: ");
								scanf("%i",&m1);
								printf("\n\t");
								do{
									printf("%i,",n1);
									n1++;
								}while(n1<=m1);
								printf("\n\n\t\t\t%cDesea repetir el programa?  (1.S%c   2.No) ",pre,im);
								scanf("%i",&opcion);					
							}while(opcion==1);
							break;
						default:
							printf("\n\t\t\tNo es una opci%cn valida",om);
					}	
					opc17=0;
					getchar();
					printf("\n\n\t\t\t%cDesea repetir el men%c de series? (1.S%c   2.No) ",pre,um,im);
					scanf("%i",&opcion);
					}while(opcion==1);		
			break;
			default:	
				printf("\n\n\t\t\tEsa no es una opci%cn",om);	
		}
		opc=0;
	    printf("\n\n\t\t\t%cDesea repetir el men%c principal?  (1.S%c   2.No) ",pre,um,im);
		scanf("%i",&opcion);
	}while(opcion==1);
	getch();
}
