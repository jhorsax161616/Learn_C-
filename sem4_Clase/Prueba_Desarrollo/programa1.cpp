#include <iostream>
using namespace std;

void registrar(int n);
void mostrar(int n);

struct Libro{
                int codigo;
                char titulo[30];
                char genero[20];
                char ano_publicacion[10];
        }registro[50];

int main(){
	
	int cant;

	cout<<"===REGISTRO DE LIBROS===\n"<<endl;
	cout<<"Cuantos libros ingresara?: ";
	cin>>cant; 

	registrar(cant);
	mostrar(cant);

	return 0;
}

void registrar(int n)
{
	
        for (int i = 0; i < n; i++)
        {
                cout<<"\n===INGRESE DATOS DEL LIBRO "<<i+1<<" ===\n"<<endl;
                cout<<"Codigo: ";
                cin>>registro[i].codigo;
                cout<<"Titulo: ";
		cin>>registro[i].titulo;
                cout<<"genero: ";
		cin>>registro[i].genero;
                cout<<"Año de publicacion: ";
                cin>>registro[i].ano_publicacion;
        }
}

void mostrar(int n)
{
	cout<<"\n===REPROTE DE DATOS===\n"<<endl;
	for (int i = 0; i < n; i++)
        {
                cout<<"\n==Libro "<<i+1<<" ==\n"<<endl;
                cout<<"Codigo: "<<registro[i].codigo<<endl;
                cout<<"Titulo: "<<registro[i].titulo<<endl;
                cout<<"Genero: "<<registro[i].genero<<endl;
                cout<<"Año de publicacion: "<<registro[i].ano_publicacion<<endl;
        }
}

