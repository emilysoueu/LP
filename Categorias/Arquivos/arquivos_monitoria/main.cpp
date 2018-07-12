/**1. Escreva um programa que:
(a) Crie/abra um arquivo texto de nome “arq.txt”.
(b) Permita que o usuário grave diversos caracteres nesse arquivo, até que o usuário entre
com o caractere ‘0’.
(c) Feche o arquivo.

Agora, abra e leia o arquivo, caractere por caractere, e escreva na tela todos os caracte-
res armazenados.*/
/*
#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main (){
    char caractere;
    ofstream saida;

    saida.open ("arq.txt", ios :: app);

    while (caractere != '0'){
        cout << "Prenncha o seu arquivo:";
        cin >> caractere;
        saida << caractere;
    } if (caractere == '0'){
        saida.close ();
    }

    ifstream entrada;

    entrada.open("arq.txt", ofstream :: app);

    char linha[1000];

    if (entrada.is_open()){
        while (entrada.getline(linha, 1000)){
            cout << linha << "\n";
        }
        entrada.close();
    }else{
        cout << "Impossivel abrir arquivo";
        }


}
*/
/**2. Faça um programa que receba do usuário um arquivo texto e mostre na tela quantas
linhas esse arquivo possui.*/
/*
#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

int main (){
    int Qlinhas = 0;
    char texto [1000];
    char texto_[1000];
    char *busca;
    int continua = 0;

    ofstream saida;

    saida.open("paragrafo.txt", ios :: app);

     while (continua == 0){

        cout << "Insira seu texto: (para finalizar insira [sair])";
        cin.getline (texto, 1000);
        Qlinhas ++;
        saida << "\n" <<endl;

        busca = strstr(texto, "sair");

        if (busca != NULL)
            continua = 1;


     }

     saida.close();

     cout << "O seu texto possui " << Qlinhas - 1 << " linhas"<<endl;
    /*
     ifstream entrada;

     entrada.open ("paragrafo.txt", ofstream :: app);

     if (entrada.is_open()){
        while(entrada.getline(texto, 1000)){
            cout << texto << "\n";
        }
        entrada.close();
     }else{
         cout << "ERRO";

     }
    */
/**3. Faça um programa que receba do usuário um arquivo texto criado por você. Crie outro
arquivo texto contendo o texto do arquivo de entrada, mas com as vogais substituídas por ‘*’
*/
/*
#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

int main(){
    char User[1000];
    char  adm[1000];

    ofstream saida;

    saida.open("Vogais.txt");
    cout << "Insira um texto: ";
    cin.getline(User, 1000);

    for (int i=0; i<strlen(User); i++){
        saida << User[i];
    }

    saida.close();

    ifstream entrada;

    entrada.open("Vogais.txt");

    if (entrada.is_open()){
        while(entrada.getline(User,1000)){
            cout << User <<"\n";
        }entrada.close();
    }else{
        cout << "ERRO";
    }

    ofstream novo_txtS;

    novo_txtS.open("VogaisTrocadas.txt");

     for (int i=0; i<strlen(User); i++){
        if (User[i] == 'a'){
            User[i] = '*';
        }
    }

    for (int i=0; i<strlen(User); i++){
        novo_txtS << User[i];
    }
    novo_txtS.close();

    ifstream novo_txtE;

    novo_txtE.open("VogaisTrocadas.txt", ofstream :: app);

    if (novo_txtE.is_open()){
        while(novo_txtE.getline(User, 1000)){
            cout << User << "\n";
        }
    }
 }
 */

 /**4. Faça um programa que permita que o usuário entre com diversos nomes e telefone para
cadastro, e crie um arquivo com essas informações, uma por linha. O usuário finaliza a
entrada com ‘0’ para o telefone.
 */

 /*
 #include <iostream>
 #include <cstdlib>
 #include <cstring>
 #include <fstream>
 using namespace std;

 int main (){
    int num;
    char nome[50];
    int para = 0;

     ofstream saida;
     saida.open("contatos.txt", ios :: app);

     cout << "Pressione 0 para encerrar\n";
     while (para == 0){
         cout << "Nome: ";
         cin >> nome;
         saida << nome;
         saida << "\n";
         cout << "Numero";
         cin >> num;
         saida << num;
         saida << "\n";
            if (num == 0){
                para = 1;
            }
     }

     saida.close();

 }*/


 // PROBLEMINHA COM O ÚLTIMO VALOR
 /**5. Faça um programa que recebe um vetor de 10 números, converta cada um desses
números para binário e grave a sequência de 0s e 1s em um arquivo texto. Cada número
deve ser gravado em uma linha.*/
/*

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>

using namespace std;


int main (){
    int tam = 10;
    int *Dez;
    int i;
    char *bi;

    Dez = new int [10];

    cout << "  Insira dez valores:\n";
    for (i=0; i<tam; i++){
        cin >> Dez[i];
    }

    ofstream saida;
    saida.open ("binarios.txt", ios :: app);

    for (i=1; i<=tam; i++){
         bi = new char [80];


         ///  itoa (valor, string (ponteiro), base)
         ///  itoa (Valor a ser convertido em uma string, Array na memória onde armazenar a string terminada em null resultante,
         ///          Base numérica usada para representar o valor como uma string, entre 2 e 36  )


         itoa(Dez[i], bi, 2);

         cout << i << " numero " << bi <<endl;
         saida << i << " numero " << bi <<endl;

         delete []bi;

    }

    saida.close();


    delete []Dez;
}
*/
/**6)Crie um programa que receba como entrada o número de alunos de uma disciplina.
Aloque dinamicamente dois vetores para armazenar as informações a respeito desses
alunos. O primeiro vetor contém o nome dos alunos e o segundo contém suas notas finais.
Crie um arquivo que armazene, a cada linha, o nome do aluno e sua nota final. Use nomes
com no máximo 40 caracteres. Se o nome não contém 40 caracteres, complete com espaço
em branco.
*/
#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

