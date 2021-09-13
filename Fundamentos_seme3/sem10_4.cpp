#include<iostream>
using namespace std;

float peso, talla, imc;

string estado;

int total_per = 0, per_nor = 0, per_med = 0, per_morb = 0;

bool vali_peso()
{
	if (peso >= 38 and peso <= 260)
		return false;
	return true;
}

bool vali_talla()
{
	if (talla >= 0.9 and talla <= 2.20)
		return false;
	return true;
}
void estad()
{
	total_per++;
	if (imc < 18.5)
		estado = "Infra Peso";
	else if (imc < 25)
		{estado = "Peso Normal"; per_nor++;}
	else if (imc < 30)
		estado = "Sobre Peso";
	else if (imc < 35)
		estado = "Obesidad leve";
	else if (imc < 40)
		{estado = "Obesidad media"; per_med++;}
	else
		{estado = "Obesidad morbida"; per_morb++;}
}

void mostrar_datos()
{
	cout<<"Total de personas ingresadas: "<<total_per<<endl;
	cout<<"Personas con estado Peso Normal: "<<per_nor<<endl;
	cout<<"Personas con estado Obesidad Media: "<<per_med<<endl;
	cout<<"Personas con estado Obesidad Morbida: "<<per_morb<<endl;
}
int main()
{
	char rpta;

	
	do{
		cout<<"___IMC___"<<endl;
		do{
			cout<<"\nIngrese su peso en kg: "<<endl;
			cin>>peso;
			if (vali_peso())
				cout<<"ERROR.. Ingrese peso valido (38 - 260)";
				
		}while(vali_peso());
		
		do{
			cout<<"\nIngrese su talla en metros: "<<endl;
			cin>>talla;
			if (vali_talla())
				cout<<"ERROR.. Ingrese peso talla valida (0.9 - 2.2)";
				
		}while(vali_talla());
		
		imc = peso / talla;
		
		estad();
		
		cout<<"\nSu estado es: "<<estado<<endl;
		
		do{
			cout<<"\nDesea ingresar otro dato? (Ss - Nn): ";
			cin>>rpta;
			if(rpta != 'S' && rpta != 's' && rpta != 'N' && rpta != 'n')
				cout<<"\nERROR. Vuelva a ingresar S o s o N o n.\n";
		}while(rpta != 'S' && rpta != 's' && rpta != 'N' && rpta != 'n' );
	
	//system("pause");
	system("cls");		
	}while(rpta == 'S' || rpta == 's');
	
	mostrar_datos();
	return 0;
}
