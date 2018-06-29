
// Arquivo de Cabeçalho

#ifndef  "CLIENTDATA_H"
#define CLIENTDATA

#include <string>
using namespace std;

class ClientData{
	//construtor CLIENTDATA padrão
	ClientData(int i=0, string = "", string = "", double = 0.0 );

	// funções de acesso para AccountNumber
	void setAccountNumber (int);
	int getAccountNumber () const;

	//funções de acesso para LastName
	void setLastName(string);
	string setLastName () const;

	//funções de acesso para FirstName
	void setFirstName (string);
	string setFirstName () const;

	//funções de acesso para balance
	void setBalance(double);
	double getBalance () const;

	private:
		int AccountNumber;
		char LastName[15];
		char FirstName[10];
		double balance;
};

#endif;
