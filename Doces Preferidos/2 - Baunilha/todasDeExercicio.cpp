#include <iostream>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <fstream>

using namespace std;

typedef struct _exercicios_{

	char nivel[10];
	char categoria[21];	
	char titulo[30];
	char descricao[1000];

}exercicio;


void gravarExercicios(){

	int n;
	int i;

	cout << "Entre com a quantidade de exercicios para cadastro: " <<endl;
	cin >> n;

	ofstream ArqExe_S;

	 ArqExe_S.open("filesExercicios.dat", ios :: app);

	_exercicios_ *exercicio = new _exercicios_[n];

	///Testa para caso o arquivo não abra ele sai do programa;
	if (!ArqExe_S){
            cout << "ERRO" << endl;
            exit(1);
        }


    cout << "Entre com o nivel de dificuldade, a categoria, titulo e descricao do exercicio:  " <<endl << "Enter end-of-file to end input. ? <ctrl-z> \n";
    for (i=0; i<n; i++){
    		cin >> exercicio[i].nivel >> exercicio[i].categoria >> exercicio[i].titulo >> exercicio[i].descricao;
            ArqExe_S <<  exercicio[i].nivel << " " << exercicio[i].categoria << " " << exercicio[i].titulo << " " << exercicio[i].descricao <<  endl;
            cout << "?";
        }


        ArqExe_S.close();
    }

    exercicio* Recuperar (char *filesExercicios.dat){ // Não entendi essa parte do ponteiro !!
    	int n, i;

    	ifstream ArqExe_E("filesExercicios.dat", ios :: in);

    	///fecha o programa se ifstream não pôde abrir o arquivo
        if (!ArqExe_E){
            cout << "ERRO"<<endl;
            exit(1);
        }/// fim do if

        while (exercicio[i].nivel >> exercicio[i].categoria >> exercicio[i].titulo >> exercicio[i].descricao)
            outputline(account, name, balance); /// função linha de saida


        // processa solicitação do usuário [que ainda não sei como fazer!!]
        /*
        while (Request != end){  // Request = função de pedido 
            switch(Request){
            case 
            }
		*/

		// lê o nivel, categoria, titulo e descrição do exercicio;
            ATV_E >> exercicio[i].nivel >> exercicio[i].categoria >> exercicio[i].titulo >> exercicio[i].descricao;


        ArqExe_E.clear(); //redefine eof para próxima entrada
        ArqExe_E.seekg(0);//reposiciona no começo de arquivo

        escolha = pegarEscolha();  ///obtém solicitação adicional do usuário

        cout << "End of Run." << endl;
    	return 0;/// destrutor ifstream fecha o arquivo

}/// fim da função ler arquivo;

//Função para obter solicitação de exercicio
/// obtém a solicitação do usuário
//getRequest = pegarEscolha/////// Request = escolha
int pegarEscolha(){
    int escolha;/// solicitação do usuário


    /// exibe opções de solicitação
    cout << "\nEscolha a Categoria: " << endl;
    cout << "1  - Sintaxe de C++: " << endl;
    cout << "2  - Ifs e Estrutura de Repetição  " << endl;
    cout << "3  - Vetores e Matrizes: " << endl;
    cout <<	"4  - Alocação Dinâmica: "<< endl; 
    cout <<	"5  - String: "<< endl;
    cout <<	"6  - Struct: "<< endl;
    cout <<	"7  - Funções: "<< endl;
    cout <<	"8  - Arquivos: "<< endl;
    cout <<	"10 -  Listas e Ponteiros: "<< endl;
    cout << "11 - end of run" << fixed << showpoint;

    do{/// entrada da solicitação do usuário
        cout << "\n?";
        cin >> escolha;
    } while (Request < Zero_Balance && escolha > end);

    cout << "\nEscolha o Nivel de Dificuldade: " << endl;
    cout << "12  - Facil: "<< endl;
    cout <<	"13  - Medio: "<< endl;
    cout <<	"14 -  Dificil: "<< endl;
    cout << "15 - end of run" << fixed << showpoint;



    return Request;
} /// fim da função getRequest

/// determina se exibe um dado registro
// ShoulDisplay = Devereria Mostrar
bool ShouldDisplay(int type, double balance){

    /// determina se exibe saldos zero
     if (type == Zero_Balance && balance == 0)
        return true;
    /// determina se exibe saldos credoreS
     if (type == Credit_Balance && balance < 0)
        return true;
    /// determina se exibe saldos devedores
     if (type == Debit_Balance && balance > 0)
        return true;

    return false;
}/// fim da função shouldDisplay

// exibe um registro do arquivo
//outputline = fim de linha
void outputline (int account, const string name, double balance){
    cout << left << setw(10) << account << setw(13) << name << setw(7) << setprecision(2) << right << balance <<endl;

}// fim da função outputLine



    

    
    



	
