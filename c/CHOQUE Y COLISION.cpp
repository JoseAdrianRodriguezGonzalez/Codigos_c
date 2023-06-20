#include<conio.h>
#include<stdio.h>
#include<windows.h>
void gotoxy(int x, int y);
main()
{
	int BarX=5,BarY=5,LimitY1=2, LimitY2=20, n=0, Tecla,y,Barx2;
	//Escribir barra
	y=BarY;
	n=0;
	while(n<5)
	{
		gotoxy(BarX,y);
		printf("|");
		y++;
		n++;
	}
	barx2=
	while(n<5){
		gotoxy()
	}
	while(1)
	{
		if(kbhit()==1) //Si se presiona una tecla
		{
			Tecla = getch();
		}
		if(Tecla == 's' || Tecla == 'S' || Tecla == 'w' || Tecla == 'W')
		{
			//Borrar la Barra
			
			n=0;
			y=BarY;
			while(n<5)
			{
				gotoxy(BarX,y);
				printf(" ");
				y++;
				n++;
			}
			if(Tecla == 's' || Tecla == 'S')
			{
				BarY++;	
			}
			if(Tecla == 'w' || Tecla == 'W')
			{
				BarY--;
			}
			//Verificar Limites
			if(BarY <= LimitY1) //Limite superior
			{
				BarY=LimitY1+1;
			}
			if(BarY >= LimitY2-5) //Limite inferior
			{
				BarY=LimitY2-6;
			}
			//Escribir la Barra
			n=0;
			y=BarY;
			while(n<5)
			{
				gotoxy(BarX,y);
				printf("|");
				y++;
				n++;
			}
			Tecla=0;
		}
	}
}
void gotoxy(int x, int y)
{
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon,dwPos);
}

