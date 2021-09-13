#include <string.h>
#include <iostream>
using namespace std;

int registrar();
void mostrar(int n);

struct Cliente{
        int codigo;
        char nombre[30];
        char apellido[30];
        int edad;
        char genero[10];
}clientes[50];

int main(){

    int op;
	
	int cant;

	do{
		cout<<"====MENU===\n"<<endl;
		cout<<"1. Registrar"<<endl;
		cout<<"2. Mostrar"<<endl;
		cout<<"3. Salir"<<endl;

		cout<<"<Ingrese opcion: ";
		cin>>op;

		switch (op)
		{
			case 1:
				{
					cant = registrar();
				}break;
			case 2:
				{
					mostrar(cant);
				}break;
			case 3:
				{
					cout<<"Adios"<<endl;
				}break;
		}
		}while(op !=3);

        return 0;
}

int registrar()
{
	int n;
	cout<<"===REGISTRO DE CLIENTES===\n"<<endl;
    cout<<"Ingrese cantidad de clientes: ";
    cin>>n;

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

	return n;
}

void mostrar(int n)
{
	int may=0, muje=0, var_men=0;

        cout<<"\n===REPROTE DE DATOS===\n"<<endl;
        for (int i = 0; i < n; i++)
        {
                cout<<"\n===DATOS DEL CLIENTE N° "<<i+1<<" ===\n"<<endl;
                cout<<"Codigo: "<<clientes[i].codigo<<endl;
                cout<<"Nombre: "<<clientes[i].nombre<<endl;
                cout<<"Apellido: "<<clientes[i].apellido<<endl;
                cout<<"Edad: "<<clientes[i].edad<<endl;
                cout<<"Genero: "<<clientes[i].genero<<endl;

			if (clientes[i].edad >= 18)
				may++;
			if ((strcmp(clientes[i].genero,"F") == 1))
				muje++;
			if ((strcmp(clientes[i].genero,"M")) == 1)
			{
				if(clientes[i].edad < 18)
					var_men++;
			}
        }



	cout<<"\nClientes mayores de edad: "<<may<<endl;
	cout<<"Clientes mujeres: "<<muje<<endl;
	cout<<"Varones y menores de edad: "<<var_men<<endl;
}
