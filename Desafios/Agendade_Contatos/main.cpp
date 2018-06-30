#include <iostream>
#include <fstream>
#include <cstring>
//#include "telefones.h"

using namespace std;

typedef struct _contato_{
    char nome[50];
    long telefone;
    char email[100];
}contato;

contato* recuperar(char *arq);
void gravar (char *arq, contato *agenda, int n);

int main (){
	int i, n;

	cout << "Entre com a quantidade de contatos para inserir: "<<endl;
	cin >> n;



	gravar(*arq, contato *agenda, n);

	agenda = recuperar(arq);


}

void gravar (char *arq, contato *agenda, int n){
    int i = n;
    char nome[15];
    long number;
    char email[20];

    ofstream ctt_e;
    ctt_e.open("arq.txt");

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

     if (!ctt_s.isopen()) return NULL;

     ctt_s >> n;
     temp = new contato[n];

     for (i=0; i<n; i++){
         ctt_s.getline(temp[i].nome, 50);
         ctt_s >> temp[i].fone;
         ctt_s >> temp[i].email;
     }


     ctt_s.close();
     return temp;

}


