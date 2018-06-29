
// Arquivo de Cabeçalho

#ifndef  CLIENTDATA_H
#define CLIENTDATA_H

#include <string>
using namespace std;

class ClientData{
    public:
	//construtor CLIENTDATA padrão
	ClientData(int i=0, string = "", string = "", double = 0.0 );

	// funções de acesso para AccountNumber
	void setAccountNumber (int);
	int getAccountNumber () const;

  

  //funções de acesso para LastName
	void setLastName(string);
	//string setLastName () const; //bug
	string getLastName () const; //sem bug

	//funções de acesso para FirstName
	void setFirstName (string);
	// string setFirstName () const; //bug
	string getFirstName () const; //sem bug

 
	//funções de acesso para balance
	void setBalance(double);
	double getBalance () const;

	private:
		int AccountNumber;
		char LastName[15];
		char FirstName[10];
		double balance;
	
	// função de acesso para pesquisa de conta
	void outputLine( ostream&, const ClientData & ); // protótipo
};

#endif
