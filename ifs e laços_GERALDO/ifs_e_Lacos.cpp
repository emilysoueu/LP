/*1 - Faça um programa para calcular o valor de X dado pelo sequência S:
S = 1/1^3 - 1/3^3 + 1/5^3 - 1/7^3 + 1/9^3 - ...
Sendo X = raiz_cubica_de(S * 32). A quantidade de elementos deve ser informada pelo usuário e não superior a 100.
Cada um dos termos deve ser guardado e impresso no final junto com o resultado. */
/*
#include <iostream>
using namespace std;

int main (){
    int x, s, qtd, sinal = 0;
    int i,j, inter = 0;
    int total;


    cout << "Informe a quantidade de elementos inferior a 100: " << endl;
    cin >> qtd;

    for (i=1,j=3; inter <qtd; i = i+2, j = j+2){
        if (sinal %2 == 0){
             s = (1/i*i*i) - ( 1/j*j*j);

        }else{
            s = (1/i*i*i) + ( 1/j*j*j);

        }
        sinal ++;
        inter ++;
    }

    x = sqrt(s*32) // Não sei como é raíz cúbica;

    cout << "S :"<< s << endl;
    cout << "X :"<< x << endl;
}
*/

/*2 - Escreva um programa para implementar um Jogo de Damas. Neste jogo, dois jogadores devem ocupar as posições pretas de uma matriz 8x8,
onde metade das posições são brancas. Sua tarefa é implementar a lógica do jogo para dois jogadores computacionais.
O jogo deve sempre optar por uma escolha inteligente de jogada para cada um dos jogadores computacionais. Se houver mais de uma jogada
inteligente, o jogador computacional deve possuir um mecanismo de escolha aleatória de jogada. A partida deve ser apresentada na tela.
 Os passos devem ser sincronizados com alguma entrada do usuário. Uma partida não pode ser semelhante a uma seguinte.*/

/* 3 - Escreva um programa para implementar o Jogo da Velha. Neste jogo, uma matriz 3x3 é definida, e o objetivo é preencher em qualquer direção
 uma sequencia de O’s ou X’s. A sua implementação deve permitir a iteração de dois jogadores, que irão escolher a posição onde deverá ficar
 a jogada, informando a posição na matriz. Caso exista algum vencedor, o programa deve informar quem ganhou, e perguntar se um novo jogo
 deve ser iniciado. Se a matriz estiver completa e não houver um vencedor, o programa deve apenas informar o empate e se os jogadores
 desejam começar um novo jogo.*/



/* 4 - Seja N um número quadrado perfeito. Se somarmos os números ímpares consecutivos (1+3+5+7+9+...) até que esta soma seja igual a N,
o número M de termos somados será igual a raiz quadrada de N. Exemplo: N = 16 16 = 1 + 3 + 5 + 7 M = 4 termos. Logo, a raiz quadrada de 16 é 4.
Fazer um programa em C para ler um número inteiro e positivo N e responder se N é quadrado perfeito.*/ //RESPONDIDA
/*
#include <iostream>
#include <math.h>
using namespace std;

int main (){
    int N;
    int imps =0, raiz, termo=0;
    int i;

    cout <<"Informe um numero : "<< endl;
    cin >> N;

      raiz = sqrt(N); //extraindo a raiz do numero informado
      cout << "raiz :" << raiz << endl;

    for (i=1; i< N; i=i+2){
        cout <<"Impares: " << i << endl;
        imps = imps +i; //salvando os numeros impares em uma variavel
        termo ++;  //contador para quantidade de impares
        if (termo == raiz) {  //se a quantdade de impares contados forem iguais a raiz no numero sai do laço
            break;
        }
    }

    cout <<"Soma dos Impares : "<<imps << endl;


    if (imps == N){ //se a soma dos impares for igual ao numero
        cout << "E QUADRADO PERFEITO" <<endl;
    } else {
        cout << "NAO E QUADRADO PERFEITO"<<endl;
    }
}
*/

/*5 - Fazer um programa em C para calcular a soma dos N primeiros múltiplos de um inteiro K, onde N e K são lidos e são números inteiros
 e positivos*/
 /*
 #include <iostream>
 using namespace std;

 int main (){
     int N, K;
     int cont, mult;
     int i;

     cout << "Insira um numero: ";
     cin >> N;
     cout << "Quantos multiplos? ";
     cin >>K;

     i=1;
     while (i<=K){
         mult =N*i;
        cout << mult<<endl;
     i++;

     }
}
*/
/*6 - Fazer um programa para receber um número inteiro do usuário e determinar se este número é primo ou não.*/
/*
#include <iostream>
using namespace std;

int main (){
    int N;
    int div = 0;
    int i;

    cout << "Insira um valor: ";
    cin >> N;


    i = 1;
    while (i<=N){
        if (N%i == 0){
            div ++;
        }
        i++;
    }

    if (div == 2){
        cout << "eh primo" << endl;
    } else {
        cout << "nao primo" << endl;
    }
}
*/
/*7 - Fazer um programa para encontrar todos os números primos até um certo valor FINAL informado pelo usuário
RESPONDIDA*/
#include <iostream>
using namespace std;

