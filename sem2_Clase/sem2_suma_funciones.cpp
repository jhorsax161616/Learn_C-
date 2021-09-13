#include <iostream>
using namespace std;

float sumar(float a, float b);

int main()
{
	float num_1, num_2, suma;
	cout<<"SUMA 2 VARIABLES"<<endl;

	cout<<"\nIngresa un numero: ";
	cin>> num_1;
	cout<<"\nIngresa un numero: ";
        cin>> num_2;
	suma =	sumar(num_1, num_2);
	
	cout<<"\nLa suma es: " <<suma<<endl;

	return 0;
}

float sumar(float a, float b)
{
        return a + b;
}

