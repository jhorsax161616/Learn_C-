/*Desarrollar un programa que determine si una matriz
es simétrica o no. Una matriz es simétrica si es cuadrada
y si es igual a su matriz transpuesta.*/

#include <iostream>
using namespace std;

int main(){

	int fi_col;

	cout<<"===¿ES SIMÉTRICA?===\n"<<endl;
	cout<<"Ingrese tamaño de matriz cuadrada: ";
	cin>>fi_col;

	//definiendo la matriz
	int matriz[fi_col][fi_col];

	//Ingreso datos de matriz
	cout<<"\n";
	for (int i=0; i < fi_col; i++)
		for (int j=0; j < fi_col; j++)
		{
			cout<<"Ingrese dato a("<<i<<" "<<j<<"): ";
			cin>>matriz[i][j];
		}

	//Mostrando matriz
	cout<<"\n\t==MATRIZ==\n"<<endl;
	for (int i=0; i < fi_col; i++){
                for (int j=0; j < fi_col; j++)
                {
                        cout<<"\t"<<matriz[i][j]<<"   ";
                }
                cout<<"\n";
        }

	//EVALUANDO SI ES SIMETRICA
	
	bool simetria = true;

	for (int i=0; i<fi_col; i++){
		for (int j=1+i; j < fi_col - i; j++)
		{
			if (matriz[i][j] != matriz[j][i])
				simetria = false;
		}
	}

	if (simetria==true)
		cout<<"\nTU MATRIZ ES SIMÉTRICA"<<endl;
	else
		cout<<"\nUps.. TU MATRIS NO ES SIMETRICA"<<endl;


	return 0;
}
