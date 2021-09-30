/*Crea un programa que lea una matriz de 3x3 y cree su matriz
traspuesta. La matriz traspuesta es aquella en la que la
columna i era la fila i de la matriz original.*/

#include <iostream>
using namespace std;

int main(){

	int matriz[3][3];
	int transp[3][3];

	cout<<"===RELLENA UNA MATRIZ===\n"<<endl;

	//Ingreso datos de matriz y creando transpuesta
	cout<<"\n";
	for (int i=0; i < 3; i++)
		for (int j=0; j < 3; j++)
		{
			cout<<"Ingrese dato a("<<i<<" "<<j<<"): ";
			cin>>matriz[i][j];
			transp[j][i] = matriz[i][j];
		}
	//Mostrando matriz original
	cout<<"\n==MATRIZ ORIGINAL==\n"<<endl;
	for (int i=0; i < 3; i++){
                for (int j=0; j < 3; j++)
                {
                        cout<<"\t"<<matriz[i][j]<<"   ";
                }
                cout<<"\n";
        }
	
	cout<<"\n==MATRIZ TRANSPUESTA==\n"<<endl;
	//mostrando transpuesta
	for (int i=0; i < 3; i++){
                for (int j=0; j < 3; j++)
                {
                	cout<<"\t"<<transp[i][j]<<"   ";
                }
		cout<<"\n";
	}
	return 0; 
}
