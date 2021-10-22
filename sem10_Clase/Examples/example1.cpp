#include <iostream>
using namespace std;

struct Nodo{
	int id;
	string descripcion;
	Nodo *siguiente;
};

void agregarPila(Nodo *&, int, string);

int main()
{
	Nodo *pila=NULL;
	int op;
	int id;
	string desc;
	cout<<"===REGISTRO DE VENTAS==="<<endl;
	cout<<"\n1. Registrar"<<endl;
	cout<<"2. Salir"<<endl;

	do{
		cout<<"Ingrese opcion: ";
		cin>>op;

		if (op ==1)
		{
			cout<<"Ingrese Id de venta: ";
			cin>>id;
			cout<<"Ingrese Descripcion: ";
			cin>>desc;

			agregarPila(pila, id, desc);
		}
	}while(op!=2);

	cout<<"Adios!!"<<endl;

	return 0;
}

void agregarPila(Nodo *&pila, int n, string desc)
{
	Nodo *nuevo_nodo = new Nodo(); //Primer paso
	nuevo_nodo -> id = n;
	nuevo_nodo -> descripcion = desc;
	nuevo_nodo -> siguiente = pila;
	pila = nuevo_nodo;

	cout<<"\n Venta id: " <<n<<" Descripcion: "<<desc<<". Registrada!" <<endl;
}

