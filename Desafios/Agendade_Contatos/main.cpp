#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <cstdlib>
//#include "telefones.h"

using namespace std;

// estrutura que guarda os contatos
typedef struct _contato_{
    char nome[50];
    long telefone;
    char email[100];
}contato;

// função para ler os contatos
contato* recuperar(char *arq);

//função para salvar contatos
void gravar (char *arq, contato *agenda, int n);

int main (){
	int i, n;

	cout << "Entre com a quantidade de contatos para inserir: "<<endl;
	cin >> n;


	contato *agenda = new contato[n]; /// alocando espaço para n estruturas

	if (!ctt_e){
        cout << "Erro" << endl;
        exit (1);
    }
	ofstream ctt_e.open("arq.txt", ios :: app); /// criando arquivo e abrindo arquivo

	gravar("arq.txt", contato *agenda, n); /// salvando contatos

	ctt_e.close();/// fechando arquivo

	agenda = recuperar("arq.txt"); /// lendo contatos


}


//============== funções para manipular agenda de conatos ==================//

 //==> salvar contatos
  void gravar (char *arq, contato *agenda, int n){

    int i;

    ///ofstream ctt_e;// abrindo arquivo
    //ctt_e.open("list de contatos.txt", ios :: app);
   /// ctt_e.open(arq);

    // se não puder abrir o arquivo fecha o programa


    // inserindo informações no arquivo
    for (i=0; i<n; i++){
        cout << "Insira o Nome: " << endl;
        cin.getline(agenda[i].nome,15);
        ctt_e << agenda[i].nome;
        ctt_e  << " ";
        cout << "Insira o Numero: " << endl;
        ctt_e << agenda[i].telefone;
        ctt_e  << " ";
        cin.ignore();
        cout << "Informe o email: " << endl;
        ctt_e << agenda[i].email;
        ctt_e << endl;
    }

    ctt_e.close();

 }

// carregando contatos do arquivo telefone no computador

contato* recuperar(char *arq){
 int i, n;
 contato *agenda; // declarando um ponteiro

     ifstream ctt_s;


     ctt_s.open("arq.txt", ios :: app);

     if (ctt_s == NULL))
            exit (1);

     ctt_s >> agenda[i].nome;

    /**
     temp = new contato[n];

     for (i=0; i<n; i++){
         ctt_s.getline(temp[i].nome, 50);
         ctt_s >> temp[i].fone;
         ctt_s >> temp[i].email;
     }
*/

     ctt_s.close();
     //return temp;

}


