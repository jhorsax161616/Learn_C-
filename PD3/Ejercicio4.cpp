#include <iostream>
using namespace std;

int main()
{
    int n;
    int mayor, menor;

    cout<<"===HALLANDO EL MAYOR Y MENOR==="<<endl;
    cout<<"\nCuantos elementos desea almacenar?: ";
    cin>>n;

    int lista[n];

    cout<<"\n___ALMACENANDO LISTA___"<<endl;
    for (int i = 0; i <n; i++)
    {
        cout<<"Ingrese entero "<<i+1<<": ";
        cin>>lista[i];

        if (i == 0)
        {
            mayor = lista[i];
            menor = lista[i];
        }
        else
            if (lista[i] > mayor)
                mayor = lista[i];
        if (lista[i] < menor)
            menor = lista[i];
    }

    cout<<"\n===REPORTE==="<<endl;
    cout<<"\nEl numero mayor es: "<<mayor<<endl;
    cout<<"El numero menor es: "<<menor<<endl;
    return 0;
}