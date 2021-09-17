#include <iostream>
#include<string.h>
using namespace std;

int main(){
	char cadena[50];
	cout<<"Ingrese una Cadena: ";
	cin.getline(cadena, 50, '\n');
	
	cout<<"\nLongitud de su cadena: "<<strlen(cadena)<<endl;

	if (strlen(cadena) > 10)
		cout<<cadena<<endl;
	else
		cout<<"Tu cadena es muy pequeña :("<<endl;

	return 0;
}
