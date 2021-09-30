/*Hacer una matriz de tipo entera de 2 * 2, llenarla de números
y luego copiar todo su contenido hacia otra matriz.*/

#include <iostream>
using namespace std;

int main(){
	
	//definiendo matriz
	int matriz[2][2] = {4, 5,
			    6, 8};
	
	int copy[2][2];

	//Copiando Matriz y mostrando
	cout<<"===MOSTRANDO COPIA DE MATRIZ===\n"<<endl;
	for (int i=0; i < 2; i++){
		for (int j=0; j < 2; j++)
		{
			copy[i][j] = matriz[i][j];
			cout<<"\t"<<copy[i][j]<<"  ";
		}
		cout<<"\n";
	}

	return 0;
}

