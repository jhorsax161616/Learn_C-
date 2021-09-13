#include <iostream>
using namespace std;

int main()
{
	int num1, num2, &dir1, &dir2, &suma;
	
	&dir1 = &num1;
	&dir2 = &num2;

	cout<<"Ingrese un numero: ";
	cin>>num1;
	cout<<"Ingrese otro numero: ";
	cin>>num2;

	suma = dir1 + dir2;
	
	int *suma_dir;

	*suma_dir = &suma;

	cout<<"La suma es: " <<*suma_dir<<endl;
	
	return 0;
}
