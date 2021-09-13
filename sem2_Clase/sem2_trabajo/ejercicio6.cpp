#include <iostream>
using namespace std;

int main(){

	float num[10], promedio, suma = 0;
	
	for (int i = 0; i < 10; i++)
	{
		cout<<"Ingrese numero "<<i+1<<": ";
		cin>>num[i];
		suma += num[i];
	}

	promedio = suma / 10;
	
	int menores = 0, mayores = 0;

	for (int i= 0; i < 10; i++)
	{
		if (promedio < num[i])
			mayores++;
		else if(promedio > num[i])
			menores++;
	}

	cout<<"\n===RESULTADOS==="<<endl;
	cout<<"\nCantidad mayores que el promedio: "<< mayores<<endl;
	cout<<"Cantidad menores que el promedio: "<< menores<<endl;
}
