#include <iostream>
using namespace std;

float Prom_Final(float c1, float pa, float c2, float fin);
bool valida(float);

int main()
{
    //Declarando variables de notas y control
	float conso1, parcial, conso2, efinal, prom_g = 0;
    int cant_asig;

    cout<<"===Averigue su Ponderado General - PG==="<<endl;

    //Validando y obteniendo Cantidad de Asignaturas
    do{
    cout<<"\nIngrese cantidad de Asignaturas que llevo: ";
    cin>>cant_asig;

    if (cant_asig <= 0)
        cout<<"\nError!!! Ingrese denuevo"<<endl;
    }while(cant_asig <= 0);

    //Declarando la lista de notas segun número de asignaturas
    float notas[cant_asig];

    for (int i=0; i < cant_asig; i++)
    {
        cout<<"\n===Ingrese sus notas de la asignatura N°"<< i+1<<"==="<<endl;

        do{
        cout<<"\nIngrese nota Consolidado 1: ";
        cin>>conso1;
        if (!valida(conso1))
            cout<<"Error... Vuelva a ingresar!!\n"<<endl;
        }while(!valida(conso1));
        do{
        cout<<"Ingrese nota Parcial: ";
        cin>>parcial;
        if (!valida(parcial))
            cout<<"Error... Vuelva a ingresar!!\n"<<endl;
        }while(!valida(parcial));
        do{
        cout<<"Ingrese nota Consolidado 2: ";
        cin>>conso2;
        if (!valida(conso2))
            cout<<"Error... Vuelva a ingresar!!\n"<<endl;
        }while(!valida(conso2));
        do{
        cout<<"Ingrese nota Examen Final: ";
	    cin>>efinal;
        if (!valida(efinal))
            cout<<"Error... Vuelva a ingresar!!\n"<<endl;
        }while(!valida(efinal));

        //Guardando promedio final de las asignaturas
	    notas[i] = Prom_Final(conso1, parcial, conso2, efinal);
        //Acumulando la suma de promedios
        prom_g += notas[i];
    }

    //Hallando el promedio general
    prom_g = prom_g /cant_asig;
    cout<<"\n==RESULTADO=="<<endl;
    cout<<"Su promedio ponderado general (PG) es: "<<prom_g <<endl;

    cout<<"\n\n ";
    system("pause");
    return 0;
}

float Prom_Final(float c1, float pa, float c2, float fin)
{
	float prom_final;

	prom_final = c1*.2 + pa*.25 + c2 *.2 + fin *.35;

	return prom_final;
}

bool valida(float nota)
{
    if (nota < 0 || nota > 20)
        return false;
    return true;
}