/*Llenar una matriz de forma aleatoria y buscar un numero
dentro de la matriz, si el numero existe lo vamos a mostrar
tanto el numero como la ubicación del mismo, sino decimos
que no está dentro de la matriz.*/

#include <iostream>
using namespace std;
int main(){
        int filas, columnas, busca;
	bool salir = false, win = false;
        //Ingreso de datos.
        cout<<"Ingrese el numero de filas: ";
        cin>>filas;
        cout<<"Ingrese el numero de columnas: ";
        cin>>columnas;

        //Creando matrices
        int A[filas][columnas];
	
	srand(time(NULL));
        //Asignando datos aleatorios
        for (int i=0; i<filas; i++){
                for (int j=0; j<columnas; j++){
			//generando enteros aleatorios con limites de 0 a 50
                        A[i][j] = rand()%(50-0+1)+0;
                }
        }


	cout<<"\n==Se a creado la Matriz con numeros desde 1 a 50==\n"<<endl;
	cout<<"\nPara salir del programa ingresa el numero 0\n"<<endl;
	while (salir == false)
	{
		cout<<"\nIngresa numero a buscar:";
		cin>>busca;

		win = false;

		if (busca == 0)
		{
			//mostrando matriz
			cout<<"\n\t==LA MATRIZ ERA==\n"<<endl;
			for (int i=0; i < filas; i++){
                		for (int j=0; j < columnas; j++)
                		{
                        		cout<<"\t"<<A[i][j]<<"   ";
                		}
	               		 cout<<"\n";
			}
			return 0;
		}

		for (int i=0; i<filas; i++){
                	for (int j=0; j<columnas; j++){
                        	if (busca == A[i][j])
				{
					win = true;
					cout<<"\nSe ha encontrado el numero "<<busca<<" en la pocisión: ["<<i<<"]["<<j<<"]"<<endl;
				}
                	}
        	}

		if (win == false)
			cout<<"\n No se ha encontrado el numero"<<endl;
	}
}

