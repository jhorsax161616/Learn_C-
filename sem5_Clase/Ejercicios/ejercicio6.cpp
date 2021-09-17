#include <iostream>
#include <string.h>
using namespace std;

/*Pedir su nombre al usuario en MAYÚSCULA, si su nombre comienza por la letra A, convertir su nombre a minúsculas, caso contrario no convertirlo.*/

int main(){

	char nombre[25];

	cout<<"Ingresa tu nombre en MAYUSCULA: ";
	cin.getline(nombre, 25, '\n');

	if(nombre[0] == 'A')
	{
		for (int i=0; i < strlen(nombre); i++)
			nombre[i] = tolower(nombre[i]);
	}
	else
		cout<<"\nNo eres digno de ser minimizado\n"<<endl;

	cout<<"Nombre: "<<nombre<<endl;

	return 0;
}
