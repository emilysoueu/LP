#include <iostream>
#include <cstdlib>
using namespace std;

int funcao(int ***); /// função recebe um endereço do ponteiro duplo

int main()
{
    int **matriz,i,j;
    matriz = new int*[3];
    for(i = 0; i < 3; i++){
        matriz[i] = new int[3];
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            cin>>matriz[i][j];
        }
    }
    funcao(&matriz); /// envia a localização na memoria da matriz
}

int funcao(int ***matriz)
{
    int i,j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            cout<<(*matriz)[i][j]<<" ";  /// o ponteiro da variavel matriz, propriamente dita
        }
        cout<<endl;
    }
}
