/*#include <iostream>

using namespace std;

int soma(int a,int b){
    return a+b;
}

int main (){
    int x,y;
    int total;


    cout << "Informe dois valores: " << endl;
    cin >> x >> y;

    total = soma(x,y);

    cout << " A soma entre " << x << " e " << y << " eh = " << total << endl;

}*/ // teste soma
/* 1. Crie uma função que recebe como parâmetro um número inteiro e devolve o seu dobro */
/*
#include <iostream>

using namespace std;

int dobro (int x){

return x*2;

}

int main (){
    int a, dob;

    cout << "Insira o valor: " << endl;
    cin >> a;

    dob = dobro(a);
    cout << "O dobro do numero informado eh = " << dob << endl;

}
*/

/* 2. Faça uma função que receba 3 números inteiros como parâmetro, representando horas,
minutos e segundos, e os converta em segundos.*/
/*
#include <iostream>
using namespace std;

int segundos(int h, int m, int s);

int main (){
    int hora, minutos, segs, total;

    cout << "Informe as horas, os minutos, os segundos: " << endl;
    cin >> hora >> minutos >> segs;

    total = segundos(hora,minutos,segs);

    cout << "Conversao em segundos: " << total << endl;

}

int segundos(int h, int m, int s){
    h = h * 3600; // 1 h = 3600 s
    m = m * 60;   // 1 m = 60 s
    s = s;


    return h + m + s;

}
*/

/*3. Faça uma função que receba dois valores numéricos e um símbolo. Este símbolo
representará a operação que se deseja efetuar com os números. Se o símbolo for + deverá
ser realizada uma adição, se for − uma subtração, se for / uma divisão e se for ∗ será
efetuada uma multiplicação. */
/*
#include <iostream>
using namespace std;

int calculadora(int a, int b, char s);

    int main (){
        int x, y, total;
        char operacao;

        cout << "Informe os valores da operacao: " << endl;
        cin >> x >> y;
        cout << "Informe o simbolo da operacao: " << endl;
        cin >> operacao;

        total = calculadora(x, y, operacao);

        cout << " O resultado da conta eh = " << total << endl;

    }



    int calculadora(int a, int b, char s){
        int result;
        float resu;

        switch (s){
        case '+':
            result = a + b;
        break;
        case '-':
            result = a - b;
        break;
        case '*':
            result = a * b;
        break;
        case '/':

            result = a / b;
        break;

        return result;
        }


}
// probs co float
*/

/* 4. Crie uma função que receba como parâmetro um valor inteiro e gere como saída n linhas
com pontos de exclamação, conforme o exemplo abaixo (para n = 5) */
/*
#include <iostream>

using namespace std;

    char triangulo(int x);

    int main (){
        int linhas;
        char pira;

        cout << "Informe o numero de linhas: " << endl;
        cin >> linhas;

        pira = triangulo(linhas);
        cout << pira;

    }

    char triangulo(int x){
        int i, j;

       for (i = 1; i <= x; i++)
      {
        for (j = 1; j <= i; j++)
        {

          cout << "!" ;
        }
         cout << "\n";
      }

      // tem uma parada estranha no final
}
*/

/* 5. Escreva uma função que gera um triângulo de altura e lados n e base 2*n-1. Por
exemplo, a saída para n = 6 seria:
     *
    ***
   *****
  *******
 *********
*********** */


/* 6.Faça uma função chamada ‘simplifica’ que recebe como parâmetro o numerador e o
denominador de uma fração. Esta função deve simplificar a fração recebida dividindo o
numerador e o denominador pelo maior fator possível. Por exemplo, a fração 36/60
simplifica para 3/5 dividindo o numerador e o denominador por 12. A funçao deve modificar
as variáveis passadas como parâmetro*/
#include <iostream>
#include <cstdlib>
using namespace std;

void simplifica(int a, int b));

    int main (){
        int x,y;


        cout << "Informe o numerador: ";
        cin >> x;
        cout << "Informe o divisor: ";
        cin >> y;

        cout << simplifica(x,y);


    }




    void simplifica (int a, int b)){
         int an, bn, div=2;
         int divisores[30], maior =0;
         int i;

         while ( (a%div == 0) && (b%div == 0))
                div ++;
                divisores[i] = div;
             }

        for (i=0; i<30; i++){
            for (j=i; j<30; j++){
                 if (divisores[i] > divisores[j]){
                 j++;
                 maior = divisor[i];
                 }
            }

        }

        an = a / maior;
        bn = b / maior;

        return cout << an << "/" << bn;
    }




/* 7. Faça uma função que receba um número inteiro positivo n e retorne o fatorial exponencial
desse número. Um fatorial exponencial é um inteiro positivo n elevado a potência de n − 1,
que por sua vez é elevado à potência de n − 2 e assim em diante. Ou seja: n^(n−1)(n−2)..*/

/* 8. Faça uma função que recebe, por parâmetro, uma matriz A[3][3] e retorna a soma dos
elementos da sua diagonal principal e da sua diagonal secundária. */

/*9. Considerando a estrutura:
struct Ponto{
int x;
int y;
};
Para representar um ponto em uma grade 2D, implemente uma função que indique se um
ponto p está localizado dentro ou fora de um retângulo. O retângulo é definido por seus
vértices inferior esquerdo v1 e superior direito v2. A função deve retornar 1 caso o ponto
esteja localizado dentro do retângulo e 0 caso contrário. Essa função deve obedecer ao
protótipo:
int dentroRet (struct Ponto* v1, struct Ponto* v2, struct Ponto* p) */

/* 10. Considerando a estrutura:
struct Vetor{
float x;
float y;
float z;
};
Para representar um vetor no R3, implemente uma função que calcule a soma de dois
vetores. Essa função deve obedecer ao protótipo:
void soma (struct Vetor* v1, struct Vetor* v2, struct Vetor* res);
onde os parâmetros v1 e v2 são ponteiros para os vetores a serem somados, e o parâmetro
res e um ponteiro para uma estrutura vetor onde o resultado da operação deve ser
armazenado.*/













