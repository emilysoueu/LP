/*1. Crie um programa que:
(a) Aloque dinamicamente um array de 5 números inteiros.
(b) Peça para o usuário digitar os 5 números no espaço alocado.
(c) Mostre na tela os 5 números.
(d) Libere a memória alocada.
*/

/*
#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){
  int *vetor;
  int i, m = 5;

  vetor = new int [m]; // A
    for (i=0; i<m; i++){
      cout << "Informe valores: "; // B
      cin >> vetor[i];
    }

   for (i=0; i<m; i++){
     cout << vetor[i] << endl; //C
   }


    delete []vetor;  // D
}
*/
/*2. Faça um programa que leia um número N e:
• Crie dinamicamente e leia um vetor de inteiro de N posições;
• Leia um número inteiro X e conte e mostre os múltiplos desse número que existem
no vetor.*/
/*
#include <iostream>
#include <stdlib.h>

using namespace std;

int main ()
{
  int *vetor;
  int n, x, i, m = 0;

  cout << "Informe o tamanho do vetor: ";
  cin >> n;

  vetor = new int[n];

  for (i=0; i<n; i++){
    cout << "Informe valores: ";
    cin >> vetor[i];
  }

  for (i=0; i<n; i++){
    cout << vetor[i] << endl;
  }

  cout << "Informe um número: ";
  cin >> x;

  for (i=0; i<n; i++){
    if (vetor[i] % x == 0){
      m++;
    }
  }

  cout << "Existem " << m << " múltiplos de " << x << endl;

    delete []vetor;

}
*/
/*3. Escreva um programa que leia primeiro os 6 números gerados pela loteria e depois os 6
números do seu bilhete. O programa então compara quantos números o jogador acertou.
Em seguida, ele aloca espaços para um vetor de tamanho igual a quantidade de números
corretos e guarda os números corretos nesse vetor. Finalmente, o programa exibe os
números sorteados e os seus números corretos.*/
/*
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
  int *loteria, *bilhete, *corretos;
  int lot = 6, bil = 6;
  int i, j, k, acertou = 0;

 loteria = new int[lot];
 bilhete = new int[bil];

 for (i=0; i < lot; i++){
   cout << "Informe os números da loteria: ";
   cin >> loteria[i];
 }

 for (j=0; j < bil; j++){
   cout << "Informe os números do seu bilhete: ";
   cin >> bilhete[j];
 }

  for (i=0; i<6; i++){
    for (j=0; j<6; j++){
      if (loteria[i] == bilhete[j]){
        acertou ++;
      }
    }
  }

  cout << "Numeros corretos:"<< acertou << endl;

  corretos = new int[acertou];

    for (i=0; i<6; i++){
    for (j=0; j<6; j++){
      if (loteria[i] == bilhete[j]){
        corretos[i] = loteria[i];
      }
    }
  }

    for (i= 0; i < acertou; i++){
      if (bilhete[i] == loteria[i]){
        corretos[i] = bilhete[i];
      }
    }

  cout << "Números sorteados na bilheteria: "<<endl;
  for (i=0; i < lot; i++){
   cout << loteria[i] << endl;
 }
  cout << "Números corretos: "<<endl;
  for (i= 0; i < acertou; i++){
      cout << corretos[i] << endl;

  }

    delete []loteria;
    delete []bilhete;
    delete []corretos;

}
*/


/*4. Faça um programa que leia uma quantidade qualquer de números armazenando-os na
memória e pare a leitura quando o usuário entrar um número negativo. Em seguida,
imprima o vetor lido.*/
/*
#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){
    int num, tam = 0;
    int i;
    int numeros[100];


    while (num >= 0){
        cout << "Informe valores: ";
        cin >> num;
        tam ++; // tamanho do vetor, conforme o usuário informa valores positivos o vetor vai sendo preenchido;
        numeros[tam] = num; // o vetor numeros tem o tamanho da quantidade de numeros positivos informados pelo usuário;
    }

    for (i=numeros[1]; i<tam; i++){ // i iniciliza com a segunda posição do vetor, a que a primeira é zero;
        if (numeros[i] >= 0) {
        cout << numeros[i]<<endl;
        }
    }
}
*/
/*5. Faça um programa que pergunte ao usuário quantos valores ele deseja armazenar em
um vetor de double. Esse vetor deve ter um tamanho maior
ou igual a 10 elementos. Use este vetor dinâmico como um vetor comum, atribuindo aos 10
primeiros elementos do vetor valores aleatórios (usando a função rand)
entre 0 e 100. Exiba na tela os valores armazenados nos 10 primeiros elementos do vetor.*/
/*
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
  double *vetor;
  int n, i;

  cout << "Informe o tamanho do vetor: " << endl;
  cin >> n;

  vetor = new double[n];

  for (i=0; i<10; i++){
    vetor[i] = rand()%100;
  }

  for (i=0; i<10; i++){
    cout << vetor[i] << endl;
  }

  delete []vetor;
}
*/

