//Crear un programa que nos permita hallar la multiplicación de 3 variables utilizando funciones
#include <iostream>
using namespace std;

float multiplicar(float num1, float num2, float num3);

int main()
{
	float num1, num2, num3, multi;

	cout<<"===MULTIPLICACION DE 3 NUMEROS==="<<endl;

	cout<<"Ingrese numero 1: ";
	cin>>num1;
	cout<<"Ingrese numero 2: ";
        cin>>num2;
	cout<<"Ingrese numero 3: ";
        cin>>num3;
	
	multi = multiplicar(num1, num2, num3);

	cout<<"\nLa multiplicacion es: "<<multi<<endl;

	return 0;
}

float multiplicar(float num1, float num2, float num3)
{
	return num1 * num2 * num3;
}
