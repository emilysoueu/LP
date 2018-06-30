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

    /*
    if (strcmp (frase,word)) //só conta uma vez
    contar++;
    */


   // cout << strtok(frase, " ") << endl;  // quebra no primeiro espaço.

    cout << "apareceu " << contar << " vezes" << endl;

    // existem prolemas

}






