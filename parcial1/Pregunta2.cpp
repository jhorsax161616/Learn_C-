#include <iostream>
using namespace std;

int main(){
	
	int n;
	cout<<"Ingrese el tamaño del array: ";
	cin>>n;

	int numeros[n];

	for (int i=0; i<n; i++)
	{
		cout<<"Ingrese numero "<<i+1<<": ";
		cin>>numeros[i];
	}

	cout<<"\n==EVALUANDO SI HAY COINCIDENCIA DE SUMA==\n"<<endl;

	int suma;
	float coincidencia = false;
	for (int i=0; i < n; i++)
	{
		suma = 0;
		for (int x = 0; x < n;x++)
		{
			if (x==i)
				continue;
			else
				suma += numeros[x];
		}
		
		if (suma == numeros[i])
		{
			cout<<"El numero "<<numeros[i]<<" equivale a la suma de los demas."<<endl;
			coincidencia = true;
		}
	}

	if (coincidencia == false)
		cout<<"No se encontro coincidencia de suma"<<endl;
	return 0;
}