/*Define dos matrices en la que el usuario introduzca el n de finals
 y columna y la rellene por teclado. Genera la matriz transpuesta
 (inversion de filas y columnas)*/

#include <iostream>
using namespace std;
int main(){
        int filas, columnas;

        //Ingreso de datos.
        cout<<"Ingrese el numero de filas: ";
        cin>>filas;
        cout<<"Ingrese el numero de columnas: ";
        cin>>columnas;
	
	//Creando matrices
	int A[filas][columnas];
	int tra[filas][columnas];
	
        //Almacenar matriz A
	cout<<"==Ingreso de datos==\n"<<endl;
        for (int i=0; i<filas; i++){
                for (int j=0; j<columnas; j++){
                        cout<<"Digite un numero [" <<i<<"]["<<j<<"] :";
                        cin>>A[i][j];
                }
        }
	//Generando Transpuesta y Mostrando
	cout<<"\n==Mostrando transpuesta==\n"<<endl;
        for (int i=0; i<filas; i++){
                for (int j=0; j<columnas; j++){
                        tra[i][j] = A[j][i];
			cout<<tra[i][j]<<" ";
                }
                cout<<"\n";
        }

        return 0;
}
