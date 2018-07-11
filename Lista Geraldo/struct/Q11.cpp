/**
11 - Uma pessoa desorganizada guarda todos os comprovantes de pagamentos em um arquivo texto imenso que contém a
seguinte estrutura:Descrição_Conta;Valor;Data_Pagamento;Número_do_comprovante. Imaginando que o dono do arquivo irá
 digitar na entrada padrão cada linha desse arquivo, faça um programa que informe ao dono desorganizado, o valor gasto em cada mês/ano.
*/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>

using namespace std;


typedef struct _contas_{
    char descricao[1000];
    int valor;
    struct _data_ *data;
    int comprovante;
}conta;

typedef struct _data_{
    int dia;
    int mes;
    int ano;
}data;


int main (){
    int i,j,n;
    char busca[3], *temp;

    cout << "Informe a quantidade de contas para cadastrar: "<<endl;
    cin >> n;
    cin.ignore();

    _contas_ *conta = new _contas_[n];
    _data_ *data = new _data_[n];

    for (i=0; i<n; i++){
        cout << "Entre com a descrição da conta: " << endl;
        cin.getline(conta[i].descricao, 1000);
        cout << "Entre com o valor: " <<endl;
        cin >> conta[i].valor;
        cout << "Entre com a data de pagamento" <<endl;
        cin >> data[i].dia >> data[i].mes >> data[i].ano;
        cout << "Entre com o numero de pagamento: "<<endl;
        cin >> conta[i].comprovante;
        cin.ignore();

    }


    ///////////// sei lá ////////////////?????/?//


            switch (data[i].mes){
                case 01:
                    cout << "janeiro" << endl;
                    for (i=0; i<n; i++){
                    {
                        conta[i].valor += conta[i].valor;

                    }
                    cout << conta[i].valor;

                break;

                default:
                    cout << " erro " <<endl;

            }

        }


}
