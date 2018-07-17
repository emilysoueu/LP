#ifndef FUNCIONS_H
    #define FUNCIONS_H

#include <cstring>
#include <string>

using namespace std;

/// estrutura para cada exercicio
typedef struct _exercicio_{
	string nivel; // nivel do exercicio (facil, medio, dificil)
	string categoria; // categoria (vetores, struct, laços ...)
	string title; // titulo do exercicio
	string descricao; // exercicio propriamente dito

}exercicio;

/// estrutura para guardar dados dos usuários
typedef struct _Usuario_{
	char nome[10];
	char senha[6];

}user;

//int menu(int); /// menu geral - menu 1

void cadastrarUser();
//caso 1

void cadastrarExercicio();
//caso 3

void proximoExercicio();
//caso 2


#endif






