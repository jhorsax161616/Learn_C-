#include <iostream>
using namespace std;

string codigo;
float can_lit, pre_lit, mont_pago;
int cant_fact = 0, fact_may = 0;
float pago_total = 0, lit_total = 0;

void ing_lit()
{
	do{
		cout<<"\nIngresa la cantidad en litros: "<<endl;
		cin>>can_lit;
		if (can_lit <= 0)
			cout<<"ERROR.. Ingrese cantidad correcta..."<<endl;
	}while(can_lit <= 0);
}

void ing_prec()
{
	do{
		cout<<"\nIngresa el precio por litro: "<<endl;
		cin>>pre_lit;
		if (pre_lit <= 0)
			cout<<"ERROR.. Ingrese cantidad correcta..."<<endl;
	}while(pre_lit <= 0);
}

void mostrar_datos()
{
	cout<<"Cantidad de facturas ingresadas: "<<cant_fact<<endl;
	cout<<"Cantidad de facturas que superan los 600: "<<fact_may<<endl;
	cout<<"Total de litros vendidos: "<<lit_total<<endl;
	
}

void contadores()
{
	cant_fact++;
	
	if (mont_pago >600)
		fact_may++;
	
	
}

int main()
{
	char rpta;

	
	do{
		cout<<"___VENTA DE CLORO___"<<endl;
		cout<<"\nIngresa el codigo del articulo: "<<endl;
		cin>>codigo;
		
		ing_lit();
		ing_prec();
		
		mont_pago = can_lit * pre_lit;
		contadores();
		
		pago_total += mont_pago;
		lit_total += can_lit;
		
		cout<<"\nArticulo: "<<codigo<<endl;
		cout<<"Monto de pago: "<<mont_pago<<endl;
		
		do{
			cout<<"\nDesea ingresar otro producto? (Ss - Nn): ";
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
