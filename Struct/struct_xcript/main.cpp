/**
1. Escreva um trecho de código para fazer a criação dos novos tipos de dados conforme
solicitado abaixo:
• Horário: composto de hora, minutos e segundos.
• Data: composto de dia, mês e ano.
• Compromisso: composto de uma data, horário e texto que descreve o compromisso.*/
/*
#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

struct horario{
    int hora;
    int minutos;
    int segundos;
};

struct data{
    int dia;
    int mes;
    int ano;
};

struct compromisso{
    int data;
    int horario;
    char descricao[5];
};


int main (){

    horario hoje;

    hoje.hora = 14;
    hoje.minutos = 37;
    hoje.segundos = 12;

    data dragao;

    dragao.dia = 9;
    dragao.mes = 4;
    dragao.ano = 1999;

    compromisso casamento;

    casamento.data = 12;
    casamento.horario = 8;
    ///casamento.descricao = "casa"; PROBLEM HERE ****


    cout <<"HORARIO: " <<"\n"<< hoje.hora <<"H\n"<<hoje.minutos <<"M\n"<<
        hoje.segundos <<"S\n "<< "DATA: \nDia: " << dragao.dia <<"\nMes: "<<
        dragao.mes <<"\nAno: "<<dragao.ano <<"\n"<<"Compromisso: \nData: " <<
        casamento.data <<"\nHorario: "<<casamento.horario;  /// <<"\nResumo: "<< casamento.descricao;
}
*/

