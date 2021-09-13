#include<iostream>
using namespace std;

int main()
{
	float mdp, mrt, msd = 0;
	
	int opc;

		cout<<"______Bienvenido al Cajero Conti_____"<<endl;
		cout<<"\n\t\t+---+ ?"<<endl;
		cout<<"\t\t¦¦¦¦¦ ?"<<endl;
		cout<<"\t\t¦ (?) ?"<<endl;
		cout<<"\t\t+---+??"<<endl;
		cout<<"\n";
		cout<<"1 Depositar"<<endl;
		cout<<"2 Retirar"<<endl;
		cout<<"3 Ver Saldo"<<endl;
		cout<<"4 Salir"<<endl;
		do
		{
			cout<<"Ingrese opción (1-2)"<<endl;
			cin>>opc;  
			if(opc<1 or opc>4)
				cout<<"Error solo se aceptan 1-2-3-4"<<endl;			
		}while(opc<1 or opc>4);
		switch(opc)
		{
			case 1:
				{
				// todo el código que me solicitan	
					
				}break;
			case 2:
				{
					cout<<"Adios...."<<endl;
				}break;
			case 3:
				{
				// todo el código que me solicitan	
					
				}break;
			case 4:
				{
				// todo el código que me solicitan	
					
				}break;
		}
	system("pause");
	system("cls");
	
	return 0;
	
}
