/**
7 - Escreva um programa que leia um texto de um arquivo e duas palavras e substitua todas as ocorrências da primeira palavra com a segunda palavra.
*/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>

using namespace std;

int main (){
    int i;
    char palavraFile[20];
    char troca[20];
    char word[20];

    ifstream file;
             file.open("B.txt", ios :: in);

    cout << "Informe a palavra de busca: " <<endl;
    cin >> palavraFile;

    cout << "Informe a palavra de troca: "<<endl;
    cin >> troca;


    if (!file.is_open()){
            cout << "erro" <<endl;
            exit (1);

    }

    ofstream fileS;
            fileS.open("B.txt", ios :: app);

    while(!file.eof()){
            file.getline(word,20);
            if (strcmp(word,palavraFile) == 0){
                fileS << troca;
            }

    }

    file.close();
    fileS.close();

}
