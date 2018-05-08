/*1. Crie um programa que calcula o comprimento de uma string (não use a função strlen). */
/*
#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;
int main (){
  char word[100];
  int tamanho = 0, tam, indice = 0;
  int i;
  // USANDO strlen
  cout << "Informe a palavra: ";
  cin >> word;
  tam = strlen(word);
  cout << "O tamanho da sua palavra eh: " << tam << endl;
  cout << "Informe a palavra: ";
  cin >> word;
  i = word[indice];
  while ( word[indice] != '\0' ){
  i++;
  }
   cout << "O tamanho da sua palavra eh: " << i<<endl;
}
// n funciona sem o strlen
*/

/*2. Entre com um nome e imprima o nome somente se a primeira letra do nome for ‘a’
(maiúscula ou minúscula). */
/*
#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;
int main (){
  int i, tam = 100;
   char word[tam];
  cout << "Digite a palavra: ";
  cin >> word;
  if ( (word[0] == 'a') || (word[0] == 'A') ) {
    cout << "Sua palavra começa com A: "<< word << endl;
  } else {
    cout << " A palvra informada não começa com A" << endl;
  }
}
*/
/*3. Digite um nome, calcule e retorne quantas letras tem esse nome. */
/*
#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;
int main (){
  int tam = 100;
  char nome [tam];
  int i;
  int tamanho;
  cout << "Informe um nome: ";
  cin >> nome;
  tamanho = strlen(nome);
  cin.getline(nome,100);
  cout <<"Seu nome possui " << tamanho<< " letras " <<endl;
}
*/
/*4. Ler nome, sexo e idade. Se sexo for feminino e idade menor que 25, imprime o nome da
pessoa e a palavra “ACEITA”, caso contrário imprimir “NÃO ACEITA”. */
/*
#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;
int main(){
  int n = 100, s = 2;
  char nome[n],  sexo[s];
  int idade;
  int i;
  cout << "Informe seu nome: ";
  cin.getline (nome, 100); // recebe strings com espaço.
  cout << "Informe sua idade: ";
  cin >> idade;
  cout << "Informe seu sexo: ";
  cin >> sexo;
  if (  (sexo[0] == 'f') && (idade < 25) ){
    cout << nome << " ACEITA " << endl;
  }else{
    cout << " NAO ACEITA "<<endl;
  }
}
*/
/*5. Escreva um programa que leia a idade e o primeiro nome de 10 pessoas. Seu programa
deve terminar quando uma idade negativa for digitada. Ao terminar, seu programa deve
escrever o nome e a idade das pessoas mais jovens e mais velhas. */

/*6. Faça um programa que receba duas frases distintas e imprima de maneira invertida,
trocando as letras A por *. */
/*
#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;
int main(){
    char frase1[101], frase2[101];
    int i;
    cout << "digite uma frase: ";
    cin.getline(frase1,101);
    cout << "digite outra frase: ";
    cin.getline(frase2,101);
  for (i = 0; i < strlen(frase1); i++){
     switch (frase1[i]){
     case 'a':
     case 'A':
      frase1[i] = '*';
      break;
    }
  }
    for (i = 0; i < strlen(frase2); i++){
     switch (frase2[i]){
     case 'a':
     case 'A':
      frase2[i] = '*';
      break;
    }
  }
     cout << " FRASE 1: " << frase1 << endl;
     cout << " FRASE 2: " << frase2 << endl;
}
*/
/*7.Leia duas cadeias de caracteres A e B. Determine quantas vezes a cadeia A ocorre na
cadeia B. */
/*
#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int main (){
    int tamf = 101, tamw =11;
    char frase[tamf];
    char word[tamw];
    int i, j, k, contar = 0, teste[strlen(word)];
    int aux;
    bool ok;

    cout << "Insira uma frase: " << endl;
    cin.getline(frase,101);

    cout << "Insira qual palavra deve ser contada: " << endl;
    cin >> word;


    if( strlen(word) > strlen(frase) ){
        return false; // quando a palavra for maior que a frase não existe
    }

    for(int i=0; i <= strlen(frase) - strlen(word); i++){
        if(frase[i]==word[0]){

            for(int k=0;k<strlen(word);k++)
                teste[k]=0;  // preenchendo um vetor do tamanho da minha palavra com zeros

            aux=i;    // minha variabel auxilar recebe a posição i e incrementa junto com ele
            for(int j=0;j<strlen(word);j++){
                if(word[j]==frase[aux]){ // laço que percorre o tamanho da minha palavra na frase,
                    teste[j]=1; // se a posição j da minha palvra for igual a posição i, representada pela variabel aux forem iguais então
                    aux++;  // eu prencho o meu vetor d testes com uns;
                }
            }

            ok=true;    // flag
            for(int m=0;m<strlen(word);m++){ // teste para saber se alguma posição do meu vetor for 0, significa que a palavra não
                if(teste[m]==0){ // eh igual, e minha flag passa a ser falsa
                    ok=false;
                }
            }

            if( ok ){  // se a minha flag for verdadeira, siguinifica que o meu vetor de teste  esta preenchido com uns , ou seja, as palvras são iguais
                contar++;
            }
        }
    }

    
   // if (strcmp (frase,word)) //só conta uma vez
   // contar++;
    


   // cout << strtok(frase, " ") << endl;  // quebra no primeiro espaço.

    cout << "apareceu " << contar << " vezes" << endl;

   */

}

