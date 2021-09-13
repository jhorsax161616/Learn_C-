#include <iostream>
#include <math.h>
using namespace std;
int main(){
	
	float a,b,suma,resta,multi,divi,raiz,cuboa;
	
	cout<<"Ingrese número 1: "<<endl;
	cin>>a;
	cout<<"Ingrese número 2: "<<endl;
	cin>>b;
	
	suma = a+b;
	resta = a-b;
	multi = a*b;
	divi = a/b;
	raiz = sqrt(suma);
	cuboa= pow (a,3);
	
	cout<<"La suma es: "<<suma<<endl;
	cout<<"La resta es: "<<resta<<endl;
	cout<<"La multiplicación es: "<<multi<<endl;
	cout<<"La división es: "<<divi<<endl;
	cout<<"La raíz cuadrada de la suma de ambos es: "<<raiz<<endl;	
	cout<<"El cubo del primero: "<<cuboa<<endl;
		
	return 0;
}

