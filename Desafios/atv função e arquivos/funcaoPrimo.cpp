/** 1) Faça uma função que encontre os divisores de um número qualquer e
em seguida encontre o maior divisor primo do número.
O programa deve exibir a resposta para os números de 100 à 1000000.*/

 #include <iostream>
 #include <cstdlib>
 using namespace std;
 int maiorDivisorPrimo(int n);

 int main (){
     int X;
     int maiorPrimo;
     cout << "Insira um valor entre 100 e 1000000: ";
     cin >> X;
     maiorPrimo = maiorDivisorPrimo(X);
     cout << "O maior divisor primo do numero informado eh = " <<maiorPrimo << endl;
 }


 int maiorDivisorPrimo(int num){
     int  x, impar = 1, i, d, maior=0;

     for(i=1; i<=x;i++)
    {
        impar = 1;
        if (i<=1 || (i!=2 && i%2==0))
        {
            impar =0;
        }
        d=3;
        while (impar==1 && d<i/2)
        {
            if (i%d==0)
                impar = 0;

            d+=2;
        }

        if((impar==1)&&(x%i == 0)){
            cout << "Divisores Primos: "<< i << endl;
            maior = i;

        }
    }

    return maior;
}



