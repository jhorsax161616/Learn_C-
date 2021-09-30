/*Realice un programa que calcule el producto de dos matrices cuadradas de 3x3.*/

#include <iostream>
using namespace std;

int main(){

	int A[3][3];
	int B[3][3];
	int MULTI[3][3] = {0, 0, 0,
			   0, 0, 0,
			   0, 0, 0};

	cout<<"===DATOS DE MATRIZ 'A' ===\n"<<endl;
	//Ingreso datos de matriz A
	for (int i=0; i < 3; i++)
		for (int j=0; j < 3; j++)
		{
			cout<<"Ingrese dato a("<<i<<" "<<j<<"): ";
			cin>>A[i][j];
		}

	cout<<"\n===DATOS DE MATRIZ 'B' ===\n"<<endl;
        //Ingreso datos de matriz B
        for (int i=0; i < 3; i++)
                for (int j=0; j < 3; j++)
                {
                        cout<<"Ingrese dato b("<<i<<" "<<j<<"): ";
                        cin>>B[i][j];
                }

	//Sumando y mostrando  Matriz suma
	cout<<"\n===MULTIPLICANDO MATRIZ A x B ===\n"<<endl;

        for (int i=0; i < 3; i++){
                for (int j=0; j < 3; j++)
                {
                        for (int k=0; k<3; k++)
			{
				MULTI[i][j] += A[i][k] * B[k][j];
			}
			cout<<"\t"<<MULTI[i][j]<<"   ";
                }
		cout<<"\n";
	}

	return 0;
}
