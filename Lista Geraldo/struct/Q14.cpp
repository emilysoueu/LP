/**
14 - Escreva uma função para ordenar palavras em ordem alfabética crescente. As palavras possuem tamanho variável.
Cada entrada é constituída por um identificador ID e por uma palavra word (ou seja, vai ser uma struct).
 A saída deve apresentar cada ID de entrada juntamente com a palavra correspondente word ordenados alfabeticamente.
 Obs.: Os caracteres possíveis são [a-z] e [A-Z]
*/

#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

typedef  struct _word_{
    int id;
    char nome[30];
}word;

int main(){
    int i, j,n;
    char aux[30];

    cout << "Informe quantas palavras para cadstrar: " <<endl;
    cin >> n;

    _word_ *word = new _word_[n];

    for (i=0; i<n; i++){
        cout << "Informe o ID: " <<endl;
        cin >> word[i].id;
        cout << "Informe a palavras: " <<endl;
        cin >> word[i].nome;
    }

    for(j=1; j<n; j++){
        strcpy(aux,word[j].nome);
        i = j-1;
        while(i >= 0 && strcmp(word[i].nome, aux) > 0)
        {
        strcpy(word[i+1].nome,word[i].nome);
        i--;
        }
        strcpy(word[i+1].nome,aux);
	}

	for (i=0; i<n; i++){
        cout << word[i].nome << endl;
	}




}
