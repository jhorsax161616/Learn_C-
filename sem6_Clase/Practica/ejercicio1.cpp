/*Hacer un programa para rellenar una matriz pidiendo al usuario
el número de filas y columnas, Posteriormente mostrar la matriz 
en pantalla.*/

#include <iostream>
using namespace std;

int main(){
	
	int fila, colum;

	cout<<"===RELLENA UNA MATRIZ===\n"<<endl;
	cout<<"Ingrese numero de filas: ";
	cin>>fila;

	cout<<"\nIngrese numero de columnas: ";
	cin>>colum;
	
	//definiendo la matriz
	int matriz[fila][colum];
	
	//Ingreso datos de matriz
	cout<<"\n";
	for (int i=0; i < fila; i++)
		for (int j=0; j < colum; j++)
		{
			cout<<"Ingrese dato a("<<i<<" "<<j<<"): ";
			cin>>matriz[i][j];
		}

	//Mostrando matriz
	cout<<"\n==Mostrando Matriz==\n"<<endl;
	for (int i=0; i < fila; i++)
	{
                for (int j=0; j < colum; j++)
                {
                        cout<<"\t"<<matriz[i][j]<<" ";
                }
		cout<<"\n";
	}
	return 0;
}
