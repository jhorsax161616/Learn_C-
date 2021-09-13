#include <iostream>
using namespace std;

struct Persona{
	char nombre[30];
	int edad;
	char sexo[1];
	int telefono;
	char direccion[30];
}
pers1 = {"Pepe", 19, 'M', 955667321, "Jr. Palmares"},
pers2 = {"Tito", 21, 'M', 911122221, "Av. Guild"},
pers3 = {"Maria", 18, 'F', 569653165, "Jr. Callao"};

int main(){
	
	cout<<"===Persona 1===\n"<<endl;
	cout<<"Nombre: "<<pers1.nombre<<endl;
	cout<<"Edad: "<<pers1.edad<<endl;
	cout<<"Sexo: "<<pers1.sexo<<endl;
	cout<<"Telefono: "<<pers1.telefono<<endl;
	cout<<"direccion"<<pers1.direccion<<endl;

	cout<<"\n===Persona 2===\n"<<endl;
        cout<<"Nombre: "<<pers2.nombre<<endl;
        cout<<"Edad: "<<pers2.edad<<endl;
        cout<<"Sexo: "<<pers2.sexo<<endl;
        cout<<"Telefono: "<<pers2.telefono<<endl;
        cout<<"direccion"<<pers2.direccion<<endl;

	cout<<"\n===Persona 3===\n"<<endl;
        cout<<"Nombre: "<<pers3.nombre<<endl;
        cout<<"Edad: "<<pers3.edad<<endl;
        cout<<"Sexo: "<<pers3.sexo<<endl;
        cout<<"Telefono: "<<pers3.telefono<<endl;
        cout<<"direccion"<<pers3.direccion<<endl;

	return 0;
}
