/*Hacer un programa que lea 5 números en un arreglo, los 
copie a otro arreglo multiplicados por 2 y muestre el 
segundo arreglo */   

#include <iostream>
using namespace std;

int main(){
	int n = 5;
	int numeros[n];
	int multi[n];
	
	cout<<"==MULTIPLICANDO ARREGLO * 2==\n"<<endl;

	for (int i=0; i < n; i++)
	{
		cout<<"Ingrese numero "<<i+1<<": ";
		cin>>numeros[i];
	}

	for (int i=0; i <n; i++)
		multi[i] = numeros[i] * 2;

	cout<<"\n==ARREGLO MULTIPLICADO=="<<endl;
	
	for (int i=0; i < n; i++)
		cout<<multi[i]<<" ";
	
	cout<<"\n";
	return 0;
}
