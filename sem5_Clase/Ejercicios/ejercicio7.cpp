#include <iostream>
#include <string.h>
using namespace std;

/*Pedir al usuario 2 cadenas de caracteres de números, uno entero y el otro real, convertirlos a sus respectivos valores y por último sumarlos.*/

float suma(int a, float b);

int main(){
	
	int len = 25;
	char entero[len];
	char real[len];

	cout<<"==SUMANDO==\n"<<endl;
	cout<<"Ingrese un numero entero: ";
	cin.getline(entero, len, '\n');
	cout<<"Ingrese un numero real: ";
	cin.getline(real, len, '\n');

	int ente = atoi(entero);
	float rea = atof(real);

	cout<<"\nLa suma es: "<<suma(ente, rea)<<endl;

	return 0;
}

float suma(int a, float b)
{
	return a + b;
}

