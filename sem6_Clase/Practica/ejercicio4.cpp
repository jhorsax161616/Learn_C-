/*Hacer una matriz preguntando al usuario el número
de filas y columnas, llenarla de números aleatorios, copiar
el contenido a otra matriz y por último mostrarla en pantalla.*/

#include <iostream>
using namespace std;

int main(){

	int fila, colum;

	cout<<"===RELLENA UNA MATRIZ===\n"<<endl;
	cout<<"Ingrese numero de filas: ";
	cin>>fila;

	cout<<"\nIngrese numero de columnas: ";
	cin>>colum;
	

	srand(time(NULL));
	//definiendo la matrices
	int matriz[fila][colum];
	int copy[fila][colum];

	//Ingreso datos de matriz
	cout<<"\n";
	for (int i=0; i < fila; i++){
		for (int j=0; j < colum; j++)
		{
			//generando enteros aleatorios con limites de 0 a 20
                        matriz[i][j] = rand()%(20-0+1)+0;
			//Copiando matriz
			copy[i][j] = matriz[i][j];
			//mostrando matriz
			cout<<"\t"<<copy[i][j]<<"   ";

		}
		cout<<"\n";
	}
	
	return 0;
}
