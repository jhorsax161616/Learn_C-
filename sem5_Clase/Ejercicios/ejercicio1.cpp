#include <iostream>
#include <string.h>
using namespace std;

/*Crear un programa que pida al usuario que digite una cadena de caracteres, luego verificar la longitud de la cadena, y si ésta supera a 10 caracteres mostrarla en pantalla, caso contrario no mostrarla.*/

int main(){

	char cadena[30];

	cout<<"Ingrese una cadena: ";
	cin.getline(cadena, 30, '\n');

	//Obtenemos la longitud de la cadena
	
	int len = strlen(cadena);

	//Aplicamos la condicion
	
	if (len > 10)
		cout<<"\nSu cadena es: " <<cadena<<endl;
	else
		cout<<"\nNo se puede mostrar su cadena, tamaño: " << len <<" <= 10"<<endl;

	return 0;
}
