#include <iostream>
#include <queue>
#include <stack>
using namespace std;

queue <int> codigo;

int main()
{
    string alumnos[20];
    int dni[20];
    string apellido[20];

    cout<<"===HUB DE INFORMACIÓN=="<<endl;
    
    for (int i= 0; i< 20; i++)    
    {

        cout<<"Ingrese Nombre del alumno "<<i+1<<": ";
        cin>>alumnos[i];
        cout<<"Ingrese Apellido del alumno "<<i+1<<": ";
        cin>>apellido[i];
        cout<<"Ingrese DNI del alumno "<<i+1<<": ";
        cin>>dni[i];

        //Generando codigo aleatorio
        codigo.push(1 + rand() % (11 - 1));
    }

    return 0;
}