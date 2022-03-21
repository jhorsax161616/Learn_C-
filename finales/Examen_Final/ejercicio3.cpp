#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

struct nodo{
      char palabra;
      struct nodo *sgte;
};
typedef struct nodo *TPila;

TPila crearNodo(char x)
{
      TPila newNodo = new(struct nodo);
      newNodo->palabra = x;
      return newNodo;
}

void insertar(TPila &top, char x)
{
     TPila aux = crearNodo(x);
     aux->sgte = top;
     top = aux;
}

char eliminar(TPila &top)
{
     int c ;
     TPila aux;
     aux = top ;
     c = aux->palabra;
     top = aux->sgte ;
     delete(aux);
     return c;
}

void verificarPalindroma( TPila &p, string cad)
{
     TPila aux;
     bool palindroma;
     
     for(int i=0; i<cad.size(); i++)
          if(cad[i]==32)
              cad.erase(i,1);
     
     for(int i=0; i<cad.size(); i++)
          insertar(p, cad[i]);    

    cout<<"\nLa palabra al reves es: \n"<<endl;

     for(int i=0; i<cad.size(); i++)
     {
        aux = p;

        cout<<aux->palabra;

        if(cad[i]== aux->palabra)
            palindroma = true;
        else
            palindroma = false;
        eliminar(p);
     }
     
     if(palindroma)
        cout << "\n\t La frase ES PALINDROMA..." << endl;
     else
        cout << "\n\t La frase NO ES PALINDROMA..." << endl;
}

int main()
{
    TPila pila = NULL;
    string cad;
    
    cout<<"\n\t¿ES PALINDROMA?\n\n";
    
    cout << " Ingrese palabra: ";
    getline(cin, cad);
    
    verificarPalindroma( pila, cad );
    
    cout<<"\n\n ";
    system("pause");
    return 0;
}