/* 6. Faça um programa que leia numeros do teclado e os armazene em um vetor alocado
dinamicamente. O usuário irá digitar uma sequência de números, sem limite de quantidade.
Os números serão digitados um a um e, sendo que caso ele deseje encerrar a entrada de
dados, ele irá digitar o número ZERO. Os dados devem ser armazenados na memória deste
modo.
• Inicie com um vetor de tamanho 10 alocado dinamicamente;
• Após, caso o vetor alocado esteja cheio, aloque um novo vetor do tamanho do
vetor anterior adicionado espac ̧o para mais 10 valores (tamanho N+10, onde N
inicia com 10);
  Copie os valores já digitados da área inicial para esta área maior e libere a
memória da área inicial;
• Repita este procedimento de expandir dinamicamente com mais 10 valores o vetor
alocado cada vez que o mesmo estiver cheio. Assim o vetor irá ser ’expandido’ de 10
em 10 valores.
Ao final, exiba o vetor lido.
*/
/*
#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int n = 10;
    int *vetor;
    int *novovetor;
    int num;
    int i, j;
    int cont1 = 0, cont2 =0;

    vetor = new int [n]; //alocando espaço para vetor
    cout << "TAMANHO TOTAL DO VETOR "<< n<<endl;

    cout << "Informe valores: "<<endl;

    for (i=0; i<n; i++){

            cin >> num;
        if (num == 0) ///para a entrada (teste antes de inseriri no vetor)
                    break;
            vetor[i] = num; ///inserindo valores no vetor;
            cont1++; /// contador menor
            cont2++; /// contador geral

        }


    do{
         if (cont1 == 10){ ///se o contador menor marcar 10
          n = n+10;
          novovetor = new int [n]; /// aloca espaço para um novo vetor

            for (i=0; i<n; i++) {  ///alteração
                    if (i<n-10)/// se o indice do vetor antigo for menor que o indice do novo vetor apenas copia os valores
                        novovetor[i] = vetor[i]; /// novo vetor recebe as entradas do vetor antigo
                    else{
                        cin>>num;
                        if (num == 0){ ///para a entrada (teste antes de inserir no vetor)
                            break;
                        }
                        novovetor[i] = num; ///inserindo valores no vetor;
                        cont1++; /// contador menor
                        cont2++; /// contador geral

                    }
            }
         }
         if(cont1 == 10)
            delete []vetor;  /// liberando a memória do vetor antigo

           vetor[i]=novovetor[i]; /// vetor "antigo" novo recebe os valores do vetor maior;

          cont1 = 0;// zerando o contador menor


    }while (num>0); //condição de parada

    cout << "TAMANHO TOTAL DO VETOR "<< n<<endl;
    cout << "VETOR: "<<endl;
    if (cont2 <10){
      for (i=0; i<cont2; i++)
        cout << vetor[i] <<" "; ///impressão do vetor;
        cout << endl;
    }else{
        cout<<"tamanho do vetor : "<<cont2<<endl;
        for (i=0; i<cont2; i++)
            cout << novovetor[i] << " "; ///impressão do vetor;
        cout<<endl;
    }
}
*/

/**
/// RECEBE MAIS DE INFINITOS SÓ QUE NÃO RECONHECE NENHUMA CONDIÇÃO DE PARADA;
#include <iostream>
#include <cstdlib>

using namespace std;
int main(){
    int n = 10;
    int *vetor;
    int *novovetor;
    int num;
    int i, j;
    int cont1 = 0, cont2 =0;

    vetor = new int [n]; //alocando espaço para vetor
    cout << "TAMANHO TOTAL DO VETOR "<< n<<endl;

    cout << "Informe valores: "<<endl;

    for (i=0; i<n; i++){
            cin >> num;
        if (num == 0) ///para a entrada (teste antes de inseriri no vetor)
                    break;
            vetor[i] = num; ///inserindo valores no vetor;
            cont1++; /// contador menor
            cont2++; /// contador geral
        }


    do{

         if (cont1 == n){ ///se o contador menor marcar 10
          n = n+10;

          novovetor = new int [n]; /// aloca espaço para um novo vetor
          cont1 = 0;/// zerando o contador menor

            for (i=0; i<n; i++) {  ///alteração
                    if (i<n-10)/// se o indice do vetor antigo for menor que o indice do novo vetor apenas copia os valores
                        novovetor[i] = vetor[i]; /// novo vetor recebe as entradas do vetor antigo
                    else{
                        cin>>num; /// se não ele pede para o usuário inserir novos valores
                        if (num == 0) ///para a entrada (teste antes de inserir no vetor)
                            break;

                        novovetor[i] = num; ///inserindo valores no vetor;
                        cont1++; /// contador menor
                        cont2++; /// contador geral
                    }
              }
         }
         if(cont1 == n)
            delete []vetor;  /// liberando a memória do vetor antigo

           vetor[i]=novovetor[i]; /// vetor "antigo" novo recebe os valores do vetor maior;


    }while (i!=0); //condição de parada

    cout << "TAMANHO TOTAL DO VETOR "<< n<<endl;
    cout << "VETOR: "<<endl;
    if (cont2 <10){
      for (i=0; i<cont2; i++)
        cout << vetor[i] <<" "; ///impressão do vetor;
        cout << endl;
    }else{
        cout<<"tamanho do vetor : "<<cont2<<endl;
        for (i=0; i<cont2; i++)
            cout << novovetor[i] << " "; ///impressão do vetor;
        cout<<endl;
    }
}

*/

