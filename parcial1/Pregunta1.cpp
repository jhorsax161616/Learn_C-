#include <iostream>
using namespace std;
#include <string>

int id = 1;
struct ventas
{
	int id_venta;
    int tipo_cliente;
	string helado;
	string sexo;
	int cantidad;
	float importe;
	struct ventas *sgte;
	
};

typedef ventas *ptrPila;

string nombre_helado(int num);
void insertar(ptrPila &p,int id_venta, int tipo_cliente,int helado, int sexo, int cantidad, float importe);
void Reporte(ptrPila p);
float dar_precio(int tipo);
string dar_genero(int gen);
void salir();


int main()
{
    ptrPila p = NULL;
	int opc;
	
	do
	{
	cout<<"======HELADERÍA MARIO======"<<endl;
	cout<<"\n1. Registro de Ventas"<<endl;
	cout<<"2. Reporte de Ventas"<<endl;
	cout<<"3. Salir"<<endl;
		do{
			cout<<"\nIngrese opcion(1 - 3): ";
			cin>>opc;
			if (opc < 1 or opc > 3)
				cout<<"ERROR... Vuelva a ingresar..."<<endl;
		}while(opc < 1 or opc > 3);
		
		switch(opc)
		{
			case 1:{
                    int id_venta = id;
                    int tipo_cliente;
                    int helado;
                    int sexo;
                    int cantidad;
                    float importe;

                    int cant_venta;

                    cout<<"\n---Registrando Ventas---"<<endl;

                    do{
                        cout<<"\nIngrese cantidad de ventas: ";
                        cin>>cant_venta;

                        if (cant_venta <= 0)
                            cout<<"\nError, vuelve a ingresar..!"<<endl;
                    }while (cant_venta <= 0);

                    for (int i = 0; i < cant_venta; i++)
                    {
                        cout<<"\nVENTA "<<i+1<<":"<<endl;

                        do{
                            cout<<"Tipo de cliente(cliente 1 - cliente 2): ";
                            cin>>tipo_cliente;

                            if (tipo_cliente < 1 or tipo_cliente > 2)
                                cout<<"Solo se acepta tipo 1 y 2.. Vuelve a ingresar!!"<<endl;
                        }while(tipo_cliente < 1 or tipo_cliente > 2);

                        do{
                            cout<<"Sexo del cliente(Maculino 1 - Femenino 0): ";
                            cin>>sexo;

                            if (sexo < 0 or sexo > 1)
                                cout<<"Solo se acepta 1 y 2.. Vuelve a ingresar!!"<<endl;
                        }while(sexo < 0 or sexo > 1);

                        do{
                            cout<<"Tipo de helado(Pibe 1 - Sandwich 2 - Vasito 3 - Copa 4): ";
                            cin>>helado;

                            if (helado < 1 or helado > 4)
                                cout<<"Solo se acepta 1, 2, 3 y 4.. Vuelve a ingresar!!"<<endl;
                        }while(helado < 1 or helado > 4);

                        do{
                            cout<<"Cantidad: ";
                            cin>>cantidad;

                            if (cantidad <= 0)
                                cout<<"\nError, vuelve a ingresar > 0..!"<<endl;
                        }while (cantidad <= 0);
                        importe = cantidad * dar_precio(helado);
                        cout<<"Importe a pagar: "<<importe<<endl;

                        insertar(p, id_venta, tipo_cliente, helado, sexo, cantidad, importe);
                        id++;
                    }
				break;
			}
			case 2:{
                if (p != NULL)
                    Reporte(p);
                else
                    cout<<"\nEl reporte esta vacío!"<<endl;
				break;
			}
			case 3:{
				salir();
				break;
			}
		}
	}while(opc != 3);
}

float dar_precio(int tipo)
{
    if (tipo == 1)
        return 0.50;
    else if (tipo == 2)
        return 1.50;
    else if (tipo == 3)
        return 2.00;
    else
        return 3.00;
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

void insertar(ptrPila &p,int id_venta, int tipo_cliente,int helado, int sexo, int cantidad, float importe)
{

    ptrPila aux;
    aux = new(struct ventas);
    
    string name_helado = nombre_helado(helado);
    string genero = dar_genero(sexo);

    aux->id_venta = id_venta;
    aux->tipo_cliente = tipo_cliente;
    aux->cantidad = cantidad;
    aux->sexo = genero;
    aux->importe = importe;
    aux->helado = name_helado;

    p = aux;
}

void Reporte(ptrPila p)
{
	ptrPila aux;
	aux = p;

    cout<<"\n====REPORTE DE VENTAS DEL DÍA===="<<endl;
    cout<<"\nId_Venta\tTipo_Cliente\tSexo\tHelado\tCantidad\tImporte"<<endl;
    while (aux != NULL)
    {
        cout<<"\n"<<aux->id_venta<<"\t"<<aux->tipo_cliente<<"\t"<<aux->sexo<<"\t"<<aux->helado<<"\t"<<aux->cantidad<<"\t"<<aux->importe<<endl;
        aux = aux->sgte;
    }
    

}

string dar_genero(int gen)
{
    if (gen == 1)
        return "Masculino";
    else 
        return "Femenino";
}

string nombre_helado(int num)
{
    if (num == 1)
        return "Pibe";
    else if (num == 2)
        return "Sandwich";
    else if (num == 3)
        return "Vasito";
    else
        return "Compa";
}