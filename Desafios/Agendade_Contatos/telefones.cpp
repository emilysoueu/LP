#include <iostream>
#include <fstream>
#include <cstring>
#include "telefones.h"

using namespace std;

//estrutura para contatos


// carregando contatos do arquivo telefone no computador
 void gravar (char *arq, contato *agenda, int n){
    int i = n;
    char nome[15];
    long number;
    char email[20];

    ofstream ctt_e;
    ctt_e.open(arq);

    if (!ctt_e){
        cout << "Erro" << endl;
        exit (1);
    }

    for (i=0; i<n; i++){
        cout << "Insira o Nome: " << endl;
        ctt_e.getline(agenda[i].nome,15);
        cout << "Insira o Numero: " << endl;
        ctt_e >> agenda[i].number;
        cin.ignore();
        cout << "Informe o email: " << endl;
        ctt_e >> agenda[i].email;
    }

    ctt_e.close();

 }

// carregando contatos do arquivo telefone no computador
contato* recuperar(char *arq){
 int i, n;
     ifstream ctt_s;
     /// como foi declarado com ponteiro não precisa de (".txt");

     contato *agenda; // declarando um ponteiro

     ctt_s.open(arq);

     if (!ctt.isopen()) return NULL;

     ctt >> n;
     temp = new contato[n];

     for (i=0; i<n; i++){
         ctt.getline(temp[i].nome, 50);

        ctt >> temp[i].fone;
        ctt >> temp[i].email;
     }


     ctt.close();
     return temp;

}






/*


void pesquisarContato(){
	char *p;
	int i;
	char buscaCtt[50];

	cout << "Informe o contato que deseja procurar: " << endl;
	cin >> buscaCtt;
	for (i=0; i<3*n; i+=3){
        p = strstr(contato[i].nome,buscaCtt);
        if (p!=NULL)
            cout << contato[i].nome << "\n" << contato[i].telefone << "\n" << contato[i].email;
    }
*/
