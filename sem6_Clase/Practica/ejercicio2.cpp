/*Realiza un programa que defina una matriz de 3x3
y escriba un ciclo para que muestre la diagonal principal
de la matriz.*/

#include <iostream>
using namespace std;

int main(){
	
	//definiendo matriz de 3 x 3
	int matriz[3][3] = {3, 5, 6,
			    5, 9, 3,
			    0, 5, 8};

	cout<<"===MOSTRANDO DIAGONAL PRINCIPAL===\n"<<endl;

	for (int i=0; i < 3; i++)
	{
		cout<<matriz[i][i]<<endl;
	}
	return 0;
}

