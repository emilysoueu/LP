#include <iostream>
#include <cstring>
#include <cstdlib>

using  namespace std;
int horizontalNormal(char palavra[3][3]);
int inverteMatriz(char palavra[3][3]);
void colunaNormal(char palavra[3][3]);
void colunaInvertida(char palavras[3][3]); /// NAO PRONTO

int main (){
    int i, j;
    int lin = 3, col = 3;
    char palavras[3][3];



    for (i=0; i<lin; i++){
        cin>>palavras[i]; /// Recebendo o caça palavras
    }


    cout << "\n\nMATRIZ :"<<endl;

    for (i=0; i<lin; i++){
        for (j=0; j<col; j++){
            cout << palavras[i][j] << " "; /// imprimindo a matriz
        }
        cout << "\n";
    }

    horizontalNormal(palavras); /// funcao horizontal normal
    inverteMatriz(palavras); /// horizontal invertido
    colunaNormal(palavras); /// transposta
    colunaInvertida(palavras); ///transposta da horizontal invertida

    cout << "\n\nMATRIZ FINAL MAIN " << endl;
    for (i=0; i<lin; i++){
        for (j=0; j<col; j++){
            cout << palavras[i][j] << " "; /// imprimindo a matriz
        }
        cout << "\n";
    }
}


int horizontalNormal(char palavras[3][3]){/// sentido
    int i;
    int tam = 3;
    char word[tam], *p; /// palavra a ser procurada;

    cout << "palavra: ";
    cin >> word;



    for (i=0; i<3; i++){
        p = strstr(palavras[i],word);
        if (p!=NULL)
            cout << "palavra encontrada na linha " << i+1 <<endl;
    }


}

int inverteMatriz(char palavras[3][3]){ /// HORIZONTAL INVERTIDA
    int i, j;
    char aux;

    for(i=0; i<3 ; i++){
        for(j=0; j<(strlen(palavras[i])/2); j++){
            aux = palavras[i][j];
            palavras[i][j] = palavras[i][strlen(palavras[i])-j-1];
            palavras[i][strlen(palavras[i])-j-1] = aux;

        }
    }

    cout << "\n\nINVERTIDA " <<endl;
    for (i=0; i<3; i++){
        cout << palavras[i] << endl;
    }


    horizontalNormal(palavras);

    /// desinverter de novo

    for(i=0; i<3 ; i++){
        for(j=0; j<(strlen(palavras[i])/2); j++){
            aux = palavras[i][j];
            palavras[i][j] = palavras[i][strlen(palavras[i])-j-1];
            palavras[i][strlen(palavras[i])-j-1] = aux;

        }
    }
}

void colunaNormal(char palavras[3][3]){ ///
    int i,j;
    char matrizP[3][3];

    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            matrizP[i][j] = palavras[j][i]; /// AQUI

        }
    }


    cout << "\n\nTRANSPOSTA: "<< endl;
    for (i=0; i<3; i++){
            for (j=0; j<3; j++){
                 cout << matrizP[i][j] << " ";

            }
            cout << "\n";
    }


    /// função HORIZONTAL NORMAL adaptada


    int tam = 3;
    char word[tam], *p; /// palavra a ser procurada;

    cout << "palavra: ";
    cin >> word;



    for (i=0; i<3; i++){
        p = strstr(matrizP[i],word);
        if (p!=NULL)
            cout << "palavra encontrada na coluna " << i+1 <<endl; /// na verdade ele só busca nas linhas;
    }


}

void colunaInvertida(char palavras[3][3]){ /// FAZER A TRANSPOSTA DA HORIZONTAL INVERTIDA;
    int i,j;
    int aux;
    char matrizP[3][3];

    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            matrizP[i][j] = palavras[j][i]; /// TROCANDO LINHAS POR COLUNAS
        }
    }

    for(i=0; i<2 ; i++){
        for(j=0; j<(strlen(matrizP[i])/2); j++){
            aux = matrizP[i][j];
            matrizP[i][j] = matrizP[i][strlen(matrizP[i])-j-1];  /// TROCANDO OS ELEMENTOS DE POSIÇAO
            matrizP[i][strlen(matrizP[i])-j-1] = aux; /// ta invertendo a pos j=0 com j=2; não era pra acontecer

        }
    }

    cout << "\n\nCOLUNA INVERTIDA: "<< endl;
    for (i=0; i<2; i++){
            for (j=0; j<3; j++){
                 cout << matrizP[i][j] << " ";

            }
            cout << "\n";
    }




}

/**
5 -- void Diagonal_P_Normal(char palavras[3][3]);
6 -- void Diagonal_P_Invertida(char palavras[3][3]);
7 -- void Diagonal_S_Normal(char palavras[3][3]);
8 -- void Diagonal_S_Invertida(char palavras[3][3]);
*/






















