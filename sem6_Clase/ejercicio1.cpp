/*Definir un grupo de 5 numeros enteros y hallar la suma.*/

#include <iostream>
using namespace std;


int main(){
	
	
	//Declarando variables
	int numero[5] = {25, 47, 80, -12, 125};
	int suma;

	//Sumando
	suma = numero[0] + numero[1] + numero[2]
		+ numero[3] + numero[4];
	
	cout<<suma<<endl;
	return 0;
}
