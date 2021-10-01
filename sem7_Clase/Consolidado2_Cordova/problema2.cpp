/*Desarrollar un programa en C++ que permita ingresar y
almacenar el código, el nombre, la nota1, la nota2 y la
nota3 de todos los estudiantes de un salón de clase. */

#include <iostream>
using namespace std;
#include <string>

struct estudiante
{
	int codigo;
	string nombre;
	float nota1;
	float nota2;
	float nota3;
	float promedio;
	struct estudiante *sgte;
	
};


typedef estudiante *ptrPila;

void insertar(ptrPila &p,string nombre, int codigo, float nota1, float nota2, float nota3, float promedio);
int eliminar(ptrPila &p);
void mostrar(ptrPila p);
void mostrar4(ptrPila p);
void mostrar5(ptrPila p);
void mostrar6(ptrPila p);
void mostrarAprobados(ptrPila p);
void mostrarDesaprobados(ptrPila p);
void mostrarMayorPro(ptrPila p);


int main(){
	ptrPila p = NULL;

	int codigo;
	string nombre;
	float nota1;
	float nota2;
	float nota3;
	float promedio;

	int x;
	int op;
	do{
		cout<<"====MENU===="<<endl;
		cout<<"\n1. Ingresa datos"<<endl;
		cout<<"2. Eliminar datos Ultimo estudiante"<<endl;
		cout<<"3. Insertar datos Estudiante Nuevo"<<endl;
		cout<<"4. Promedio de notas de todos los estudiantes de un salon"<<endl;
		cout<<"5. Numero de estudiantes aprobados"<<endl;
		cout<<"6. Numero de estudiantes desaprobados"<<endl;
		cout<<"7. Mostrar"<<endl;
		cout<<"8. Salir"<<endl;

		do{
			cout<<"\nIngrese una opció: ";
			cin>>op;

			if (op <1 || op >8)
				cout<<"Error.... Ingrese denuevo"<<endl;
		}while (op <1 || op >8);

		

		switch (op)
		{
		case 1:{
				int num;
				cout<<"\nIngresa numero de estudiantes a ingresar: ";
				cin>>num;

				for (int i; i < num; i++)
				{
					cout<<"\n==Datos del estudiante N° "<<i+1<<"==\n"<<endl;
					cout<<"\nIngrese codigo: ";
					cin>>codigo;
					cout<<"Ingrese nombre: ";
					cin>>nombre;
					cout<<"Ingrese nota 1: ";
					cin>>nota1;
					cout<<"Ingrese nota 2: ";
					cin>>nota2;
					cout<<"Ingresa nota 3:";
					cin>>nota3;

					promedio = (nota1 + nota2 + nota3)/3;

					insertar(p, nombre, codigo, nota1, nota2, nota3, promedio);
					cout<<"Se añadió al estudiante "<<nombre<<" correctamente..."<<endl;
				}

		}break;
		
		case 2:{
				x = eliminar(p);
				cout<<"\n\tSe a eliminado al estudiante con código: "<<x<<endl;
		}break;

		case 3:{
				cout<<"\n===DATOS NUEVO ESTUDIANTE===\n"<<endl;
				cout<<"\nIngrese codigo: ";
				cin>>codigo;
				cout<<"Ingrese nombre: ";
				cin>>nombre;
				cout<<"Ingrese nota 1: ";
				cin>>nota1;
				cout<<"Ingrese nota 2: ";
				cin>>nota2;
				cout<<"Ingresa nota 3:";
				cin>>nota3;

				promedio = (nota1 + nota2 + nota3)/3;

				insertar(p, nombre, codigo, nota1, nota2, nota3, promedio);
				cout<<"Se añadió al estudiante "<<nombre<<" correctamente..."<<endl;

		}break;

		case 4:{
				if(p != NULL)
					mostrar4(p);
				else
					cout<<"\n\tData Vacia...!"<<endl;
		}break;

		case 5:{
				if(p != NULL)
					mostrar5(p);
				else
					cout<<"\n\tData Vacia...!"<<endl;
		}break;

		case 6:{
				if(p != NULL)
					mostrar6(p);
				else
					cout<<"\n\tData Vacia...!"<<endl;
		}break;

		case 7:{
			if(p != NULL)
			{
				mostrar(p);
				mostrarAprobados(p);
				mostrarDesaprobados(p);
				mostrarMayorPro(p);
			}
			else
				cout<<"\n\tData Vacia...!"<<endl;
		}break;

		case 8:{
				cout<<"\nGracias por su visita...."<<endl;
		}break;

		default:
			return 0;
			break;
		}


	}while (op != 8);

	return 0;
}