/**2. Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e
armazene os dados em uma estrutura.*/
/*
#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;


struct information{
    char yourname[30];
    int age;
    char house[200];
};

int main (){

     information pessoa;

    cout << "Informe seu nome: ";
    cin.getline(pessoa.yourname,30);

    cout << "Informe sua idade: ";
    cin >> pessoa.age;

    cin.ignore(); ///[ evitar problemas com o buffer]

    cout << "Informe seu endereco: ";
    cin.getline(pessoa.house,200);

    cout << "\nNome: "<< pessoa.yourname << "\nIdade: " <<pessoa.age<< "\nEndereco:"<<pessoa.house;

}
*/
/**3. Construa uma estrutura aluno com nome, número de matrícula e curso. Leia do usuário
a informação de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na tela.*/
/*
#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

struct aluno{
    char nome[50];
    int matricula;
    char curso[30];
};

int main (){
    int i;

    aluno *information = new aluno[5];

    cout << "Informe os nome dos alunos: \n";
    for (i=0; i<5; i++){
        cin.getline(information[i].nome, 50);
    }


    cout << "Informe os numeros de matricula: \n";
    for (i=0; i<5; i++){
        cin >> information[i].matricula;
    }

    cin.ignore();

    cout << "Informe os cursos dos alunos: \n";
    for (i=0; i<5; i++){
        cin.getline(information[i].curso, 30);
    }

    for (i=0; i<5; i++){
        cout << "\nNOME: "<< information[i].nome << "\nMatricula: " << information[i].matricula << "\nCurso: " << information[i].curso<<endl;
    }


}
*/
/**4. Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota
da terceira prova.
(a) Permita ao usuário entrar com os dados de 5 alunos.́ ok
(b) Encontre o aluno com maior nota da primeira prova.  ok
(c) Encontre o aluno com maior média geral. ok
(d) Encontre o aluno com menor média geral ok
(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 ok
para aprovação.
*/
/*
#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

struct information{
    int matricula;
    char nome[30];
    int notap1;
    int notap2;
    int notap3;
    float media;

};

int main (){
    int i,j;
    int maior;
    float  maior_M, menor_M;
    float medias[5];/// vetor para armazenar as medias

    information *aluno = new information[5]; /// gerando 5 estruturas


    for (i=0; i<5; i++){
        cout << "Entre com o nome, matricula, nota da P1, P2 e P3: ";
        cin.getline(aluno[i].nome, 30);
        cin >> aluno[i].matricula;
        cin >> aluno[i].notap1;
        cin >> aluno[i].notap2;
        cin >> aluno[i].notap3;
        cin.ignore();

    }

        for (i=0; i<5; i++){
        cout <<"Nome: " << aluno[i].nome << endl;
        cout <<"Matricula: "<< aluno[i].matricula << endl;
        cout <<"Nota P1 :"<< aluno[i].notap1  << endl;
        cout <<"Nota P2 :"<< aluno[i].notap2 << endl;
        cout <<"Nota P3 :"<< aluno[i].notap3 << "\n" << endl;

    }

    /// Procurando a maior nota na p1;
    for (i=0; i<5; i++){
            maior = aluno[i].notap1;
            for (j=i; j<5; j++){
                if (aluno[j].notap1 ){
                    maior = aluno[j].notap1;
                }
            }
    }

    cout << "Aluno com maior nota: " << endl;
    for (i=0; i<5; i++){
        if (maior == aluno[i].notap1){
            cout << aluno[i].nome << endl;
        }
    }

    /// calculando as medias
    for (i=0; i<5; i++){
       aluno[i].media = (aluno[i].notap1 + aluno[i].notap2 + aluno[i].notap3)/3;
    }

    /// preenchendo o vetor de medias
    cout << "   MEDIAS  " <<endl;
    for (i=0; i<5; i++){
        medias[i] = aluno[i].media;
        cout << medias[i] << " ";
    }
    cout << endl;


    /// procurando a maior e menos media geral dentro do vetor
     for (i=0; i<5; i++){
        maior_M = medias[i];
        for (int j=0; j<5; j++){
            if (medias[j] > maior_M){
                maior_M = medias[j];
            }
            if (medias[j] < maior_M){
                menor_M = medias[j];
            }
        }
    }

    cout << "Aluno com maior media: " << endl;
    for (i=0; i<5; i++){
        if (maior_M == aluno[i].media ){
            cout << aluno[i].nome <<endl;
        }
    }

    cout << "Aluno com menor media: " << endl;
    for (i=0; i<5; i++){
        if (menor_M == aluno[i].media){
            cout << aluno[i].nome <<endl;
        }
    }




    for (i=0; i<5; i++){
        if( aluno[i].media >=6)
            cout << aluno[i].nome << " Aprovado "<<endl;
        else
            cout << aluno[i].nome << " Reprovado " <<endl;

    }

    cout << "\n\n\n";
    /// Medias
    for (i=0; i<5; i++){
         cout << aluno[i].nome << " = "<< aluno[i].media << endl;
    }

}
*/
/**
5. Utilizando uma estrutura, faça um programa que permita a entrada de nome, endereço e
telefone de 5 pessoas e os imprima em ordem alfabética.*/
/*
#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

typedef struct _dados_{
    char nome[50];
    char endereco[100];
    int telefone;

}dados;

int main (){
    int n;
    int i, j;
    char aux[50];


    dados *pessoa = new dados[n];

    cout << "Informe a quantidade de contatos: ";
    cin >> n;

    for (i=0; i<n; i++){
        cout << " Nome: "<<endl;
        cin.getline(pessoa[i].nome,100);
        cout << " Endereco: "<<endl;
        cin.getline(pessoa[i].endereco,100);
        cout << " Numero de telefone: " <<endl;
        cin >> pessoa[i].telefone;
        cin.ignore();
    }

    for (i=0; i<n; i++){
        cout << " Nome: "<<pessoa[i].nome<<endl;
        cout << " Endereco: "<<pessoa[i].endereco<<endl;
        cout << " Numero de telefone: "<<pessoa[i].telefone<<endl;

    }
    cout << "\n\n\n";

   for(j=1; j<n; j++)
	{
	strcpy(aux,pessoa[j].nome);
	i = j-1;
	while(i >= 0 && strcmp(pessoa[i].nome, aux) > 0)
	{
	strcpy(pessoa[i+1].nome,pessoa[i].nome);
	i--;
	}
	strcpy(pessoa[i+1].nome,aux);
	}

    for (i=0; i<n; i++){
        cout << pessoa[i].nome << endl;
        cout << pessoa[i].endereco << endl;
        cout << pessoa[i].telefone << endl;
        cout << "\n\n\n";

    }
}
*/
/**6. Faça um programa que seja uma agenda de compromissos e:
• Crie e leia um vetor de 5 estruturas de dados com: compromisso (máximo 60
letras)
e data. A data deve ser outra estrutura de dados contendo dia, mês e ano.
• Leia dois inteiros M e A e mostre todos os compromissos do mês M do ano A.
Repita o procedimento até ler M = 0.
*/
/*
#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

typedef struct _data_{
    int dia;
    int mes;
    int ano;
}data;

typedef struct _agenda_{
    char tarefa[61];
    struct dia;
}agenda;

int main (){
    int M,A;
    int i,j;

    agenda *compromisso = new agenda[5];
    data *D = new data[5];


    for (i=0; i<5; i++){
        cout <<"Insira o compromisso:"<<endl;
        cin.getline(compromisso[i].tarefa, 61);
        cout << "Insira o dia, o mes e o ano: "<<endl;
        cin >> D[i].dia >> D[i].mes >> D[i].ano;
    }

    cout << "Informe o mes e o ano: " << endl;
    cin >> M >> A;

    while (M!= 0){
        for (i=0; i<5; i++){
            if (M == D[i].mes){
                cout << agenda[i].tarefa <<endl;
            }
        }
        if (M == '0')
            return 1;

    }
}
    */

