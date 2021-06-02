#include <iostream>
using namespace std;

int num_ven = 0;
float total= 0;
float precio, dscto, MBruto, MDcto, Mtotal;

void Salir()
{
	cout<<"\nAgradecemos su visita, hasta otra opurtunidad...."<<endl;
	cout<<"   _____       .___.__"<<endl;
	cout<<"  /  _  \\    __| _/|__| ____  ______"<<endl;
	cout<<" /  /_\\  \\  / __ | |  |/  _ \\/  ___/"<<endl;
	cout<<"/    |    \\/ /_/ | |  (  <_> )___ \\ "<<endl;
	cout<<"\\____|__  /\\____ | |__|\\____/____  >"<<endl;
	cout<<"        \\/      \\/               \\/"<<endl;
}
void Mostrar()
{
	cout<<"\nEl monto bruto es: "<<MBruto<<endl;
	cout<<"\nEl monto descuento es: "<<MDcto<<endl;
	cout<<"\nEl monto total es: "<<Mtotal<<endl;
}
void MostrarFinal()
{
	cout<<"El numero de ventas es: "<<num_ven<<endl;
	cout<<"Monto acumulado de ventas: "<<total<<endl;;
}
void Venta()
{
	int cant;
	
	cout<<"\n----- REALIZAR VENTA -----"<<endl;
	do{
		cout<<"\nIngrese Cantidad: "<<endl;
		cin>>cant;
		if(cant<=0)
			cout<<"\nERROR... Se acepta >0"<<endl;
	}while(cant <=0);
	
	do{
		cout<<"\nIngrese precio: "<<endl;
		cin>>precio;
		if(precio <=0)
			cout<<"\nERROR.. Se acepta >0"<<endl;			
	}while(precio <= 0);
	if(cant > 100)
		dscto = 0.4;
	else
		if(cant > 25 and cant <= 100)
			dscto = 0.2;
		else
			if(cant > 10 and cant <= 25)
				dscto = 0.1;
			else
				if (cant <= 10)
					dscto = 0;
	
	MBruto = cant * precio;
	MDcto = dscto * MBruto;
	Mtotal = MBruto - MDcto;
	
	Mostrar();
	
	num_ven++;
	total += Mtotal;
	
}

int Menu()
{
	int op;
	
	do{
		cout<<"----------MENU--------"<<endl;
		cout<<"\n1. Procesar"<<endl;
		cout<<"2. Salir"<<endl;
		
		cout<<"\nIngrese opcion (1 o 2): ";
		cin>>op;
		
		if (op < 1 || op >2)
			cout<<"ERROR. Vuelva a Ingresar. "<<endl;
		
	}while(op < 1 || op >2);
	
	switch(op)
	{
		case 1:{
			cout<<"Pocesando...."<<endl;
			Venta();
			break;
		}
		case 2:{
			Salir();
			break;
		}
	}
	
	return op;
}

int main()
{
	int rpta;
	do
	{
	rpta = Menu();
	
	system("pause");
	system("cls");
		
	}while(rpta!=2);
	MostrarFinal();
	
	return 0;
}
