#include <cstring>
#include "ClientData.h"

using namespace std;

//construtor ClientData padrão

ClientData :: ClientData(int AccountNumberValue, string LastNameValue, string FirstNameValue, double BalanceValue){
	setAccountNumber(AccountNumberValue);
	setLastName(LastNameValue);
	setFirstName(FirstNameValue);
	setBalance(BalanceValue);

}// fim do construtor

// obtem o valor do numero da conta
int ClientData :: getAccountNumber () const{
	return AccountNumber;
}

//configurar o valor do numero da conta
void ClientData :: setAccountNumber(int AccountNumberValue){
	AccountNumber = AccountNumberValue;
}

// obtem o valor do LastName
string ClientData :: getLastName () const{
	return LastName;
}


//configurar o valor do LastName
void ClientData :: setLastName(string LastNameString){
	//copia no máximo 15 caracteres da string para LastName
	const char* LastNameValue = LastNameString.data();
	int length = LastNameString.size();

 

  
  if (length < 15){
    length = length;
  }else{
    length = 14;
  }

	strncpy(LastName, LastNameValue, length);
	LastName[length] = '\0';// acrescenta caractere nulo ao sobrenome
}

/

// obtem o valor do FirstName
string ClientData :: getFirstName () const{
	return FirstName;
}


//configurar o valor do FirstName
void ClientData :: setFirstName(string FirstNameString){
	//copia no máximo 10 caracteres da string para LastName
	const char*FirstNameValue = FirstNameString.data();
	int length =FirstNameString.size();

  
  if (length < 10){
    length = length;
  }else{
    length = 9;
  }

	strncpy(FirstName, FirstNameValue, length);
	FirstName[length] = '\0';// acrescenta caractere nulo ao FirstName
}

//obtem o valor do saldo
double ClientData :: getBalance () const{
  
	return balance;
}

//configura o valor do saldo

void ClientData :: setBalance(double BalanceValue){
  /
	balance = BalanceValue;
}
