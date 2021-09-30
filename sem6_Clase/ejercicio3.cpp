/*Define dos matriz de 2x3 llamados A y B, suma las
 ,atroces y muestra el resultado por pantalla*/

#include <iostream>
using namespace std;


int main(){

	int A[3][3] = {2, 3, 0,
		       -5, 1, -6,
			0, -9, 3};
	int B[3][3] = {-2, -3, 1,
                       5, 0, 6,
                        1,9, -3};

	int suma[3][3];

	for (int i=0; i<3; i++){
		for (int j=0; j<3;j++){
			suma[i][j] = A[i][j] + B[i][j];
			cout<<suma[i][j]<<" ";
		}
		cout<<"\n";
	}

	return 0;
}
