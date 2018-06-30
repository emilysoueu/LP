#include <iostream>
#include <cstdlib>

using namespace std;
int V_hash(int **vetor, int tamanho);


int main (){
    int tamanho;
    int *vetor;
    int i;

    cout << "Informe a quantidade de elementos: ";
    cin >> tamanho;

    vetor = new int[tamanho];

    ///Preenchendo o vetor com 0.
    for(i=0; i<tamanho; i++)
        vetor[i] = 0;

     V_hash(&vetor,tamanho);

}

int V_hash(int **vetor, int tamanho){
    int elemento, busca;
    int resto,aux = 0;
    int *teste;
    int i;
    bool aux2 = true;


    ///Alocando espaço para vetor de teste
    teste = new int[tamanho];

    ///Preenchendo o vetor de teste com 0 para indicar qe está vazio
    for(i=0; i<tamanho; i++)
        teste[i] = 0;


    for (i=0; i<tamanho; i++){
        cout << "Insira os elementos: ";
        cin >> elemento;

        resto = elemento%tamanho; // recebe o resto da divisao

        if (teste[resto] == 0){
            *vetor[resto] = elemento;
            teste[resto] = 1;
        }else{
            i++;
            aux++;
            if(aux2 == true){
                teste[i] = 1;
                *vetor[i] = elemento;
                 cout << endl << "Inserido " << endl;
            }
        }
    }

    ///Impressao do vetor
    for (i=0; i<tamanho;  i++)
        cout << *vetor[i] << " ";
}


