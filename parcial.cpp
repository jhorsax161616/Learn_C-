#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "spanish");
		
	float precio_servicio, descuento;
	float importe_bruto, importe_neto, monto_descuento;
	
	int opc_menu;
	
	int tipo_cliente, cant_pasa, servicio;
	char genero;
	
	int gen_f = 0, cant2 = 0, cant3 = 0, tipo1 = 0;
	float total_neto4 = 0, servi1_neto = 0, promedio;
	do
	{
	
		cout<<"______Bienvenido al Cajero Conti_____"<<endl;

		cout<<"[1] REGISTRAR VENTA"<<endl;
		cout<<"[2] REPORTAR VENTA"<<endl;
		cout<<"[3] SALIR"<<endl;
		//validando opciones de menú
		do
		{
			cout<<"Ingrese opción (1-3)"<<endl;
			cin>>opc_menu;  
			if(opc_menu<1 or opc_menu>3)
				cout<<"Error solo se aceptan 1-2-3"<<endl;			
		}while(opc_menu<1 or opc_menu>3);
		
		switch(opc_menu)
		{
			case 1:
				{
				do
				{
					cout<<"Ingrese tipo de cliente (1-2): "<<endl;
					cin>>tipo_cliente;
					
					if(tipo_cliente != 1 and tipo_cliente != 2)
						cout<<"Error solo se acepta 1 o 2"<<endl;
						
				}while(tipo_cliente != 1 and tipo_cliente != 2);
				
				do
				{
					cout<<"Ingrese la cantidad de pasajes"<<endl;
					cin>>cant_pasa;
					
					if(cant_pasa <= 0)
						cout<<"Error solo se aceptan mayores a 0";
				}while(cant_pasa <= 0);
				
				do
				{
					cout<<"Ingrese género del cliente (M o F):"<<endl;
					cin>>genero;
					
					if(genero != 'm'and genero != 'M' and genero != 'f' and genero != 'F')
						cout<<"Error solo se aceptan (M o F)";
				}while(genero != 'm'and genero != 'M' and genero != 'f' and genero != 'F');
				
				//Contando femeninos
				if(genero == 'f' or genero == 'F')
					gen_f++;
				
				do
				{
					cout<<"___Tipo de servicio___"<<endl;
					cout<<"\n1- Regular"<<endl;
					cout<<"2- VIP"<<endl;
					cout<<"3- Super VIP"<<endl;
					
					cout<<"\nIngrese tipo de servicio: "<<endl;
					cin>>servicio;
					
					if(servicio<1 or servicio>3)
						cout<<"Error solo se aceptan 1-2-3"<<endl;
				}while(servicio<1 or servicio>3);
				
				
				//precio por tipo de servicio
				switch(servicio)
				{
					case 1:
						{
							precio_servicio = 60;
						}break;
					case 2:
						{
							precio_servicio = 95;
						}break;
					case 3:
						{
							precio_servicio = 105;
						}break;
				}
				
				//descuento en funcion de cantidad de pasajes
				
				if (cant_pasa == 1)
					descuento = 0;
				else if(cant_pasa >= 2 and cant_pasa <= 7)
					descuento = 0.12;
				else if(cant_pasa >= 8 and cant_pasa <= 11)
					descuento = 0.17;
				else if(cant_pasa >12)
					descuento = 0.19;
				
				importe_bruto = cant_pasa * precio_servicio;
				monto_descuento = importe_bruto * descuento;
				importe_neto = importe_bruto - monto_descuento;
				
				//contando punto 2
				if (importe_neto >= 80 and importe_neto <= 500)
					cant2++;
				
				//contando punto3
				if(genero == 'M' or genero == 'm')
				{
					if (importe_neto >= 50 and importe_neto <= 200)
						cant3++;
				}
				
				//acumulando importe neto
				total_neto4 += importe_neto;
				
				//acumulando neto y contando de tipo 1
				if (tipo_cliente == 1)
				{
					tipo1++;
					servi1_neto += importe_neto;
				}
				
				cout<<"El importe bruto es: "<<importe_bruto<<endl;
				cout<<"EL monto de descuento es: "<<monto_descuento<<endl;
				cout<<"EL importe neto es: "<<importe_neto<<endl;
				
				}break;
			case 2:
				{
					//promedio de tipo1
					promedio = servi1_neto / tipo1;
					
					cout<<"Cantidad de clientes femeninos: "<<gen_f<<endl;
					cout<<"Cantidad de ventas cuyo Importe Neto sea >=80 y <=500: "<<cant2;
					cout<<" Cantidad de ventas de clientes de género masculino cuyo Importe Neto sea >=50 y <=200: "<<cant3<<endl;
					cout<<"Acumulado del Importe de Ventas: "<<total_neto4<<endl;
					cout<<"Acumulado del Importe Neto de clientes, de tipo 1: "<<servi1_neto<<endl;
					cout<<"Promedio de Importe Neto, de clientes, de tipo 1: "<<promedio<<endl;
					
				}break;
			case 3:
				{
				cout<<"\nAgradecemos su visita, hasta otra opurtunidad...."<<endl;
				cout<<"   _____       .___.__"<<endl;
				cout<<"  /  _  \\    __| _/|__| ____  ______"<<endl;
				cout<<" /  /_\\  \\  / __ | |  |/  _ \\/  ___/"<<endl;
				cout<<"/    |    \\/ /_/ | |  (  <_> )___ \\ "<<endl;
				cout<<"\\____|__  /\\____ | |__|\\____/____  >"<<endl;
				cout<<"        \\/      \\/               \\/"<<endl;
				return 0;
				}break;

		}
	system("pause");
	system("cls");
	}while(opc_menu != 3);

	return 0;
	
}
