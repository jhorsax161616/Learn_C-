#include <iostream>
#include <string.h>
using namespace std;

/*Convertir dos cadenas de minúsculas a MAYUSCULAS. Compararlas, y decir si son iguales o no.*/

int main(){

	char cad1[50];
	char cad2[50];

	cout<<"==CONVIRTIENTO A MINUSCULA==\n"<<endl;
	cout<<"Ingrese cadena 1 en minuscula: ";
	cin.getline(cad1, 50, '\n');
	cout<<"Ingrese cadena 2 en minuscula: ";
	cin.getline(cad2, 50, '\n');
	
	//Llevando a mayusculas las cadenas.
	int len = strlen(cad1);
	int len2 = strlen(cad2);

	for (int i=0; i < len; i++)
		cad1[i] = toupper(cad1[i]);
	for (int i=0; i < len2; i++)
		cad2[i] = toupper(cad2[i]);
	
	//comparando las cadenas
	if(strcmp(cad1, cad2) == 0)
		cout<<"\nTus cadenas son iguales"<<endl;
	else
		cout<<"\nTus cadenas no son iguales"<<endl;

	cout<<cad1<<endl;
	cout<<cad2<<endl;

	return 0;
}
