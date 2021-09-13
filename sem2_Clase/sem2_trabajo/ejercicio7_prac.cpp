#include <iostream>
using namespace std;

int main(){
	
	int vector[100];
	
	for (int i=0; i <100; i++)
		vector[i] = i+1;
	
	cout<<"==MOSTRANDO NUMEROS EN DESCENDENCIA==\n"<<endl;

	for (int i=0; i < 100; i++)
		cout<<vector[99-i]<<endl;
	

	return 0;
}
