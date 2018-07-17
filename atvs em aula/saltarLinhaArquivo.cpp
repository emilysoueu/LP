#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int main (){
    string one;
    string two;
    string bob;

    fstream file1;
            file1.open("A.txt", ios :: in);

    fstream file2;
            file2.open("B.txt", ios :: in);

    if (!file1.is_open()){
        exit(1);
    }
    if (!file2.is_open()){
        exit(2);
    }

    while(!file1.eof()){
        getline(file1,one);
        while(!file2.eof()){
            getline(file2,two);
            if (one == two){
                    file1.seekg(tamanho da linha + 1);
            }
        }
        file2.seekg(0);


    }
}
