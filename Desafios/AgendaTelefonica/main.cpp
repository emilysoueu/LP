#include <iostream>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <fstream>

using namespace std;



typedef struct _contato_{
    char nome[50];
    long telefone;
    char email[100];
}contato;

contato* carga(char *arquivo_nome);
void gravar (char *arquivo_nome, contato *agenda, int n);
void pesquisarContato();


int main(){
    int n = 3;

    contato *agenda = new contato[n]; // contado é o tipo da struct e agenda é o nome da variável;

    agenda = recuperar("agenda.txt"); // agenda recebe o ponteiro


    gravar( "agenda.txt", agenda,  n); //  NÃO SEI




}

// carregando o teclado no arquivo;
contato* gravar(char *agenda){

     int i, n;
     ofstream ctt_s;
     /// como foi declarado com ponteiro não precisa de (".txt");

     contato *temp; // declarando um ponteiro

     ctt_s.open("arq.txt");

     if (!ctt_s.isopen()) return NULL;

     ctt_s >> n;
     temp = new contato[n]; // alocação dinâmica de um vetor de estrutras do tipo contato

     for (i=0; i<n; i++){
        ctt_s.getline(temp[i].nome, 50); // gravando nome
        ctt_s >> temp[i].fone; 			// gravando telefone
        ctt_s >> temp[i].email;			// gravando email
        cout << "\n?" >> endl;
     }


     ctt_s.close();
     return temp;
}


void recuperar(char "agenda.txt", contato *agenda, int n){

	ifstream ctt_e;

	ctt_e.open("arq.txt", ios :: app);

	for (i=0; i<n; i++){
		ctt_e >> contato[i].nome >> " " >> contato[i].telefone >> " " >> contato[i].email >> endl;
	}

}

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



}





