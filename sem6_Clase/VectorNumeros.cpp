#include <iostream>
using namespace std;

int main(){
	//Declarando variables
	int numeros[20][20], filas, columnas;

	//Ingreso de datos.
	cout<<"Ingrese el numero de filas: ";
	cin>>filas;
	cout<<"Ingrese el numero de columnas: ";
	cin>>columnas;

	//Almacenar matriz
	for (int i=0; i<filas; i++){
		for (int j=0; j<columnas; j++){
			cout<<"Digite un numero [" <<i<<"]["<<j<<"] :";
			cin>>numeros[i][j];
		}
	}

	for (int i=0; i<filas; i++){
                for (int j=0; j<columnas; j++){
                        cout<<numeros[i][j];
                }
		cout<<"\n";
        }

	return 0;
}
