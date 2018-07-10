/** Um professor deseja calcular a nota das provas dos alunos da seguinte maneira:
o aluno que recebeu a melhor avaliação terá sua nota mudada para 10. O segundo melhor,
 terá uma proporção da melhor nota de 10. Até que o último, que obteve a pior avaliação,
terá nota 6.0. Escreva um programa que receba os seguintes dados: quantidade de alunos,
nome dos alunos, nota de cada um deles. Depois calcule os novas notas conforme o critério
solicitado e exiba na tela os resultados.*/
#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

typedef struct  _aluno_{
    string nome;
    float nota;
}aluno;


int main (){
    int n, i, j, res;
    float menor, maior;

    cout << "Informe a quantidade de alunos: "<< endl;
    cin >> n;

    _aluno_ *aluno = new _aluno_[n];

    for (i=0; i<n; i++){
        cout << "Informe o nome do Aluno: " <<endl;
        cin >> aluno[i].nome;

        cout << "Informe a nota: "<<endl;
        cin >> aluno[i].nota;

    }

    //====== TESTE========//
        cout << aluno[i].nome << " " << aluno[i].nota;

    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            maior = aluno[i].nota;
            if (aluno[j].nota > maior){
                maior = aluno[j].nota;
            }
        }
    }

    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            menor = aluno[i].nota;
            if (aluno[j].nota < menor){
                menor = aluno[j].nota;
            }
        }
    }

    float maior_old = maior;
    float menor_old = menor;

    maior = 10;
    menor = 6;

    for (i=0; i<n; i++){
        if (aluno[i].nota == maior_old){
            aluno[i].nota = 10;
        }
        else if (aluno[i].nota == menor_old){
            aluno[i].nota = 6;
        }
        else if(aluno[i].nota != maior_old || aluno[i].nota != menor_old ){
            res = maior_old - aluno[i].nota;
            aluno[i].nota = maior - res;
        }
    }

    for (i=0; i<n; i++){
        cout << "Aluno : " << aluno[i].nome << endl;
        cout << "Nota  : " << aluno[i].nota << endl;
    }


}



