#include <iostream>
using namespace std;

/// BIBLIOTECA PARA MANIPULAÇÃO DE ARQUIVOS
#include <fstream>


/// CRIAR UM ARQUIVO E O MANIPULAR
void CriarAquivo();

int main()
{
    ///COMANDOS E PASSOS PARA CRIAR UM ARQUIVO DE QUALQUER EXTENSÃO (quando o arquivo nao existe na pasta)
    CriarAquivo();
}

void CriarAquivo()
{
    ///Cria o arquivo na pasta do projeto
    ofstream Arquivo("novo.txt");

    /** Caso queira, por questões de organização, por dentro de uma pasta especifica,
        a linha anterior ficaria
        ofstream Arquivo("pasta/novo.txt");
    */

    /// Pergunta ao compilador se o arquivo foi criado(ou foi aberto) corretamente
    /// senao fecha o programa
    if(!Arquivo.good())
    {
        cout<<"nao abriu";
        return;
    }else
        cout<<"Arquivo criado com sucesso\n\n";

    /// Para preencher o arquivo (cada linha);
    /// Olhar para o Arquivo como um novo CIN
    char buffer[100];
    cout<<"Digite o conteudo a inserir no arquivo:\n";

    cin.getline(buffer,99);
    Arquivo<<buffer; /// o "<<" insere na linha atual do arquivo o conteudo de buffer
    Arquivo<<endl; /// pula para a proxima linha do arquivo
    Arquivo<<buffer<<endl; /// insere na segunda linha do arquivo o conteudo de buffer novamente
                           /// e gera outra linha

    /// OU PODE- SE FAZER DESSE JEITO
    Arquivo << "coisas absurdas\n";

    Arquivo.close(); /// fecha o arquivo no compilador(sem apagar o que ja foi feito)
                     /// semelhante a ideia de desalocar vetores,por questões de memoria.
}
