/**5 - Dados dois arquivos, escreva uma função que abra os dois arquivos de texto e compare os seus conteúdos linha a linha.
 A função deve pesquisar cada linha do primeiro arquivo no segundo arquivo*. Cada vez que encontrar a linha inteira (exatamente igual)
  no segundo arquivo, a função imprime na tela uma mensagem avisando o número da linha semelhante.
 Atenção: uma linha num arquivo é finalizada com um \n. O tamanho da linha pode ser infinito!
*/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>

using namespace std;

int main (){
    int i, lines = 0;
    char *drake;
    char *josh;

    ifstream leituraD;
             leituraD.open("A.txt", ios :: in);

    ifstream leituraJ;
             leituraJ.open("B.txt", ios :: in);

    if (!leituraD.is_open()){
        cout << "Erro" << endl;
        exit(1);
    }

    if (!leituraJ.is_open()){
        cout << "Erro" << endl;
        exit(1);
    }

    while (!leituraJ.eof()){
        leituraD.getline(drake,'\n');
        leituraJ.getline(josh, '\n');
        lines++;
        if (drake == josh){
            cout << "Linha " << lines << " igual"<<endl;

        }
    }

}
