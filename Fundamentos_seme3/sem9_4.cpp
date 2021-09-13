#include <iostream>
using namespace std;

float DeterminarPorcentaje(float sueldo)
{
	float aumento;
	if (sueldo > 5001)
		aumento = 0.10;
	else if ( sueldo >= 3501 and sueldo <= 5000)
		aumento = 0.15;
	else if ( sueldo >= 2001 and sueldo <= 3500)
		aumento = 0.20;
	else if ( sueldo <= 2000)
		aumento = 0.25;
	return aumento;
}

void CalculaSueldoTotal(float sueldo)
{
	float aumento;
	float sueldo_total;
	
	aumento = sueldo * DeterminarPorcentaje(sueldo);
	sueldo_total = aumento + sueldo;
	
	cout<<"\nSu sueldo base es: "<<sueldo<<endl;
	cout<<"Monto de aumento: "<<aumento<<endl;
	cout<<"Su sueldo total es: "<<sueldo_total<<endl;
	
}

int main()
{
	float sueldo;
	cout<<"\tIncremente su Sueldo"<<endl;
	cout<<"Ingrese su sueldo: ";
	cin>>sueldo;
	
	CalculaSueldoTotal(sueldo);
	
	return 0;
}
