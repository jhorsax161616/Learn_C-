#include <iostream>
using namespace std;

struct Disco{
	char titulo[20];
	char nombre[20];
	char autor[20];
	char fecha[15];
}
disco1,disco2;


int main(){
	
	cout<<"==Disco1==\n"<<endl;
	cout<<"Ingrese titulo: ";
	cin.getline(disco1.titulo, 5,'\n');
	cout<<"Ingrese nombre: ";
	cin.getline(disco1.nombre, 10, '\n');
	cout<<"Ingrese autor: ";
	cin.getline(disco1.autor, 10, '\n');
	cout<<"Ingrese fecha: ";
	cin.getline(disco1.fecha, 3, '\n');

	cout<<"==REPORTE DISCO 1==\n"<<endl;
	cout<<"Titulo: "<<disco1.titulo<<endl;
	cout<<"Nombre: "<<disco1.nombre<<endl;
	cout<<"Autor: "<<disco1.autor<<endl;
	cout<<"Fecha: "<<disco1.fecha<<endl;
/*
	cout<<"\n==Disco2==\n"<<endl;
        cout<<"Titulo: "<<disco2.titulo<<endl;
        cout<<"Nombre: "<<disco2.nombre<<endl;
        cout<<"Autor: "<<disco2.autor<<endl;
        cout<<"Fecha: "<<disco2.fecha<<endl;*/
	
	return 0;
}