int main (){
    int ultimo;
    int i, j;
    int div = 1;
    int cont =0;
    int res;




    cout << "Informe o final do intervalo: ";
    cin >> ultimo;

    for (i=0; i<ultimo; i++){
         for (j=1; j<=ultimo; j++){
           res = j % div;
            if (res == 0){
                cont ++;
             }
            div++;
                }
        if (cont == 2){
            cout << j;
        }


        }

    }




/*8 - Dado um número inteiro n qualquer, faça um programa que imprima a soma de todos os números inteiros menores que n que sejam pares.
RESPONDIDA

9 - Para um inteiro n, positivo, escreva um programa para determinar n!
RESPONDIDA

10 - Dizemos que um número natural é triangular se ele é produto de três números naturais consecutivos.Exemplo: 120 é triangular, pois 4.5.6 = 120. Dado um inteiro
não-negativo n, verificar se n é triangular.
RESPONDIDA

11 - Construa um menu de opções onde o usuário pode informar uma letra de 'a' até 'e'. O menu deve ficar dentro de um laço e se repetir até que o usuário digite a
opção de saída que será 'q'. Cada opção deve executar uma funcionalidade que é imprimir na tela de 1 até o valor inteiro da opção escolhida. Exemplo:
Informe sua opção (a|b|c|d|e|q para sair): b
1 2 3 4 5 ..... 97

12 - Escreva um pequeno código que leia dois números e depois os multiplique. O programa deve aceitar apenas números entre [0 .. 3] incluindo números com casas
decimais.
RESPONDIDA

13 - Dado uma operação de MDC (Máximo Divisor Comum), implemente um código para implementação do MDC entre dois números informados pelo usuário.

14 - Dado o exercício (13), extenda ele para 3 números

15 - Uma usuário irá informar o tamanho dos 3 lados de uma triangulo. Seu programa deve testar os lados e verificar se realmente forma um triangulo e informar o tipo
de triangulo

16 - Crie um aplicativo bancário em C que pede o valor do depósito inicial, o valor do investimento mensal e o número de meses que o dinheiro vai ficar rendendo na
poupança.Após isso, calcule o lucro obtido, sabendo que o juros da poupança é de 0,5%.

17 - Crie um aplicativo que peça um número inteiro ao usuário - 'n' - e exiba o n-ésimo termo da série de Fibonacci, sabendo que o primeiro termo é 0, o segundo é 1
e o próximo número é sempre a soma dos dois anteriores.

18 - Escreva um programa que seja capaz de imprimir qualquer letra na tela usando laços. A letra é informada pelo usuário Exemplo:
********
*
*
*
********

19 - Mesmo programa que o 18, mas o usuário escolhe o tamanho da letra que será impressa

20 - Dados um número inteiro, escreva um programa que represente de forma binária este número

21 - Um programa deve realizar a operação de soma, subtração e multiplicação de números binários. Os dois números binários serão lidos pelo usuário. O resultado
também deve ser impresso na tela em binário

22 - Implemente um programa para realizar uma divisão binária de dois números binários previamente informados

23 - Duas mulheres desejam fazer um uso compartilhado de um carro, e desejam claro, dividir as despesas. O problema é no momento do custo, cada uma paga
individualmente a conta. No final, as contas pagas por cada uma são unidas e depois as compensações são calculadas. Elas pedem que você faça um programa que permita
lançar as contas pagar pela mulher 1 e pela mulher 2, calcule quem tem que devolver valor para quem, ou se não é necessário, e informe isto na tela.
Cada pagamento é lançado com o valor e quem pagou (mulher 1 ou mulher 2). A quantidade de pagamentos da mulher 1 ou mulher 2 são variáveis e não são iguais.

24 - Imagine um plano cartesiano, onde -1000 ≤ x, y ≤ 1000. Nesse plano cartesiano, um usuário deseja informar as coordenadas de 3 pontos quaisquer que supostamente
possam formar um triangulo (não se esqueça de checar). Após informar as coordenadas, o usuário deseja saber se esse triangulo contém ou não a origem do plano
cartesiano (x=0 e y=0). Você deve fazer um programa para descobrir isto.
*/
