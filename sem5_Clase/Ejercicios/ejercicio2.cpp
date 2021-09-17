#include <iostream>
#include <string.h>
using namespace std;

/*Pedir al usuario una cadena de caracteres, almacenarla en un arreglo y copiar todo su contenido hacia otro arreglo de caracteres.*/

int main(){
	
	char cadena[50];
	char copy[50];

	cout<<"Ingresa cadena: ";
	cin.getline(cadena, 50, '\n');

	cout<<"\n==COPIANDO CADENA==\n"<<endl;
	
	strcpy(copy, cadena);

	cout<<"Original: "<<cadena<<endl;
	cout<<"\nCopia: "<<copy<<endl;

	return 0;
}
