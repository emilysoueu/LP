/**2 - Um professor deseja calcular a nota das provas dos alunos da seguinte maneira:
o aluno que recebeu a melhor avalia��o ter� sua nota mudada para 10. O segundo melhor,
ter� uma propor��o da melhor nota de 10. At� que o �ltimo, que obteve a pior avalia��o,
 ter� nota 6.0. Escreva um programa que receba os seguintes dados: quantidade de alunos,
 nome dos alunos, nota de cada um deles. Depois calcule os novas notas conforme o crit�rio
 solicitado e exiba na tela os resultados.*/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>

using namespace std;

typedef struct _aluno_
{
	string nome;
	int nota;
}aluno;

int main(){
	int i, n;
	float maior, menor;
	float big = 10, small = 6;

	cout << "Informe a quantidade de alunos pra cadastrar: ";
	cin >> n;

	_aluno_ *aluno = new _aluno_[n];

	for (i=0; i<n; i++){
		cout << "Informe o nome do aluno: ";
		cin >> aluno[i].nome ;
		cout << "Informe a nota: ";
		cin >> aluno[i].nota;
	}


	for (i=0; i<n; i++){
		cout << "Aluno : " << aluno[i].nome << " ";
		cout << "Nota: "<< aluno[i].nota << endl;

	}


	for (i=0; i<n; i++){
        maior = aluno[i].nota;
		for (int j=0; j<n; j++)
				if (maior < aluno[j].nota){
					maior = aluno[j].nota;
				}

	}
	cout << "maior :" << maior;
	big = maior;

	for (i=0; i<n; i++){
        menor = aluno[i].nota;
		for (int j=0; j<n; j++)
				if (menor > aluno[j].nota){
					menor = aluno[j].nota;
				}

	}

	cout << " menor :" << menor << endl;






        for (i=0; i<n; i++){
            for (int j=0; j<n; j++){
                    if ( (maior != aluno[j].nota) && (aluno[i].nota == menor) ){
                        aluno[j].nota = 6;
                    }
                    if ( (maior != aluno[j].nota) && (aluno[i].nota != menor) ){
                        aluno[j].nota = 10 - (maior - aluno[j].nota);
                    }
                    if ( (menor != aluno[j].nota) && (aluno[i].nota == maior) ){
                        aluno[j].nota = 10;
                    }
         }




		for (i=0; i<n; i++){
                cout << "aluno: " << aluno[i].nome << " ";
                cout << "nota: "<< aluno[i].nota << endl;

		}


	}
}






