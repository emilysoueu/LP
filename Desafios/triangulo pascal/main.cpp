/*6. Escreva um programa que leia um número inteiro positivo n e em seguida imprima n
linhas do chamado Triângulo de Pascal:*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int fatorial(int n) {
    int i;
    int resultado = 1;
    for (i = 1; i <= n; i++) {
       return resultado = resultado * i;
        //return resultado;
    }
}

int combinacao (int p, int k)
{
    return (fatorial(p))/(fatorial(k)*fatorial(p-k)) ;
}

int main()
{
    int n;
    int i, j;
    cout << "informe a quantidade de linhas: " << endl;
    cin >> n;

    for(i=0; i<=n; i++){
        for(j=0; j<=i; j++)
        {
            cout << combinacao(i,j) << " ";
        }
        cout << endl;
    }
    return 0;
}
