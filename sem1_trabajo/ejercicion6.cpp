/*Crear un programa que nos permita obtener el promedio final de un estudiante de ingeniería de la UCCI, considerando el siguiente parámetro PF=C1*22+EP*30+C2*22+EF*40 */
#include <iostream>
using namespace std;

float Prom_Final(float c1, float pa, float c2, float fin);

int main()
{
	float conso1, parcial, conso2, efinal;

	cout<<"\n===CALCULANDO PROMEDIO FINAL==="<<endl;

	cout<<"\nIngrese nota Consolidado 1: ";
	cin>>conso1;
	cout<<"Ingrese nota Parcial: ";
	cin>>parcial;
	cout<<"Ingrese nota Consolidado 2: ";
	cin>>conso2;
	cout<<"Ingrese nota Examen Final: ";
	cin>>efinal;

	cout<<"Su promedio final es: "<<Prom_Final(conso1, parcial, conso2, efinal)<<endl;
}

float Prom_Final(float c1, float pa, float c2, float fin)
{
	float prom_final;

	prom_final = c1*.22 + pa*.3 + c2 *.22 + fin *.4;

	return prom_final;
}

