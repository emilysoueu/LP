/*
  https://classroom.google.com/u/0/c/MTExNTkwOTcxNjda/a/MTI3NzE5NjA4NTRa/details
*/

/*
1. Faça um programa que possua um vetor denominado A que armazene 6 números
inteiros. O programa deve executar os seguintes passos:
(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
(b) Armazene em uma variável inteira (simples) a soma entre os valores das
posições.
A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
(c) Modifique o vetor na posic ̧ao 4, atribuindo a esta posição o valor 100.
(d) Mostre na tela cada valor do vetor A, um em cada linha.*/
/*

#include <iostream>

using namespace std;

//a
int main() {
  int A[6]={1,0,5,-2,-5,7};
  int i;
  int soma;


 //b
 soma = A[0] + A[1] + A[5];

 cout << soma << endl;

 //c
 A[4] = 100;

  cout <<"\n\n\n";

 //d
 for (i = 0; i < 6; i++){
   cout << A[i] << endl;
 }

}
*/

/*2. Faça um programa que preencha um vetor com 10 números inteiros, calcule e mostre a
quantidade de números negativos e a soma dos números positivos desse vetor.
*/
/*
#include <iostream>
#include <stdlib.h>
using namespace std;

int main ()
{
  int vetor[10];
  int i;
  int somaP = 0;
  int qtdneg = 0;


  for (i = 0; i < 10; i++)
  {
    vetor[i] = rand()%30 - 10 ;
    cout << vetor[i] << endl;
    if (vetor [i] > 0)
    {
      somaP = somaP + vetor[i];
      }
    else
    {
      qtdneg++;
    }

  }
    cout << "A soma dos pares eh " << somaP << endl;
    cout << "A quantidade de negativos eh " << qtdneg << endl;
}

/*
3 - Leia 10 números inteiros e armazene em um vetor v. Crie dois novos vetores v1 e v2.
Copie os valores ímpares de v para v1, e os valores pares de v para v2. Note que cada
um dos vetores v1 e v2 tem no máximo 10 elementos, mas nem todos os elementos são
utilizados. No final escreva os elementos UTILIZADOS de v1 e v2.
*/
/*
#include <iostream>
using namespace std;

int main()
{
  int v[10]; // vetor original
  int v1[10]; // vetor de pares
  int v2[10]; // vetor de impares
  int i = 0, j = 0,k = 0; // variaveis de controle pra laço; i : vetor original, j : vetor de pares; k: vetor de

  for (i = 0; i < 10; i++)
  {
    cout << "informe valores";
    cin >> v[i]; // recebendo e preenchendo vetor original
  }

  cout << "Vetor Original\n";
  for (i = 0; i < 10; i++)
  {
    cout  << v[i] << endl;
  } // imprimindo vetor original

  for ( i = 0; i < 10; i++)
  {
      if (v[i] % 2 == 0) // teste pra saber se o n eh par
      {
        v1[j] = v[i];
        j++;
      }
      else
      {
        v2[k] = v[i];
        k++;
      }
  }
  cout << "Vetor de Pares\n";

  for (i = 0; i < j; i++)
  {
    cout  << v1[i] << endl;
  }

   cout << "Vetor de Impares\n";
  for (i = 0; i < k; i++)
  {
    cout << v2[i] << endl;
  }


}

/*4. Leia 10 números inteiros e armazene em um vetor v. Crie dois novos vetores v1 e v2.
Copie os valores ímpares de v para v1, e os valores pares de v para v2. Note que cada
um dos vetores v1 e v2 tem no máximo 10 elementos, mas nem todos os elementos são
utilizados. No final escreva os elementos UTILIZADOS de v1 e v2.


// mesmo da 3

*/

/*5. Leia um vetor com 10 números reais, ordene os elementos deste vetor, e no final escreva
os elementos do vetor ordenado.*/
/*
#include <iostream>
using namespace std;

int main()
{
  int i = 0,j = 0, vetor[10], aux =0;

  for (; i< 10; i++)
  {
    cout << "Informe valores :" << endl;
    cin >> vetor[i];
  }

  cout << vetor[i] << endl;

}
*/

/*6. Escreva um programa que leia um número inteiro positivo n e em seguida imprima n
linhas do chamado Triângulo de Pascal:*/
/*
#include <iostream>
#include <stdlib.h>

using namespace std;

int main ()
{

  int n, i, j, aux;

  cout << "informe a quantidade de linhas";
  cin >> n;

  for (i = 1; i <= n; i++)
  {
    for (j = 1; j < n; j++)
    {
      cout << j ;
      cout << "\n" ;
    }
    cout << i;
  }
}
*/


