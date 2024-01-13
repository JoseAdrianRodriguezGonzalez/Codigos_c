#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int numero, contador, sumador;
	sumador=contador=0;
	do{
		cout<<"introduzca un numeroa mayor que '0 y menor que 500: ";
		cin>>numero;
		
	}while(numero<0||numero>500);
	if(numero<=492){
		for(numero;numero<500;numero+=8){
			sumador+=numero;
			contador+=1;
			cout<<numero<<" , ";
		}
		
	}
	cout<<"\nEsta es la suma: "<<sumador<<endl;
	cout<<" El numero total hasta 500 separados ocho posiciones es: "<<contador<<endl;
	system("PAUSE");
	return 0;
}
