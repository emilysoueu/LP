<<<<<<< HEAD
=======

// Arquivo de Cabeçalho

>>>>>>> master
#ifndef  CLIENTDATA_H
#define CLIENTDATA_H

#include <string>
using namespace std;

class ClientData{
    public:
	//construtor CLIENTDATA padr�o
	ClientData(int i=0, string = "", string = "", double = 0.0 );

	// fun��es de acesso para AccountNumber
	void setAccountNumber (int);
	int getAccountNumber () const;

<<<<<<< HEAD
  /*==========Erros de sintax========== */

  /*
  * Provavelmente tu tava cansada de tanto olhar pra esse bando de letrinha
  * miuda e colorida e n�o reparou que inv�s de 1 "Get" e 1 "Set"
  * escreveu "Set" duas vezes. Isso rolava pakas comigo no java.
  * Pretty much everyone mistake.
  */

  //fun��es de acesso para LastName
=======
  

  //funções de acesso para LastName
>>>>>>> master
	void setLastName(string);
	//string setLastName () const; //bug
	string getLastName () const; //sem bug

	//fun��es de acesso para FirstName
	void setFirstName (string);
	// string setFirstName () const; //bug
	string getFirstName () const; //sem bug

<<<<<<< HEAD
  /*========================================*/
	//fun��es de acesso para balance
=======
 
	//funções de acesso para balance
>>>>>>> master
	void setBalance(double);
	double getBalance () const;

	private:
		int AccountNumber;
		char LastName[15];
		char FirstName[10];
		double balance;
<<<<<<< HEAD


    void outputLine( ostream&, const ClientData & ); // prot�tipo
};

#endif


=======
	
	// função de acesso para pesquisa de conta
	void outputLine( ostream&, const ClientData & ); // protótipo
};

#endif
>>>>>>> master
