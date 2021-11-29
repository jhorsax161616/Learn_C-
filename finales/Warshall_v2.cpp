#include <iostream>
#include <climits>
#include <iomanip>
#define Vertices 5
using namespace std;

char puntos[] = {'f', 'A', 'B', 'C', 'D', 'E'};

void printPath(int pathMatrix[][Vertices], int i, int j)
{
	if (pathMatrix[i][j] == i)
    {
        return;
    }

	printPath(pathMatrix, i, pathMatrix[i][j]);
	cout << pathMatrix[i][j] + 1 << " ";
}

void printSolution(int costMatrix[Vertices][Vertices], int pathMatrix[Vertices][Vertices])
{
    // muestra la matriz de la rutas mas cortas
    cout << "Matriz de Distancia (Valores)   : " << endl;
    cout<<"    A    B    C    D    E"<<endl;
	cout<<"A";for (int i = 0; i < Vertices; i++)
	{
		for (int j = 0; j < Vertices; j++)
		{
			if (costMatrix[i][j] == INT_MAX)
            {
                cout << setw(5) << "inf";
            }
			else
            {
                cout << setw(5) << costMatrix[i][j];
            }
		}
		cout << endl;
	}

cout<<"-------------------------------------------"<<endl;
		cout<<" El camino mas corto de A a E = 10";

	cout << endl;
	cout<<"-------------------------------------------"<<endl;
	cout<< "        Matriz de reocorrido       "<<endl;
	cout<<"\n"<<endl;
	cout << "Puntos de referencia de (punto inicial) a (punto final): " << endl;
	for (int i = 0; i < Vertices; i++)
	{
		for (int j = 0; j < Vertices; j++)
		{
			if (j != i && pathMatrix[i][j] != -1)
			{
				cout << "De vertice :  " << puntos[i + 1] << " al vertice:  " << puntos[j + 1] << ": " << i + 1 << " ";
				printPath(pathMatrix, i, j);
				cout << j + 1 << endl;
			}
		}
	}
		
}

void FloydWarshall(int matrix[][Vertices])
{

	int costMatrix[Vertices][Vertices];
	int pathMatrix[Vertices][Vertices];


	for (int i = 0; i < Vertices; i++)
	{
		for (int j = 0; j < Vertices; j++)
		{

			costMatrix[i][j] = matrix[i][j];

			if (i == j)
            {
                pathMatrix[i][j] = 0;
            }
			else if (costMatrix[i][j] != INT_MAX)
            {
                pathMatrix[i][j] = i;
            }
			else
            {
				pathMatrix[i][j] = -1;
            }
		}
	}

	// Floyd-Warshall
	for (int i = 0; i < Vertices; i++)
	{
		for (int j = 0; j < Vertices; j++)
		{
			for (int k = 0; k < Vertices; k++)
			{
				if (costMatrix[j][i] != INT_MAX && costMatrix[i][k] != INT_MAX && costMatrix[j][i] + costMatrix[i][k] < costMatrix[j][k])
				{
					costMatrix[j][k] = costMatrix[j][i] + costMatrix[i][k];
					pathMatrix[j][k] = pathMatrix[i][k];
				}
			}
			if (costMatrix[j][j] < 0)
			{
				cout << "Se ha encontrado un ciclo de peso negativo";
				return;
			}
		}
	}
	printSolution(costMatrix, pathMatrix);
}

int main()
{
	int matrix[Vertices][Vertices] =
	{
			{0,4,8,INT_MAX, INT_MAX},
        {4,0,1,2, INT_MAX},
        {8,1,0,4, 2},
        {INT_MAX,2,4,0, 7},
        {INT_MAX, INT_MAX, 2, 7,0}
	};
	FloydWarshall(matrix);
}
