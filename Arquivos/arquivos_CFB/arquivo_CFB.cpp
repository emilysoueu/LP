#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main (){

    ///ofstream (saida do programa para entrar no arquivo)
    ///  ifstream  (saindo do arquivo entrando no programa )
    /// || fstream

    ofstream arquivoS; ///S = SAÍDA

    arquivoS.open("Jogos_Vorazes.txt", ios :: app); ///Criando arquivo externo (nome do arqv)

        ///, ios :: app --> move o cursor para o final da frase e não "perde o conteúdo inserid anteriormente

    arquivoS << "\nVocê vem pra arvore onde enforcaram um homem\n"; ///(inserindo conteúdo no arquivo)

    arquivoS << "Are you coming to the tree?"; ///(inserindo conteúdo no arquivo)


    arquivoS.close(); ///Fechado arquivo

/// USANDO STRING///

/**
    ifstream arquivoE; /// E = ENTRADA
    string linha;

    arquivoE.open("Jogos_Vorazes.txt"); /// Fazer leitura do arquivo

    if (arquivoE.is_open()){
        while(getline(arquivoE, linha)){
            cout << linha<<endl;
        }
    }else{
        cout << "NAO ABRIU O ARQUIVO" << endl;
    }
*/

/// USANDO CHAR

    ifstream arquivoE; /// E = ENTRADA

    arquivoE.open("Jogos_Vorazes.txt", ofstream :: app); /// Fazer leitura do arquivo

    char linha[1000];

    if (arquivoE.is_open()){
        while(arquivoE.getline(linha,1000)){
            cout << linha << "\n";
        }
        arquivoE.close();
    }else{
        cout << "NAO ABRIU O ARQUIVO" << endl;
    }




}
