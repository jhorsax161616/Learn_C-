#include <iostream>
using namespace std;

string producto;

char prod;
int cant, cant_a = 0, cant_b = 0, cant_c = 0, cant_d = 0;
float desc, precio, monto_bruto, monto_total, monto_descuento;
float monto_acumulado = 0;

void mostrar()
{
	cout<<"\nPrecio por "<<cant<<" "<<producto<<": "<<monto_bruto<<endl;
	cout<<"Descuento: "<<monto_descuento<<endl;
	cout<<"Monto a pagar: "<<monto_total<<endl;
}
void mostrar_final()
{
	cout<<"---CARRITO---"<<endl;
	cout<<"\n"<<cant_a<<" Mouses."<<endl;
	cout<<cant_b<<" Teclados."<<endl;
	cout<<cant_c<<" Discos Duros."<<endl;
	cout<<cant_d<<" Monitores."<<endl;
	cout<<"\nMonto a pagar: "<<monto_acumulado<<endl;
}

void descuento()
{
	if (prod == 'A'){
		cant_a += cant;
		desc = 0.08;
		producto = "Mouses";
		}
	else if (prod == 'B'){
		cant_b += cant;
		desc = 0.1;
		producto = "Teclados";
		}
	else if (prod == 'C'){
		cant_c += cant;
		desc = 0.11;
		producto = "Discos Duros";
		}
	else
		{
		cant_d += cant;
		desc = 0.15;
		producto = "Monitores";
		}
}

void procesar()
{
	cout<<"---Productos Disponibles---"<<endl;
	cout<<"\n[A] Mouse"<<endl;
	cout<<"[B] Teclado"<<endl;
	cout<<"[C] Disco Duro"<<endl;
	cout<<"[D] Monitor"<<endl;
	
	do{
		cout<<"\nIngrese producto elegido(A-B-C-D): ";
		cin>>prod;
		
		if (prod != 'A'and prod != 'B' and prod != 'C' and prod != 'D')
			cout<<"ERROR... Ingrese nuevamente (A B C D)"<<endl;
	}while(prod != 'A' and prod != 'B' and prod != 'C' and prod != 'D');
	
	do{
		cout<<"\n¿Cuantos "<<producto<<" va a llevar?: ";
		cin>>cant;
		if (cant <= 0)
			cout<<"ERROR... Vuelva a ingresar (>0).."<<endl;
	}while(cant <= 0);
	
	do{
		cout<<"\nIngrese precio del producto: ";
		cin>>precio;
		if (precio <= 0)
			cout<<"ERROR... Vuelva a ingresar (>0).."<<endl;
	}while(precio <= 0);
	
	descuento();
	
	monto_bruto = cant * precio;
	monto_descuento = monto_bruto * desc;
	monto_total = monto_bruto - monto_descuento;
	
	monto_acumulado += monto_total;
	
	mostrar();
}

void salir()
{
	cout<<"\nAgradecemos su visita, hasta otra opurtunidad...."<<endl;
	cout<<"   _____       .___.__"<<endl;
	cout<<"  /  _  \\    __| _/|__| ____  ______"<<endl;
	cout<<" /  /_\\  \\  / __ | |  |/  _ \\/  ___/"<<endl;
	cout<<"/    |    \\/ /_/ | |  (  <_> )___ \\ "<<endl;
	cout<<"\\____|__  /\\____ | |__|\\____/____  >"<<endl;
	cout<<"        \\/      \\/               \\/"<<endl;
}
int main()
{
	int opc;
	
	do
	{
	cout<<"-----Bienvenido a TEC-----"<<endl;
	cout<<"\n1. Comprar"<<endl;
	cout<<"2. Mostrar Carrito"<<endl;
	cout<<"3. Salir (Finalizar Compra)"<<endl;
		do{
			cout<<"\nIngrese opcion(1 - 3): ";
			cin>>opc;
			if (opc < 1 or opc > 3)
				cout<<"ERROR... Vuelva a ingresar..."<<endl;
		}while(opc < 1 or opc > 3);
		
		switch(opc)
		{
			case 1:{
				system("cls");
				procesar();
				break;
			}
			case 2:{
				system("cls");
				mostrar_final();
				break;
			}
			case 3:{
				mostrar_final();
				salir();
				break;
			}
		}
		system("pause");
		system("cls");
	}while(opc != 3);
	
	return 0;
}
