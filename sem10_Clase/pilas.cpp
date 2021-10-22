#include <iostream>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void agregarPila(Nodo *&, int);

int main()
{
	Nodo *pila=NULL;
	int n1, n2;
	cout<<"Ingrese un dato: ";
	cin>>n1;
	agregarPila(pila, n1);

	cout<<"\nIngrese un dato: ";
	cin>>n2;
	agregarPila(pila, n2);

	return 0;
}

void agregarPila(Nodo *&pila, int n)
{
	Nodo *nuevo_nodo = new Nodo(); //Primer paso
	nuevo_nodo -> dato = n;
	nuevo_nodo -> siguiente = pila;
	pila = nuevo_nodo;

	cout<<"\n Elemento " <<n<<" agregado a la PILA correctamente." <<endl;
}
