#include <stdio.h>
#include<iostream>
//#include <string>
#include <conio.h>
using namespace std;
int main()
{
 int a, b, c, num;
 string cent,dez,uni;
 printf("digite um numero :\n");//Escreve na tela a mensagem digite um numero
	scanf("%d",&num);//Recebe o numero digitado e o armazena na memoria com nome de num
 a=num/100;//diz que a variavel a e igual a variavel num dividido por 100
 num=num%100;//diz que num e igual ao resto da divisao de num dividido por 100
 b=num/10;// diz que b e igual a num dividido por 10
 num=num%10;//diz que num e igual ao resto da divisao de num dividido por 10
 c=num/1;//diz que c e igual a num dividido por 1
 if(a>9)//se a maior que 9
  printf("\n numero invalido\n");//escreve na tela numero invalido
 else //senao
 {
  if(a==1&&b==0&&c==0)//se a igual a 1 e b igual a 0 e c igual a 0
   printf("\nCem\n");/*escreve na tela cem (\n aqui pede para pular pra proxima
   linha antes de escrever 100 e pede para pular uma linha depois*/
  else if(a==0&&b==0&&c==0)//senao se a igual a 0 e b igual a 0 e c igual a 0
   printf("\nZero\n");//escreve na tela zero
  else//senao
  {
   if(a>=1&&b==0&&c==0)//se a maior ou igual a 1 e b igual a 0 e c igual a 0
   {
	switch (a)/*ira trabalhar com o a variavel a armazenando um valor para cent
	conforme cada caso*/
	{
	case 1 : cent="Cento ";break;//caso 1 cent ganha a dado cento e assim por diante
	case 2 : cent="Duzentos ";break;
	case 3 : cent="Trezentos ";break;
	case 4 : cent="Quatrocentos ";break;
	case 5 : cent="Quinhentos ";break;
	case 6 : cent="Seiscentos ";break;
	case 7 : cent="Setecentos ";break;
	case 8 : cent="Oitocentos ";break;
	case 9 : cent="Novecentos ";break;
	}
   }
   else//senao
   {
	switch(a)
	{
	case 1 : cent="Cento e ";break;
	case 2 : cent="Duzentos e ";break;
	case 3 : cent="Trezentos e ";break;
	case 4 : cent="Quatrocentos e ";break;
	case 5 : cent="Quinhentos e ";break;
	case 6 : cent="Seiscentos e ";break;
	case 7 : cent="Setecentos e ";break;
	case 8 : cent="Oitocentos e ";break;
	case 9 : cent="Novecentos e ";break;
	}
   }
   if(b==1)
   {
	switch(c)
	{
	case 0 : dez="Dez ";break;
	case 1 : dez="Onze ";break;
	case 2 : dez="Doze ";break;
	case 3 : dez="Treze ";break;
	case 4 : dez="Quatorze ";break;
	case 5 : dez="Quinze ";break;
	case 6 : dez="Dezesseis ";break;
	case 7 : dez="Dezessete ";break;
	case 8 : dez="Dezoito ";break;
	case 9 : dez="Dezenove ";break;
	}
   }
   else if(b>1)
   {
	switch (b)
	{
	case 2 : dez="Vinte";break;
	case 3 : dez="Trinta";break;
	case 4 : dez="Quarenta";break;
	case 5 : dez="Cinquenta";break;
	case 6 : dez="Sessenta";break;
	case 7 : dez="Setenta";break;
	case 8 : dez="Oitenta";break;
	case 9 : dez="Noventa";break;
	}
	switch (c)
	{
	case 1 : uni=" e Um ";break;
	case 2 : uni=" e Dois ";break;
	case 3 : uni=" e Tres ";break;
	case 4 : uni=" e Quatro ";break;
	case 5 : uni=" e Cinco ";break;
	case 6 : uni=" e Seis ";break;
	case 7 : uni=" e Sete ";break;
	case 8 : uni=" e Oito ";break;
	case 9 : uni=" e Nove ";break;
	}
   }
   else
   {
	switch (c)
	{
	case 1 : uni="Um ";break;
	case 2 : uni="Dois ";break;
	case 3 : uni="Tres ";break;
	case 4 : uni="Quatro ";break;
	case 5 : uni="Cinco ";break;
	case 6 : uni="Seis ";break;
	case 7 : uni="Sete ";break;
	case 8 : uni="Oito ";break;
	case 9 : uni="Nove ";break;
	}
   }
   cout <<cent<< dez<<  uni << "reais";//ira escrever na tela os dados armazenados de cent dez uni
  }
 } getch();
}
