#include <iostream>
using namespace std;

int main(){
	
	int n;
	cout<<"Ingrese tamaño de vector: ";
	cin>>n;
	int numeros[n];

	for (int i=0; i < n ; i++)
	{
		cout<<"\nIngrese un numero: ";
		cin>>numeros[i];
	}
	for (int i=0; i < n; i++)
	{
		cout<<"Indice "<<i<<" == "<<numeros[i]<<endl;  
	}
	return 0;
}

