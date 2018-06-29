
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include "ClientData.h"
using namespace std;

int main(){
	int AccountNumber;
	char LastName[15];
	char FirstName[10];
	double Balance;


    ofstream outCredit("Credit.dat", ios :: binary);

    if (!outCredit){
    	cout << "Erro" << endl;
    	exit (1);
    }

    ClientData blankClient; // construtor zera ou apaga cada menbro de dados
    // gera a saida de 100 registros em branco no arquivo
    	for (int i=0; i<100; i++)
    		outCredit.write (reinterpret_cast <const char*> (&blankClient), sizeof(ClientData));

    fstream outCredit_S("Credit.dat", ios :: in | ios :: out | ios :: binary);

    // sai do progrmama se o fstream não puder abrir o arquivo
    	if (!outCredit_S){
    		cout << "Erro" << endl;
    	}

    cout << "Enter Account Number (1-100, 0 to end input)\n";

    // requer que o usuário especifique o numero da conta

    ClientData client;
    cin >> AccountNumber;

	// O usuário isere as informações que serão copiadas para o arquivo

	while (AccountNumber > 0 && AccountNumber <= 100){
		// o usuário insere Nome, sobrenome e o Saldo
		cout << "Enter LastName, FirstName, Balance: \n";
		cin >> setw(15) >> LastName;
		cin >> setw(10) >> FirstName;
		cin >> Balance;

		// configura os valores de  Account Number, Last Name e First Name

		client.setAccountNumber(AccountNumber);
		client.setLastName(LastName);
		client.setFirstName(FirstName);
		client.setBalance(Balance);

		//Busca posição no arquivo de registro especificado pelo usuário

		outCredit_S.seekp(client.getAccountNumber()-1*sizeof(ClientData));

		//Grava informações especificadas pelo usuário

		outCredit_S.write(reinterpret_cast <const char *> (&client), sizeof(ClientData));

		//Permite o usuário inserir outra conta

		cout << "Enter Account Number\n";
		cin >> AccountNumber;
	}

	return 0;

}












