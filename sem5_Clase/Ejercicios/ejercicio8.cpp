#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char palabra1[50];
	char palabra2[50];

	cout<<"===CONCATENANDO PALABRAS===\n"<<endl;

	cout<<"Ingrese la palabra 1: ";
	cin.getline(palabra1, 50, '\n');
	cout<<"Ingrese la palabra 2: ";
	cin.getline(palabra2, 50, '\n');
	
	char conca[100];
	strcpy(conca, palabra1);
	strcat(conca, " ");
	strcat(conca, palabra2);

	cout<<"\n==RESULTADO==\n"<<endl;
	cout<<conca<<endl;

	return 0;
}
