//https://classroom.google.com/c/MTExNTkwOTcxNjda
/*
1. Leia um número real e imprima o resultado do quadrado desse número. Depois, imprima
a quinta parte deste número.
*/
/*
#include <iostream>
using namespace std;

int main()
{
  int num, Quad;
  double Quinta;

  cout << "informe um número:";
  cin >> num;

  Quad = num *num;
  Quinta = num/5;
  cout << "O quadrado de:" << num << " é " << Quad << " e a quinta parte eh " << Quinta;
}
*/

/*
2. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit e
em graus Kelvin.
As fórmulas de conversão é: F = C∗(9.0/5.0)+32.0 e K = C + 273.15,sendo F a temperatura
em Fahrenheit e K a temperatura em Kelvin
*/
/*
#include <iostream>
using namespace std;

int main()
{
  int C;
  float F, K;

  cout << "informe uma temperatura em graus Celsius:";
  cin >> C;

  F = (C *(9.0/5)+32.0);
  K = (C + 273.15);
   cout << C << " Celsius equivale a:\n" << F << " Fahrenheit e " << K << " Kelvin";
}
*/

/*
3. Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de
seu dobro.*/
/*
#include <iostream>
using namespace std;

int main()
{
  int n;

  cin >> n;
  cout << ((3*n+1)+(2*n-1));
}
*/

/*
4.Lei um número e imprima os seus dois antecessores e os seus cinco sucessores.*/
/*
#include <iostream>
using namespace std;

int main(){
  int n, i, j;

  cin >> n;

 // cout << n - 1 << " e " << n-2 << endl;

  cout << "antecessores " << endl;
  for (i = 1; i <= 2; i++){
    j = n-i;
    cout << j << endl;
  }

  cout << "sucessores" << endl;
  for (i = 1; i <= 5; i++){
    j = n +i;
    cout << j << endl;
  }
}
*/
/*
5. Leia o valor do raio de um círculo e calcule e imprima a área do círculo correspondente.
A área do círculo é π ∗ raio^2, considere π = 3.141592.
*/
/*
#include <iostream>
using namespace std;

int main (){
  int r;
  double a;

  cout << "Informe o raio " << endl;
  cin >> r ;

  a = (3.141592 * (r*r));

  cout << "a area do circulo eh " << a ;
}
*/
/*
6. Leia o salário de um funcionário. Calcule e imprima o valor do novo salário, sabendo que
ele recebeu um aumento de 25%.*/
/*
#include <iostream>
using namespace std;

int main(){

  double sal;
  float novoSal;

  cout << "Informe o salário: " << endl;
  cin >> sal;

  novoSal = ((sal *25)/100);

  cout <<"O novo salário eh " << sal + novoSal << endl;
}
*/
/*
7. A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso.
Sendo que da quantia total:
• O primeiro ganhador receberá 46%;
• O segundo receberá 32%;
• O terceiro receberá o restante;
Calcule e imprima a quantia ganha por cada um dos ganhadores.
*/
/*
#include <iostream>
using namespace std;

int main()
{
  double total = 780.000;
  double P, S, T;
  // 1 46%
  //2 32%
  //3 22%

  P = ((780.000*46)/100);
  S = ((780.000*32)/100);
  T = ((780.000*22)/100);



   cout <<" O primeiro ganhador receberá : " << P << endl;
   cout <<" O segundo ganhador receberá : " << S << endl;
   cout <<" O terceiro ganhador receberá : " << T << endl;
}
*/
/*
8. Uma empresa contrata um encanador a R$ 30,00 por dia. Faça um programa que solicite
o número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga, sabendo-se que são descontados 8% para imposto de renda.*/
/*
#include <iostream>
using namespace std;

int main()
{
  int dias;
  float sal, imposto, novoSal;

  cout << "Informe os dias trabalhados";
  cin >> dias;

  sal = (dias * 30);
  imposto = ((sal* 8)/100);
  novoSal = sal - imposto;

  cout << "Salario a ser pago :" << novoSal << " Reais." << endl;
}
*/
/*
9. Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
• o total a pagar com desconto de 10%;
• o valor de cada parcela, no parcelamento de 3× sem juros;
• a comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com
desconto)
• a comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total) */
/*
#include <iostream>
using namespace std;

int main(){
  float valor, total,Desc, parc, comissionD, comissionP;
  cout << "Informe o valor :";
  cin >> valor;

  Desc = (valor*10)/100;
  parc = (valor/3);

  comissionD = (Desc * 5)/100;
  comissionP = (valor * 5)/100;


  cout << "O valor a pagar om desconto eh :" << valor - Desc << endl;
  cout << "O Valor da parcela de 3 vezes eh : " << parc << endl;
  cout << " A comissaõ do vendedor caso a venda seja com desconto eh: " <<  comissionD << endl;
   cout << " A comissaõ do vendedor caso a venda seja a vista eh: " <<  comissionP<< endl;

}
*/


/*
10. Escreva um programa que leia as coordenadas x e y de pontos no R2 e calcule sua
distância da origem ˆ (0, 0).*/
/*
#include <iostream>
#include <math.h>
using namespace std;

int main(){
  float x,y,r;

  cout << "Informe o ponto x:";
  cin >> x;
  cout << "Informe o ponto y:";
  cin >> y;

  r = sqrt(pow(x,2)+pow(y,2));

  cout << "A distância eh " << r << endl;
}
*/
/*
DESAFIO:
Faça um programa para converter uma letra maiúscula em letra minúscula. Use a tabela
ASCII para resolver o problema.
*/
/*
#include <iostream>
using namespace std;

int main()
{
  int l, newL;
  char letra;

  cout << "Informe o caractere maiúsculo:";
  cin >> letra;

  letra = letra + 32;

  cout << letra;

}
*/



