#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <fstream>
#include <string>

#include "function.h" /// onde estão minhas estrututa de exercicio e usuario loguin

using namespace std;


int main(){
    int escolha; /// escolha do usuario no menu 1

        do{
            cout << "|-------------------------------------------------------|" <<endl;
            cout << "|           BEM VINDO A0 PROXIMO EXERCICIO              |" <<endl;
            cout << "|      1 => Novo por aqui? Cadastre-se.      [1]        |" <<endl;
            cout << "|      2 => Ja possui Cadastro? Faca loguin. [2]        |" <<endl;
            cout << "|      3 => Espaco do ADMINISTRADOR.         [3]        |" <<endl;
            cout << "|      0 => Para finalizar o programa.       [0]        |" <<endl;
            cout << "|-------------------------------------------------------|" <<endl;
            cout << " Sua Escolha: ";
            cin >> escolha;

            switch (escolha){
            case 1:{

                cadastrarUser();

            }
            break;
            case 2:{
                proximoExercicio();

            }
            break;
            case 3:{
                cadastrarExercicio();
            }
            break;
            default:{
                cout << "Opcao Incorreta!! Insira Outra Opcao\n\n" <<endl;
            } /// close default
            break;
        }

        }while(escolha > 0 && escolha < 4);







	}