/**7. Peça ao usuário para digitar seus dados pessoais (Nome, Endereço, Data de
Nascimento, Cidade, CEP, email), verifique se as informações de Data de Nascimento, CEP
e email fazem sentido, e mostre ao usuário as informações, se estão todas corretas, ou
mostre que alguma informação estava errada.*/
/*
#include <iostream>
#include <cstdlib>

using namespace std;

typedef struct _dadosP_{
    char nome[50];
    char endereco[100];
    int dia;
    int mes;
    int ano;
    char cidade[26];
    long cep;
    char email[30];
}dadosP;


int main (){
    int i;

    dadosP informations;

    cout << "Nome:"<<endl;
    cin.getline(informations.nome,50);
    cout << "Data de nascimento"<<endl;
    cout << "Dia: "<<endl;
    cin >> informations.dia;
    cin.ignore();
    cout << "Mes: " <<endl;
    cin >> informations.mes;
    cin.ignore();
    cout << "Ano: "<<endl;
    cin >> informations.ano;
    cin.ignore();
    cout << "Cidade: "<<endl;
    cin.getline(informations.cidade,26 );
    cout << "Cep: " <<endl;
    cin >> informations.cep;
    cout << "Email: "<<endl;
    cin >> informations.email;


    /// TESTE PARA SABER SE HÁ ALGUM NUMERO OU CARACTERE NO NOME;
    ///TESTE PRA SABER SE HÁ ALGUMA LETRA NA DATA DE NASCIMENTO;
    ///DIA
    ///MES
    ///ANO
    ///TESTE PRA SABER SE HA ALGUM CARACTERE QUE NÃO SEJA LETRA  NO NOME DA CIDADE
    ///TESTE PRA SABER SE HA ALGUMA LETRA NO CEP DA CIDADE
    /// TESTE PRA SABER SE HÁ ALGUM " " espaço no email

    ///cout << "Erro, informacao invalida";

   cout << "Todas as informacoes inseridas estao corretas" <<endl;
}
*/
/**8. Faça um programa que leia os dados de 10 alunos (Nome, matrícula, Média Final),
armazenando em um vetor. Uma vez lidos os dados, divida estes dados em 2 novos
vetores, o vetor dos aprovados e o vetor dos reprovados, considerando a média mínima
para a aprovação como sendo 7.0. Exibir na tela os dados do vetor de aprovados, seguido
dos dados do vetor de reprovados.*/

#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

typedef struct _alunos_{
    char nome[30];
    long matricula;
    float mediaFinal;

}aluno;

typedef struct _Apro
{
    char nome[30];
    long matricula;
    float mediaFinal;


}aprovado;

typedef struct _Repro
{
    char nome[30];
    long matricula;
    float mediaFinal;


}reprovado;

int main (){
    int n = 2;
    int a=0, r=0;
    int i, j;
    char aux[30];

    _alunos_ *aluno = new _alunos_[n];

    for (i=0; i<n; i++){
        cout << "Informe o nome do aluno: " << endl;
        cin.getline(aluno[i].nome, 30);
        cout << "Informe a matricula: "<<endl;
        cin >> aluno[i].matricula;
        cout << "Informe a media final: "<< endl;
        cin >> aluno[i].mediaFinal;
        cin.ignore();
    }

    for (i=0; i<n; i++){
        if (aluno[i].mediaFinal < 7)
            r++;
        else
            a++;
    }

    _Repro *reprovado = new _Repro[r];
    _Apro *aprovado = new _Apro[a];

    for (i=0; i<n; i++){
        if (aluno[i].mediaFinal < 7){
            reprovado[i].nome =  aluno[i].nome); /// ERRO AQUI *******
            reprovado[i].matricula = aluno[i].matricula;
            reprovado[i].mediaFinal = aluno[i].mediaFinal;
        } else {
            aprovado[i].nome = aluno[i].nome;
            aprovado[i].matricula = aluno[i].matricula;
            aprovado[i].mediaFinal = aluno[i].mediaFinal;
        }

    }


    cout << "Alunos Aprovados: "<< endl;
    for (i=0; i<a; i++){
        cout << aprovado[i].nome <<"\n"<<aprovado[i].matricula<<"\n"<<aprovado[i].mediaFinal;
    }

    cout << "Alunos Reprovados: "<<endl;
    for (i=0; i<a; i++){
        cout << reprovado[i].nome <<"\n"<<reprovado[i].matricula<<"\n"<<reprovado[i].mediaFinal;
    }













    _alunos_ *alunos = new _alunos_[n];

}

/**
9. Escreva um programa que receba dois structs do tipo dma, cada um representando uma
data válida, e calcule o número de dias que decorreram entre as duas datas.
struct dma {
int dia;
int mes;
int ano;
};

10. Faça um programa que controla o consumo de energia dos eletrodomésticos de uma
casa e:
• Crie e leia 5 eletrodomésticos que contém nome (máximo 15 letras), potência (real,
em kW) e tempo ativo por dia (real, em horas).
• Leia um tempo t (em dias), calcule e mostre o consumo total na casa e o consumo
relativo de cada eletrodoméstico (consumo/consumo total) nesse período de tempo.
Apresente este último dado em porcentagem.*/
