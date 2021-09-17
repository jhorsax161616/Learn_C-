#include <iostream>
#include <string.h>
using namespace std;

/*Pedir al usuario que digite 2 cadenas de caracteres, e indicar si ambas cadenas son iguales, en caso de no serlo, indicar cuál es mayor alfabéticamente.*/

int main(){

	char cad1[50];
	char cad2[50];

	cout<<"Ingrese cadena 1: ";
	cin.getline(cad1, 50, '\n');

	cout<<"Ingrese cadena 2: ";
	cin.getline(cad2, 50, '\n');

	if (strcmp(cad1, cad2) == 0)
		cout<<"\nAmbas cadenas son iguales"<<endl;
	else if (strcmp(cad1, cad2) < 0)
	{
		cout<<"\nLa cadena 2 es mayor alfabéticamente"<<endl;
		cout<<"\nCadena: "<<cad2<<endl;
	}
	else
	{
		cout<<"\nLa cadena 1 es mayor alfabéticamente"<<endl;
		cout<<"\nCadena: "<<cad1<<endl;
	}

	return 0;
}