/*8. Leia uma cadeia de caracteres no formato “DD/MM/AAAA” e copie o dia, mês e ano para
3 variáveis inteiras. Antes disso, verifique se as barras estao no lugar certo, e se DD, MM e AAAA são numéricos. */
/*
#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <ctype.h>
using namespace std;
int main(){
    char data[10];
    int day, month, year;
    int i, j= 0, itsnumber = 0;
    int date[11];
     cout << "Informe a data: ";
     cin >> data;
     if ( (data[2] == '/') && (data[5] == '/') ){
        cout << "As barras estao posicionadas corretamente." << endl;
        for (i=0; i<10; i++){
        isdigit(data[i]);
        itsnumber++;
        }
        for (i=0; i<10; i++){
            date[i] =atoi(data); // problemas na conversão para numeros inteiro;
        }
        cout << "CONVERSAO "<< date[3];
        if (itsnumber >= 8){
        cout << " Data informada corretamente." << endl;
            day = date[0] ;
            month = date[3] << date[4];
            year = date[6] << date[7] << date[8] << date[9];
            cout << " DATA INFORMADA: " << day << "/" << month << "/" <<year<< endl;
        }
     } else {
        cout << "As barras nao estao posicionadas corretamente." <<endl;
        cout << "A Data informada nao eh valida." << endl;
     }
}
*/
/*9. Implemente um programa que leia duas strings, str1 e str2, e um valor inteiro positivo
N. Concatene não mais que N caracteres da string str2 a string str1 e termine str1 com
‘\0’. */
/*
#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;
int main (){
    char str1[100], str2[100], nova;
    int N;
    cout << "Informe a primeira frase: "<<endl;
    cin.getline(str1,100);
    cout << "Informe a segunda frase: "<<endl;
    cin.getline(str2,100);
    cout <<"Informe a quantidade de caracteres a serem copiados: "<<endl;
    cin >> N;
    cout << "A SUA NOVA STRING EH: "<< strncpy(str1,str2,N) << endl; // a função strncpy copia no máximo N caracteres da srtr 2 na str 1.
}
*/


/*10. Faça um programa que encontre o conjunto de 5 dígitos consecutivos na sequência
abaixo que gere o maior produto:
73167176531330624919225119674426574742355349194934
96983520312774506326239578318016984801869478851843
85861560789112949495459501737958331952853208805511
12540698747158523863050715693290963295227443043557
66896648950445244523161731856403098711121722383113
62229893423380308135336276614282806444486645238749
30358907296290491560440772390713810515859307960866
70172427121883998797908792274921901699720888093776
65727333001053367881220235421809751254540594752243
52584907711670556013604839586446706324415722155397
53697817977846174064955149290862569321978468622482
83972241375657056057490261407972968652414535100474
82166370484403199890008895243450658541227588666881
16427171479924442928230863465674813919123162824586
17866458359124566529476545682848912883142607690042
24219022671055626321111109370544217506941658960408
07198403850962455444362981230987879927244284909188
84580156166097919133875499200524063689912560717606
05886116467109405077541002256983155200055935729725
71636269561882670428252483600823257530420752963450.
*/