int main (){
	string nome;

	cin.getline(nome, 30,'\n');

	cout << nome;


}
/*
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <fstream>

using namespace std;

struct dados{
    char nome[50];
    int nota;

};

typedef struct _reprovados_{
    char nome[50];
    int nota;

}reprovado;

typedef struct _aprovados_{
    char nome[50];
    int nota;

}aprovado;


int main (){
    int i;
    int n;
    int r = 0,a = 0;

    cout << "Informe a quantidade de alunos: ";
    cin >> n;

    dados *aluno = new dados[n];

    ofstream information;
    information.open("dadosAlunos.txt", ios :: app);

    cout << "Informe o nome do aluno(a): \n";
    cin.ignore();
    for (i=0; i<n; i++){
        cin.getline(aluno[i].nome, 50);
    }

    cout << "Informe a nota do aluno(a): \n";
        for (i=0; i<n; i++){
            cin >> aluno[i].nota;
    }

    for (i=0; i<n; i++){
            information << aluno[i].nome << " ";
            information << aluno[i].nota<< " ";
            information << "\n";
    }

    for (i=0; i<n; i++){
            if(aluno[i].nota < 7 )
                r++;
            else
                a++;
    }


    _reprovados_ *reprovado = new _reprovados_[r];
    _aprovados_ *aprovado = new _aprovados_[a];

    for (i=0; i<n; i++){
            if (aluno[i].nota < 7){
                strcpy(reprovado[i].nome,aluno[i].nome);
                reprovado[i].nota = aluno[i].nota;
            }
            if (aluno[i].nota >= 7){
                strcpy(aprovado[i].nome,aluno[i].nome);
                aprovado[i].nota = aluno[i].nota;
        }
     }

     cout << "ALUNOS APROVADOS: \n";
        for (i=0; i<a; i++){
                cout << "Nome: "<<aprovado[i].nome << " Nota:  " <<aprovado[i].nota <<endl;
        }

    cout << "ALUNOS REPROVADOS: \n";
        for (i=0; i<r; i++){
                cout <<"Nome: "<< reprovado[i].nome << " Nota:  " <<reprovado[i].nota << endl;
        }

    information.close();

    ///estou perdendo dados
}
*/


/**
7)Faça um programa para gerenciar as notas dos alunos de uma turma. O programa
deverá ter um menu contendo as seguintes opções:
(a) Definir informações da turma;
(b) Inserir aluno e notas;
(c) Exibir alunos e médias;
(d) Exibir alunos aprovados;
(e) Exibir alunos reprovados;
(f) Salvar dados em Disco;
(g) Sair do programa (fim).
Faça a rotina que gerencia o menu dentro do main, e para cada uma das opções deste
menu, crie uma função específica.
*/




/**
8. Faça um programa gerenciar uma agenda de contatos. Para cada contato armazene o
nome, o telefone e o aniversário (dia e mês). O programa deve permitir:
(a) inserir contato
(b) remover contato
(c) pesquisar um contato pelo nome
(d) listar todos os contatos
(e) listar os contatos cujo nome inicia com uma dada letra
(f) imprimir os aniversariantes do mês.
*/





















