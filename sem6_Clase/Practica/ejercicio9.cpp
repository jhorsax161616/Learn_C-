/*Crear una matriz de 3x3 y multiplica por 5 y muestra el resultado por pantalla.*/

#include <iostream>
using namespace std;

int main(){

        //Creando la matriz
        int matris[3][3] = {2, 3, 4,
                            5, 3, 2,
			    6, 10, 3};
	
	//iterando para la multiplicacion
        for (int i=0; i<3; i++)
        {
                for (int j=0; j<3; j++)
                {
                        matris[i][j] = matris[i][j] * 5;
                        cout<<matris[i][j]<< " ";
                }
                cout<<"\n";
        }

        return 0;
}
