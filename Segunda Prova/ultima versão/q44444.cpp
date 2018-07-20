#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <fstream>

using namespace std;

typedef struct _contas_{
    int nConta;
    int valor;
    char quemPagou;
}conta;

int main (){
    int i,n,j, mes = 2;
    char filename[7];
    char *ptr, linha[20];
    char *ptr2;
    int valor, total = 0, res = 0, pCada;
    int totalA = 0, valorA = 0, resA = 0;
    int totalB = 0, valorB = 0, resB = 0;

    int contasA[mes];
    int contasB[mes];
    int contasTotal[mes];

    bool achouA = false;

    /// cadastrando contas
    /// para cada mes n contas
    for (j=1; j<=mes; j++){
            itoa(j,filename,10);
            strcat(filename,".txt");

            ofstream contab;
                    contab.open(filename, ios :: app);

        cout << "Informe quantas contas no mes: " <<endl;
        cin >> n;

        _contas_ *conta = new _contas_[n];

        for (i=0; i<n; i++){
            cout << "Numero da conta: ";
            cin >> conta[i].nConta;
            contab << conta[i].nConta << ",";
            cout << "Valor da conta: ";
            cin >> conta[i].valor;
            contab << conta[i].valor << ",";
            cout << "Quem Pagou: ";
            cin >> conta[i].quemPagou;
            contab << conta[i].quemPagou << "\n";
            cin.ignore(1);

        }// close for interno

        contab.close();
    } // close for externo

        /// lendo contas
        for (j=1; j<=mes; j++){

            itoa(j,filename,10);
            strcat(filename,".txt");

            /// pegando o valor total do mes para armazenar em um vetor;
            ifstream caderno;
                     caderno.open(filename, ios :: in);

            /// Armazenar o valor total
            while(caderno.good()){
                caderno.getline(linha,20);
                if(strstr(linha,"a") != NULL) achouA = true;
                ptr = strtok(linha,","); /// pega o numero da conta
                ptr = strtok(NULL,",");  /// pega o valor da conta

                valor = atol(ptr);       /// converte o valor da conta de char para inteiro
                total +=valor;           /// adiciona o valor da conta e guarda
                ptr = strtok(NULL,",");  /// pega quem pagou
                if(achouA) totalA += valor;
                else totalB += valor;
                ///cout<<total<<"<--"<<endl;
                achouA = false;

            } // close while


            caderno.close();

            contasTotal[j] = total; /// adicionando o valor da conta no vetor de contas
            total = 0;


        } // close for extero

        /// aqui eu tenho que somar os valores de cada arquivo e armazenar e comparar depois
        for( i=1; i<=mes; i++){
            res += contasTotal[i];  /// somando o vetor de contas

        }// close for

        cout << "Resultado: " << res <<endl;

        pCada = res/2; /// dividindo o valor gasto no ano por 2

        cout << "Valor dividido por 2: " <<pCada <<endl;

        cout << "Valor pago por A no ano : "<< totalA <<endl;
        cout << "Valor pago por B no ano : "<< totalB <<endl;


        int menor = totalA;
        if(totalA != totalB){
            if (totalB < totalA){
                cout << "B deve devolver " << pCada - totalB << " para A." <<endl;
            }else{
                cout<<"A tera que retornar "<<pCada - totalA<<" para B"<<endl;
            }
        }



}
