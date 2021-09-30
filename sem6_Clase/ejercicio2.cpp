/*Define una matriz de 2x3 y multiplica por 3 y muestra el resultado
por pantalla*/

#include <iostream>
using namespace std;

int main(){

	//Declarando
	int matris[2][3] = {2, 3, 4,
			    5, 3, 2};

	for (int i=0; i<2; i++)
	{	
		for (int j=0; j<3; j++)
		{
			matris[i][j] = matris[i][j] * 3;
			cout<<matris[i][j]<< " ";
		}
		cout<<"\n";
	}

	return 0;
}
