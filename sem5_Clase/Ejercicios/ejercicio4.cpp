#include <iostream>
#include <string.h>
#include <algorithm> // --> Ahi esta reverse()

using namespace std;

/*Hacer un programa que determine si una palabra es palíndroma.*/

int main(){

	char palabra[50];

	cout<<"===¿ES PALINDROMA?===\n"<<endl;
	cout<<"Ingrese una palabra: ";
	cin.getline(palabra, 50, '\n');
	
	char palindroma[50];
	
		//¿por q' no usar strrev? -- > es que no es una función estandar
		//palindroma = strrev(palabra);
	
	//primero hacemos una compia de la palabra
	strcpy(palindroma, palabra);

	//aplicamos reverse
	reverse(palindroma, palindroma + strlen(palindroma));

	
	if (strcmp(palabra, palindroma) == 0)
		cout<<"\nTu palabra si es palindroma"<<endl;
	else
		cout<<"\nNo es palindroma: "<<palabra<<" <no es igual a> "<<palindroma<<endl;

	return 0;
}
