#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <string>
#include <cstring>
#include <conio.h>

using namespace std;

int main() {
    FILE* arquivo_temporario = tmpfile(); /* modo wb+. para mais informações sobre modos, ver fopen */
    if(arquivo_temporario == NULL) {
        //fprintf(stderr, "Erro ao criar um arquivo temporário.");
        cout << "erro ao criar arquivo";
        return 1;
    }else{
        cout << "Arquivo criado com Sucesso" <<endl;
    }

    string word;
    string username;
    username = "eu estou aqui";

    //arquivo_temporario << username + "\n";

    while(!feof(arquivo_temporario)){
                        cout << word;
    }


    fclose(arquivo_temporario); /* o arquivo é excluído ao chamar fclose */

    return 0;
}
