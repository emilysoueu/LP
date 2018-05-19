#include <iostream>
#include <cstring>
#include <cstdlib>

using  namespace std;
int horizontalNormal(char palavra[3][5]);
int inverteMatriz(char palavra[3][5]);
void colunaNormal(char palavra[3][5]);
void colunaInvertida(char palavras[3][5]); /// NAO PRONTO

int main (){
    int i, j;
    int lin = 3, col = 5;
    char palavras[3][5];



    for (i=0; i<lin; i++){
        cin>>palavras[i]; /// Recebendo o caça palavras
    }


    cout << "MATRIZ :"<<endl;

    for (i=0; i<lin; i++){
        for (j=0; j<col; j++){
            cout << palavras[i][j] << " "; /// imprimindo a matriz
        }
        cout << "\n";
    }

    horizontalNormal(palavras); /// funcao horizontal normal
    inverteMatriz(palavras); /// horizontal invertido
    colunaNormal(palavras);
    //colunaInvertida(palavras);
}


int horizontalNormal(char palavras[3][5]){/// sentido
    int i;
    int tam = 5;
    char word[tam], *p; /// palavra a ser procurada;

    cout << "palavra: ";
    cin >> word;



    for (i=0; i<3; i++){
        p = strstr(palavras[i],word);
        if (p!=NULL)
            cout << "palavra encontrada na linha " << i+1 <<endl;
    }


}

int inverteMatriz(char palavras[3][5]){
    int i, j;
    char aux;

    for(i=0; i<3 ; i++){
        for(j=0; j<(strlen(palavras[i])/2); j++){
            aux = palavras[i][j];
            palavras[i][j] = palavras[i][strlen(palavras[i])-j-1];
            palavras[i][strlen(palavras[i])-j-1] = aux;

        }
    }

/**    for (i=0; i<3; i++){
        cout << palavras[i] << endl;
    }
*/
    cout << "matriz invertida " <<endl;
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

void colunaNormal(char palavras[3][5]){ ///
    int i,j;
    char matrizP[3][5];

    for (i=0; i<3; i++){
        for (j=0; j<5; j++){
            matrizP[i][j] = palavras[i][j];

        }
    }


    cout << "TRANSPOSTA: "<< endl;
    for (i=0; i<5; i++){
            for (j=0; j<3; j++){
                 cout << matrizP[j][i] << " ";

            }
            cout << "\n";
    }


    /// função HORIZONTAL NORMAL adaptada



    int tam = 3;
    char word[tam], *p; /// palavra a ser procurada;

    cout << "palavra: ";
    cin >> word;



    for (i=0; i<5; i++){
        p = strstr(matrizP[i],word);
        if (p!=NULL)
            cout << "palavra encontrada na coluna " << i+1 <<endl;
    }


}

void colunaInvertida(char palavras[3][5]){
    int i,j;
    int matriz[3][5];


}

/**
5 -- void Diagonal_P_Normal(char palavras[3][5]);
6 -- void Diagonal_P_Invertida(char palavras[3][5]);
7 -- void Diagonal_S_Normal(char palavras[3][5]);
8 -- void Diagonal_S_Invertida(char palavras[3][5]);
*/











