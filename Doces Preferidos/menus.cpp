#include <iostream>
#include <cstdlib>
#include <cstring>
#include <iomanip>

using namespace std;

int getMenuUser (){
	int opcao2;

	cout << "Escolha: " << endl;

	cout << "1 - Cadastrar Usuario " // vai para o menu 3 menu de exercicios
	cout << "2 - Loguin Usuario "
	cout << "3 - Sair do Programa " << fixed << showpoint;

	do {
		cout << "\n?";
		cin >> opcao2;
	}while (opcao2 < alguma coisa && opcao2 > end);

	return opcao2; 

}

int getMenu (){

	int opcao1;

	cout << "Escolha: " << endl;

	cout << "1 - Cadastrar Exercicios "
	cout << "2 - Menu de Usuarios " // vai para o menu de usuarios e menu de exercicios
	cout << "3 - Sair do Programa " << fixed << showpoint;

	do {
		cout << "\n?";
		cin >> opcao1;
	}while (opcao1 < alguma coisa && opcao1 > end);

	return opcao1; 

}

int getMenuExe(){

	cout << "Informe a categoria do exercicio: "<<endl;
	
	cout << "1 - Sintaxe de C++\n2 - Ifs e Estrutura de Repetição\n3 - Vetores e Matrizes\n
		4 - Alocação Dinâmica\n5 - String\n6 - Struct\n7 - Funções\n8 - Arquivos\n10 -Listas e Ponteiros"<<endl;
	
	cout << "Informe o nivel de dificuldade: "<<endl;
	cout << "11 - facil\n12 -medio\n13 -dificl"

	cout << "14 - SAIR"
	return opcao3; 


}

int menuEnd(){ //mostrar após cada exercicios

	int fim;

	cout << "1 - Proximo Exercicio " << endl;
	cout << "2 - Escolher outro Nivel de dificuldade: " << endl;
	cout << "3 - Escolher outra Categoria: " << endl;
	cout << "4 - Sair do Programa" << endl;n
}








