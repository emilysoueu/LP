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
/*==================================================*/
// Aqui, a função tava retornando Inteiro, mas a declração lá no ClientData.h Tá
// Dizendo que ele retorna String.

// Versão antiga
// int ClientData :: getLastName () const{
// 	return LastName;
// }

// obtem o valor do LastName
string ClientData :: getLastName () const{
	return LastName;
}
/*==================================================*/

//configurar o valor do LastName
void ClientData :: setLastName(string LastNameString){
	//copia no máximo 15 caracteres da string para LastName
	const char* LastNameValue = LastNameString.data();
	int length = LastNameString.size();

  // 1x MDS NÃO USA OPERADOR TERNÁRIO EM NOME DE G-ZUIS Hueahueuhuea
	//length = (length < 15 ? length :: 14); //O erro é que era só ":" e não "::"

  //If é coisa de gente, vlw flw.
  if (length < 15){
    length = length;
  }else{
    length = 14;
  }

	strncpy(LastName, LastNameValue, length);
	LastName[length] = '\0';// acrescenta caractere nulo ao sobrenome
}

/*==================================================*/
// Aqui tu botou o "s" sem querer depois do "t" e invés de antes. (FirstName)
//E também a função tava retornando Inteiro, mas a declração lá no ClientData.h Tá
// Dizendo que ele retorna String.


// Versão antiga
// int ClientData :: getFirtsName () const{
// 	return FirstName;
// }

// obtem o valor do FirstName
string ClientData :: getFirstName () const{
	return FirstName;
}
/*==================================================*/

//configurar o valor do FirstName
void ClientData :: setFirstName(string FirstNameString){
	//copia no máximo 10 caracteres da string para LastName
	const char*FirstNameValue = FirstNameString.data();
	int length =FirstNameString.size();

  // 2x MDS NÃO USA OPERADOR TERNÁRIO EM NOME DE G-ZUIS Hueahueuhuea
  // Mesma mutreta do outro de cima. era ":" invés de "::"
  // mas como você é uma menina amorzinho, EU TENHO CERTEZA que não vai mais usar
  // operador ternário. u.u

  //length = (length < 10 ? length :: 9);//como tava
  //length = (length < 10 ? length : 9); // o jeito """"""""""certo""""""""""

  // Agora tirando a zoeira. O if é mais legível. Antigamente todos os livros
  // usavam operador ternário, era uma mania mesmo. Mas já caiu em desuso.
  // Aí toda vez que tu ver operador ternário, tu só troca por um if bonitinho.
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
  // Aqui tá retornando Balance com "B" maiusculo
  // Lá no ClientData.h tá escrito com "b" minusculo
  // Versão antiga:
	// return Balance;

	return balance;
}

//configura o valor do saldo

void ClientData :: setBalance(double BalanceValue){
  // Aqui tá "setando" Balance com "B" maiusculo
  // Lá no ClientData.h tá escrito com "b" minusculo
  // Versão antiga:
	// Balance = BalanceValue;
	balance = BalanceValue;
}
