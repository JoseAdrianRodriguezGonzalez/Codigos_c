#include<stdio.h>
#include<conio.h>
main(){
	int A;
	char letra,um=163,am=160,im=161,pre=168,om=162,em= 130;//caracteres
	/*Portada*/
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

	printf("\n\n\t\t\t\t\t TAREA 1-- May%cscula o min%cscula\n",um,um);
	printf("\t\t\t\t\t Por: Jos%c Adri%cn Rodr%cguez Gonz%clez",em,am,im,am);
	printf("\n\t\t\t\t\t Tercer Semestre ");
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
	getch();
}