/* 7. Faça um programa que leia do usuário o tamanho de um vetor a ser lido e faç̧a a
alocação dinâmica de memória. Em seguida, leia do usuário seus valores e imprima o vetor
lido.
*/
/*
#include <iostream>
#include <stdlib.h>
using namespace std;

int main (){
  int i, tamanho;
  int *numeros;

  cout << "Informe o tamanho do vetor: ";
  cin >> tamanho;

  for(i=0; i< tamanho; i++){
    cout << "Informe valores: ";
    cin >> numeros[i];
  }

  for(i=0; i<tamanho; i++){
    cout << numeros[i] << endl;
    }

  delete []numeros;
}
*/
/* 8. Faça um programa que leia do usuário o tamanho de um vetor a ser lido e fac ̧a a
alocação dinâmica de memória. Em seguida, leia do usuário seus valores e mostre quantos
dos números são pares e quantos são ̃
ímpares.
*/
/*
#include <iostream>
#include <stdlib.h>
using namespace std;

int main (){
  int tamanho, contPar = 0, contImpar = 0;
  int *vetor;
  int i;

  cout << "Informe o tamanho do vetor: ";
  cin >> tamanho;

  vetor = new int[tamanho];

  for(i=0; i<tamanho; i++){
    cout<< "Informe valores: ";
    cin >> vetor[i];
      if (vetor[i] %2 == 0){
        contPar ++;
      } else {
        contImpar ++;
      }
  }

  for(i=0; i<tamanho; i++){
    cout << vetor[i] << endl;
  }

  cout << "Existem " << contPar << " numeros pares." << endl;
  cout << "Existem " << contImpar << " numeros impares." << endl;

  delete []vetor;
}
*/

/* 9. Faça um programa que receba do usuário o tamanho de uma string e chame uma função
para alocar dinamicamente essa string. Em seguida, o usuário deverá informar o conteúdo
dessa string. O programa imprime a string sem suas vogais.
*/
/*
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main (){
  int tamanho;
  char *palavra;
  int i;

  cout << "Informe quantas letras: ";
  cin >> tamanho;

  palavra = new char[tamanho];


  for (i=0; i<tamanho; i++){
    cout << "Informe o conteudo da palavra: ";
    cin >> palavra[i];

  }

  cout << "a sua palavra eh: "<< palavra <<  endl;


  cout <<endl << "A sua palavra sem as vogais eh: "<< endl;

  i=0;
    while(i<tamanho){
    if ( ((palavra[i]=='a') || (palavra[i]=='A')) || ((palavra[i]=='e')
        || (palavra[i]=='E')) || ((palavra[i]=='i')  ||  (palavra[i]=='I')) ||
        ((palavra[i]=='o')  ||  (palavra[i]=='O')) || ((palavra[i]=='u') || (palavra[i]=='U')) ) {
        i++;
    }else{
        cout << palavra[i] << endl;
        i++;

    }
  }
}
*/
/* 10. Faça um programa para armazenar em memória um vetor de dados contendo 100
valores do tipo int.
(a) Faça um loop e verifique se o vetor contém realmente os 100 valores
inicializados.
com zero (conte os 100 zeros do vetor).
(b) Atribua para cada elemento do vetor o valor do seu índice junto a este vetor.
(c) Exibir na tela os 10 primeiros e os 10 últimos elementos do vetor.
*/
/*
#include <iostream>

using namespace std;

int main (){
    int vetor[100];
  int i;

  // vetor original
  cout << "VETOR ORIGINAL: " << endl;
  for(i=1; i<=100; i++){
    vetor[i]=0;
    cout << i << " - " << vetor[i] << endl;
  }
   // dez primeiros indices
   cout << "PRIMEIROS INDICES: " << endl;
   for(i=1; i<=10; i++){
    vetor[i]= i;
    cout << vetor[i] << endl;
  }

  //dez ultimos indices
  cout << "ULTIMOS INDICES: " << endl;
  for(i=90; i<100; i++){
    vetor[i]= i;
    cout << vetor[i] << endl;
  }
}
*/



























