void insertar(ptrPila &p,string nombre, int codigo, float nota1, float nota2, float nota3, float promedio){
	ptrPila aux;

	aux = new(struct estudiante);
	
	aux->nombre = nombre;
	aux->codigo = codigo;
	aux->nota1 = nota1;
	aux->nota2 = nota2;
	aux->nota3 = nota3;
	aux->promedio = promedio;
	aux->sgte = p;

	p = aux;
}

int eliminar(ptrPila &p)
{
	int num;
	ptrPila aux;

	aux = p;
	num = aux->codigo;

	p = aux->sgte;
	delete(aux);

	return num;
}

void mostrar(ptrPila p)
{
	ptrPila aux;
	aux = p;

	cout<<"\t==RELACION DE ESTUDIANTES CON SU PROMEDIO==\n"<<endl;
	cout<<"\nCodigo\tNombre\tNota1\tNota2\tNota3\tPromedio"<<endl;
	while (aux !=NULL)
	{
		cout<<"\n"<<aux->codigo<<"\t"<<aux->nombre<<"\t"<<aux->nota1<<"\t"<<aux->nota2<<"\t"<<aux->nota3<<"\t"<<aux->promedio<<endl;
		aux = aux->sgte;
	}
}

void mostrar4(ptrPila p)
{
	ptrPila aux;
	aux = p;

	float promedio = 0;
	int num = 0;
	while (aux !=NULL)
	{
		promedio += aux->promedio;
		num++;
		aux = aux->sgte;
	}
	promedio = promedio / num;

	cout<<"\nEl promedio general es: "<<promedio<<endl;
}

void mostrar5(ptrPila p)
{
	ptrPila aux;
	aux = p;

	int aprobados = 0;
	while (aux !=NULL)
	{
		if (aux->promedio >= 10.5)
			aprobados++;
		aux = aux->sgte;
	}

	cout<<"\nNumero de estudiantes aprobados: "<<aprobados<<endl;
}

void mostrar6(ptrPila p)
{
	ptrPila aux;
	aux = p;

	int desaprobados = 0;
	while (aux !=NULL)
	{
		if (aux->promedio < 10.5)
			desaprobados++;
		aux = aux->sgte;
	}

	cout<<"\nNumero de estudiantes desaprobados: "<<desaprobados<<endl;
}

void mostrarAprobados(ptrPila p)
{
	ptrPila aux;
	aux = p;
	float prom;
	
	cout<<"\n\t==RELACION DE ESTUDIANTES QUE APROBARON==\n"<<endl;
	cout<<"\nCodigo\tNombre\tNota1\tNota2\tNota3\tPromedio"<<endl;

	while (aux !=NULL)
	{
		prom = aux->promedio;
		if (prom >= 10.5)
			cout<<"\n"<<aux->codigo<<"\t"<<aux->nombre<<"\t"<<aux->nota1<<"\t"<<aux->nota2<<"\t"<<aux->nota3<<"\t"<<aux->promedio<<endl;
		aux = aux->sgte;
	}
}

void mostrarDesaprobados(ptrPila p)
{
	ptrPila aux;
	aux = p;

	float prom;

	cout<<"\n\t==RELACION DE ESTUDIANTES QUE DESAPROBARON==\n"<<endl;
	cout<<"\nCodigo\tNombre\tNota1\tNota2\tNota3\tPromedio"<<endl;
	while (aux !=NULL)
	{
		prom = aux->promedio;
		if (prom < 10.5)
			cout<<"\n"<<aux->codigo<<"\t"<<aux->nombre<<"\t"<<aux->nota1<<"\t"<<aux->nota2<<"\t"<<aux->nota3<<"\t"<<aux->promedio<<endl;
		aux = aux->sgte;
	}
}

void mostrarMayorPro(ptrPila p)
{
	ptrPila aux;
	aux = p;

	cout<<"\n\t==ESTUDIANTE CON MAYOR PROMEDIO==\n"<<endl;
	cout<<"\nCodigo\tNombre\tNota1\tNota2\tNota3\tPromedio"<<endl;
	float prom_may = 0;
	string nomb;
	int cod;
	float not1, not2, not3, prome;

	while (aux !=NULL)
	{
		if (aux->promedio > prom_may)
		{
			prom_may = aux->promedio;
			nomb = aux->nombre;
			cod = aux->codigo;
			not1 = aux->nota1;
			not2 = aux->nota2;
			not3 = aux->nota3;
			prome = aux->promedio;
		}
		aux = aux->sgte;
	}
	
	cout<<"\n"<<cod<<"\t"<<nomb<<"\t"<<not1<<"\t"<<not2<<"\t"<<not3<<"\t"<<prome<<endl;
}
