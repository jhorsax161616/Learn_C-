//Crear un programa para el promedio de 3 notas

#include <iostream>
using namespace std;


int main()
{
	float nota_1, nota_2, nota_3, promedio;

	cout<<"HALLANDO PROMEDIO"<<endl;
	cout<<"\nIngrese nota 1: ";
	cin>>nota_1;
	cout<<"\nIngrese nota 2: ";
        cin>>nota_2;
	cout<<"\nIngrese nota 3: ";
        cin>>nota_3;

	promedio = (nota_1 + nota_2 + nota_3)/3;
	
	cout<<"\nSu promedio es: "<<promedio<<endl;

	return 0;

}
