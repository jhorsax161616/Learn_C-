#include <iostream>
#define INF 0x3f3f3f3f
#define MAX_VERTICES 5
#define V 5
using namespace std;

char puntos[] = {'A', 'B', 'C', 'D', 'E'};

int graph[MAX_VERTICES][MAX_VERTICES] = {
        {0,4,8,INF, INF},
        {4,0,1,2, INF},
        {8,1,0,4, 2},
        {INF,2,4,0, 7},
        {INF, INF, 2, 7, 0}
};
int P[MAX_VERTICES][MAX_VERTICES]; //Matriz de predecesores, utilizada para trazar las rutas
int D[MAX_VERTICES][MAX_VERTICES]; //Matriz de distancias, guarda la distancia mas corta entre todos los pares de vertices

void getPath(int a,int b){
    if(P[a][b]==b){
        cout << puntos[b] << " -> ";
        return;
    }
    getPath(a,P[a][b]);
    cout << puntos[b] << " -> ";
}
void printSolution(){
    for(int i=0;i<V;i++){
        cout<<"Para ir del nodo "<<puntos[i]<<" a cualquier otro nodo:\n"<<endl;
        for(int j=0;j<V;j++){
            cout << "Para ir del punto: " << puntos[i] << " -> " << puntos[j] << " : ";
            if(D[i][j] == INF){
                cout << "-" << endl;
                continue;
            }
            else{
                cout << D[i][j] << endl;
                getPath(i,j);
                cout << endl;
            }
        }
        cout << endl;
    }
}
void floydWarshall(){
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            D[i][j] = graph[i][j];
            P[i][j] = i;
        }
    }
    //Programacion Dinamica
    for(int k=0;k<V;k++){
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(D[i][k] + D[k][j] < D[i][j]){
                    D[i][j] = D[i][k] + D[k][j];
                    P[i][j] = k;
                }
            }
        }
    }
    printSolution();
}
int main(){
    floydWarshall();
    //getPath(1,3);
    return 0;
}