/**
3 - Escreva um programa que permita o usuário carregar palavras e seus significados.
O usuário irá definir quantas palavras deseja carregar. Em seguida, permita ao usuário fazer buscas nesse dicionário,
onde ele deve informar parte (ou toda) da palavra que deseja saber o significado.
*/
#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>

using namespace std;

typedef struct _dicionario_{
    string word;
    string meaning;
}dicionario;

int main (){
    int i, n;
    string busca;

    cout << "Entre com a quantidade de palavras: ";
    cin >> n;

    _dicionario_  *dicionario = new _dicionario_ [n];

    for (i=0; i<n; i++){
    	cout << "Informe a palavra: ";
    	cin >> dicionario[i].word;
    	cout << "Informe o significado: ";
    	cin >> dicionario[i].meaning;
    	cout << "Sucessso!!\n\n";
    }

    cout << " Informe a palavra que deseja procurar: ";
    cin >> busca;

    for (i=0; i<n; i++){
    	if (busca == dicionario[i].word){
    		cout << dicionario[i].meaning << endl;
    	}

    }

}
