/*Desarrollar un programa que permita ingresar clientes 
(El programa debe permitirme ingresar cuantos clientes debo de ingresar),
posterior a ello, ingresar el nombre y sueldo de cada cliente, luego,
calcular si el cliente es apto para el crédito o no. Si el sueldo es
mayor a 2500 soles, es apto, de lo contrario no es apto. finalmente
mostrar el nombre, sueldo y si es apto o no.*/

#include <iostream>
using namespace std;

int main(){

	int num_clien;

	cout<<"====EVALUANDO SI EL CLIENTE ES APTO====\n"<<endl;

	cout<<"Ingrese numero de clientes a ingresar: ";
	cin>>num_clien;

	//Declarando arrays
	string NOMBRE[num_clien];
	float SUELDO[num_clien];
	string APTO[num_clien];
	
	cout<<"\n==INGRESO DE DATOS DE LOS CLIENTES==\n"<<endl;
	for (int i=0; i < num_clien; i++)
	{
		cout<<"Ingrese nombre del cliente N°"<<i+1<<": ";
		cin>>NOMBRE[i];

		cout<<"Ingrese sueldo del cliente N° "<<i+1<<": ";
		cin>>SUELDO[i];
		cout<<"\n";

		//Evaluando si es apto
		if (SUELDO[i] > 2500)
			APTO[i] = "ES APTO";
		else
			APTO[i] = "NO ES APTO";
	}

	cout<<"\n===RESULTADOS DE EVALUACION===\n"<<endl;

	cout<<"Id\tNombre\tSueldo\tEvaluacion"<<endl;
	for (int i=0; i<num_clien;i++)
	{
		cout<<i+1<<"\t"<<NOMBRE[i]<<"\t"<<SUELDO[i]<<"\t"<<APTO[i]<<endl;
	}

	return 0;
}
