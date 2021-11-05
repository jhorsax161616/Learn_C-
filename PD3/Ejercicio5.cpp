/*Escriba una rutina que reciba una Cola C de números flotantes y devuelva
una nueva Cola, pero con los elementos invertidos, es decir el último de la ColaC, pasará a ser el primero de la nueva Cola. Es de destacar que la Cola C no debe
sufrir ningún tipo de cambio o alteración.*/
//FALTA CORREGIR!!!!!!!!!!!!!!!!!!!!
#include <iostream>
#include <queue>
#include <stack>
using namespace std;

//Cola original
struct C{
    float num;
    C *sig;
};

//Pila auxiliar para invertir
stack <float> pila;
//Cola Invertida
queue <float> colaInvertida;

void insertarC(C *&, C *&, float);

int can= 0;

int main()
{
    C *ini = NULL;
    C *fin = NULL;

    float dato;
    int op;

    do{
        cout<<"===INVIRTIENDO COLA==="<<endl;
        cout<<"\n1. Insertar Datos"<<endl;
        cout<<"2. Invertir Cola"<<endl;
        cout<<"3. Mostrar datos de las Colas"<<endl;
        cout<<"4. Salir";
        
        cout<<"\nIngrese una opcion: ";
        cin>>op;

        switch (op)
        {
            case 1:
            {
                int guia1;
                cout<<"\nIngrese numero de datos a ingresar: ";
                cin>>guia1;

                for (int i= 0; i < guia1; i++)
                {
                    can++;
                    cout<<"\nIngrese dato(float) "<<i+1<<": ";
                    cin>>dato;
                    insertarC(ini, fin, dato);
                }

            }break;
            case 2:
            {
                while(ini != NULL)
                {
                    pila.push(dato);
                }

                while(pila.size()>0)
                {
                    colaInvertida.push(pila.top());
                    pila.pop();
                }

                cout<<"\n_Todo sailio bien: Se invirtio en una nueva cola"<<endl;
            }break;
            case 3:
            {
                cout<<"\nPila Original: ";
                while(ini != NULL)
                {
                    cout<<dato<<" ";
                }

                cout<<"\nPila Invertida: ";
                while(colaInvertida.size() >0)
                {
                    cout<<colaInvertida.front()<<" ";
                    colaInvertida.pop();
                }
            }break;
            case 4:
            {
                cout<<"\nAgradecemos su visita, hasta otra opurtunidad...."<<endl;
	            cout<<"   _____       .___.__"<<endl;
	            cout<<"  /  _  \\    __| _/|__| ____  ______"<<endl;
	            cout<<" /  /_\\  \\  / __ | |  |/  _ \\/  ___/"<<endl;
	            cout<<"/    |    \\/ /_/ | |  (  <_> )___ \\ "<<endl;
	            cout<<"\\____|__  /\\____ | |__|\\____/____  >"<<endl;
	            cout<<"        \\/      \\/               \\/"<<endl;

            }break;
            default:
            {
                cout<<"\n__ERROR DE ENTRADA---"<<endl;
            }break;
        }

    }while(op != 4);



    return 0;
}

void insertarC(C *&ini, C *&fin, float n)
{
    C *new_c = new C();
    new_c->num = n;
    new_c->sig=NULL;

    if(ini == NULL)
        ini = new_c;
    else
        fin->sig = new_c;
    
    fin = new_c;
}