#include<stdio.h>
#include<conio.h>

int main(){
	char a;
	printf("Escribe una letra: ");
	scanf("%c",&a);
	if(a =='a'||a=='A'||a =='e'||a=='E'||a =='i'||a=='I'||a =='o'||a=='O'||a =='u'||a=='U')
		printf("\n %c su letra vocal",a);
	else
		printf("\n %c su letra es consonante");
	getch();
	return 0;
	
}