/*7. Faça um programa que permita ao usuário entrar com uma matriz de 3 x 3 números
inteiros. Em seguida, gere um array unidimensional pela soma dos números de cada coluna
da matriz e mostrar na tela esse array.
*/
/*
#include <iostream>
#include <cstdlib>

using namespace std;

int main (){
    int linhas = 3, colunas = 3, s = 3;
    int matriz [linhas][colunas];
    int i, j, k;
    int soma[s];

    for (i=0; i<linhas; i ++){
            for (j=0; j<colunas; j++){
                cout << "Informe valores: ";
                cin >> matriz[i][j];
            }
    }

    cout << "\n\nMATRIZ: " << endl;
    for (i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }

   soma[0]= matriz[0][0] +matriz[1][0]+matriz[2][0];
   soma[1]= matriz[0][1] +matriz[1][1]+matriz[2][1];
   soma[2]= matriz[0][2] +matriz[1][2]+matriz[2][2];



    cout << "\n\nVETOR SOMA DAS COLUNAS DAS MATRIZES: "<<endl;
    for(k=0; k<s; k++){
        cout << soma[k] << " ";
    }

}
*/



/*8. Faça um programa que leia uma matriz A de tamanho 3 x 3 e calcule B = A2.*/
/*

#include <iostream>
#include <cstdlib>

using namespace std;

int main (){
    int Alin = 3, Acol = 3, Blin = 3, Bcol = 3;
    int i, j;

    int A[Alin][Acol], B[Blin][Bcol];

    for(i=0; i<Alin; i++){
        for(j=0; j<Acol; j++){
            cout << "Informe valores: ";  // recebendo valores da matriz
            cin >> A[i][j];

        }
    }

    cout << "\n\nMATRIZ A : "<< endl;
    for (i=0; i<Alin; i++){
        for (j=0; j<Acol; j++){
            cout << A[i][j] << " "; // imprimindo matriz A
        }
        cout << "\n";
    }

    for(i=0; i<Blin; i++){
        for(j=0; j<Bcol; j++){
            B[i][j]= A[i][j] *2; // dobrando o valor da matriz A
        }
    }

    cout << "\n\nMATRIZ B: " << endl;
    for (i=0; i<Blin; i++){
        for(j=0; j<Bcol; j++){
            cout<< B[i][j] << " "; // imprimirndo matriz B;
        }
        cout << "\n";
    }
}
*/


/*9. Faça programa que leia uma matriz 3 x 6 com valores reais.
(a) Imprima a soma de todos os elementos das colunas ímpares.
(b) Imprima a média aritmética dos elementos da segunda e quarta colunas.
(c) Substitua os valores da sexta coluna pela soma dos valores das colunas 1 e 2.
(d) Imprima a matriz modificada.*/
/*
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int main (){
    int linha = 3 ,coluna = 6;
    int matriz[linha][coluna], sum[3];
    int i, j, k=5;
    float soma=0;
    float media;



     srand(time(NULL));

    cout << "MATRIZ: " <<endl;
    for(i=0; i<linha; i++){
        for (j=0; j<coluna; j++){
            matriz[i][j] = rand()%10; //Preenchenco a matriz com valores aleatorios;
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }

        cout << "\nCOLUNAS IMPARES: " << endl;
        for(i=0; i<linha; i++){
                for(j=0; j<coluna; j++){
                    if (j%2 != 0)  //teste para saber se o índice da coluna é impar
                   cout << matriz[i][j] << " ";
                        soma = soma + matriz[i][j];  //variavel soma recebe os valores das colunas imapres
                }
                cout << "\n";
            }

        cout << "\n\nSOMA DAS COLUNAS IMPARES: "<< soma <<endl;

        soma = 0;
        cout << "\nCOLUNAS 2 E 4: " << endl;
        for  (i=0;i<linha;i++){
            for(j=0;j<coluna;j++){
                if((j == 1) || (j == 3)){
                    soma = soma + matriz[i][j];
                    cout << matriz[i][j] << " ";//imprimindo colunas 3 e 5
                }
            }
            cout << "\n";
        }

        media = soma/6;

        cout << "\n\nMEDIA ARITMETICA DAS COLUNAS 2 E 4: "<< floorf( media * 100) / 100 <<endl; //floorf para arrendondar o valor float da vairiavel

        cout << "\n\nCOLUNAS 1 E 2: " << endl;
        for(i=0; i<linha; i++){
            for(j=0; j<coluna; j++){
                if ( (j==0) || (j==1))
                    cout << matriz[i][j]<< " ";
            }
            cout << "\n";
        }

        cout << "\n\nVetor Soma de 1 e 2: "<<endl;

        for(i=0; i<3; i++){
            for(j=0;j<2;j++){
                sum[i] = matriz[i][0]+matriz[i][1]; //vetor que armazena a soma das duas primeiras colunas da matriz
            }
            cout <<sum[i] << endl; // imprimindo vetor soma
        }

        cout << "\n\nNOVA MATRIZ: " <<endl;
        for(i=0; i<linha; i++){
            for(j=0; j<coluna; j++){
                matriz[i][5] = sum[i];// substituindo a ultima coluna da matriz pelo vetor soma
                cout << matriz[i][j] << " ";
            }
            cout << "\n";
        }

}
*/
/*10.Implemente um jogo da Velha onde o tabuleiro é representado por uma matriz de 3 x 3,
onde cada posição representa uma das casas do tabuleiro. A matriz pode conter os
seguintes valores -1, 0, 1 representando respectivamente uma casa contendo uma peça
minha (-1), uma casa vazia do tabuleiro (0), e uma casa contendo uma peça do meu
oponente (1).*/













































