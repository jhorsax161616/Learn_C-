#include <iostream>
using namespace std;

void registrar(int n);
void mostrar(int n);

struct Cliente{
	int codigo;
	char nombre[30];
	char apellido[30];
	int edad;
	char genero[10];
}clientes[50];

int main(){
	
	int cant;

	cout<<"===REGISTRO DE CLIENTES===\n"<<endl;
	cout<<"Ingrese cantidad de clientes: ";
	cin>>cant;

	registrar(cant);
	mostrar(cant);
	
	return 0;
}

void registrar(int n)
{

        for (int i = 0; i < n; i++)
        {
                cout<<"\n===INGRESE DATOS DEL CLIENTE N° "<<i+1<<" ===\n"<<endl;
                cout<<"Codigo: ";
                cin>>clientes[i].codigo;
                cout<<"Nombre: ";
                cin>>clientes[i].nombre;
                cout<<"Apellido: ";
                cin>>clientes[i].apellido;
                cout<<"Edad: ";
                cin>>clientes[i].edad;
		cout<<"Genero: ";
		cin>>clientes[i].genero;
        }
}

void mostrar(int n)
{
        cout<<"\n===REPROTE DE DATOS===\n"<<endl;
        for (int i = 0; i < n; i++)
        {
		cout<<"\n===DATOS DEL CLIENTE N° "<<i+1<<" ===\n"<<endl;
		cout<<"Codigo: "<<clientes[i].codigo<<endl;
                cout<<"Nombre: "<<clientes[i].nombre<<endl;
                cout<<"Apellido: "<<clientes[i].apellido<<endl;
                cout<<"Edad: "<<clientes[i].edad<<endl;
                cout<<"Genero: "<<clientes[i].genero<<endl;
        }
}
