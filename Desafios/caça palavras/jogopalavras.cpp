#include <iostream>
#include <cstring>
#include <cstdlib>

using  namespace std;

int horizontalNormal (char **palavras, int lin,int col, int tam, char *word);
int inverteMatriz (char **palavras, int lin, int col, int tam, char *word);
void colunaNormal (char **palavras, int lin, int col, int tam, char *word);
void colunaInvertida (char **palavras, int lin, int col, int tam, char *word);
void Diagonal_Baixo_Cima (char **palavras, int lin, int col, int tam, char *word);
void Diagonal_Baixo_Cima_Inversa (char **palavras, int lin, int col, int tam,char *word);
void Diagonal_Cima_Baixo (char **palavras, int lin, int col, int tam, char *word);
void Diagonal_Cima_Baixo_Inversa  (char **palavras, int lin, int col, int tam, char *word);


int main (){
    int i, j;
    int lin , col;
    int tam;
    char **palavras;

    cout << "Insira as dimensoes do seu Procura Palavras: [linhas][colunas] "<<endl;
    cin >> lin >> col;

    if (lin > col){
        tam = lin;
    }else{
        tam = col
    }

    char word[tam];

    ///Alocando a Matriz
    palavras = new char *[lin];
        for(i=0; i<lin; i++)
            palavras[i] = new char[col];



    /// Recebendo o caça palavras
    cout << "Preencha seu Procura Palavras" << endl;
    for (i=0; i<lin; i++){
        cin>>palavras[i];
    }


    ///Imprimindo a Matriz
    cout << "\n\nCACA PALAVRAS :"<<endl;

    for (i=0; i<lin; i++){
        for (j=0; j<col; j++){
            cout << palavras[i][j] << " "; /// imprimindo a matriz
        }
        cout << "\n";
    }

    ///Recebendo a palavra de busca
    do {
    cout << "\nInforme a palavra que deseja procurar:";
    cin >> word;

    ///Funções de Busca
    //1 Horizontal
    horizontalNormal(palavras,lin, col, tam, word);
    //2 Horizontal Inversa
    inverteMatriz(palavras,lin, col, tam, word);
    //3 Vertical (transposta)
    colunaNormal(palavras, lin, col, tam, word);
    //4 Vertical Inversa (transposta da horizontal invertida)
    colunaInvertida(palavras, lin, col, tam, word);
    //5 Diagonal de baixo para cima
    Diagonal_Baixo_Cima(palavras, lin, col, tam, word);
    //6 Diagonal de baixo para cima Inversa
    Diagonal_Baixo_Cima_Inversa(palavras, lin, col, tam, word);
    //7 Diagonal de cima para baixo
    Diagonal_Cima_Baixo(palavras, lin, col, tam, word);
    //8 Diagonal de cima para baixo Inversa
    Diagonal_Cima_Baixo_Inversa(palavras, lin, col, tam, word);


    }while(word);



    ///Desalocar Matriz
    for(i=0; i<lin; i++)
        delete []palavras[i];
    delete []palavras;


}




int horizontalNormal(char **palavras, int lin, int col, int tam, char *word){
    int i;
    char  *p;

    for (i=0; i<lin; i++){
        p = strstr(palavras[i],word);
        if (p!=NULL)
            cout << "palavra encontrada na linha " << i+1 <<endl;
    }


}

int inverteMatriz(char **palavras, int lin, int col,int tam, char *word){ /// HORIZONTAL INVERTIDA
    int i, j;
    char aux;

    for(i=0; i<lin; i++){
        for(j=0; j<(strlen(palavras[i])/2); j++){
            aux = palavras[i][j];
            palavras[i][j] = palavras[i][strlen(palavras[i])-j-1];
            palavras[i][strlen(palavras[i])-j-1] = aux;

        }
    }

    ///IMPRESSAO DA MATRIZ
    /**
    cout << "\n\nINVERTIDA " <<endl;
    for (i=0; i<3; i++){
        cout << palavras[i] << endl;
    }
    */


    horizontalNormal(palavras, lin, col, tam, word);

    /// desinverter de novo

    for(i=0; i<lin ; i++){
        for(j=0; j<(strlen(palavras[i])/2); j++){
            aux = palavras[i][j];
            palavras[i][j] = palavras[i][strlen(palavras[i])-j-1];
            palavras[i][strlen(palavras[i])-j-1] = aux;

        }
    }
}

void colunaNormal(char **palavras, int lin, int col,int tam, char *word){ ///
    int i,j,k;
    char *p,temp,pos_atual_vetor = 0;
    char vetor[lin];

    for(i = 0; i < lin; i++){
        for(j = 0; j < strlen(palavras[i]); j++){
            for(k = i; k < lin; k++)
            {
                if(strlen(palavras[k]) >= j){
                    vetor[pos_atual_vetor] = palavras[k][j];
                    pos_atual_vetor++;
                }
            }
            p = strstr(vetor,word);
            if( p != NULL){
                cout << "\nlocalizada na vertical coluna "<<i+1<<"\n";
                return;
            }
            pos_atual_vetor = 0;
        }
    }
}

void colunaInvertida(char **palavras, int lin, int col,int tam, char *word){ /// FAZER A TRANSPOSTA DA HORIZONTAL INVERTIDA;

    int i,j,k,l;
    char *p,temp,pos_atual_vetor = 0;
    char vetor[lin];

    for(i = 0; i < lin; i++){
        for(j = 0; j < strlen(palavras[i]); j++){
            for(k = i; k < lin; k++)
            {
                if(strlen(palavras[k]) >= j){
                    vetor[pos_atual_vetor] =palavras[k][j];
                    pos_atual_vetor++;
                }
            }
            for(int l = 0; l < strlen(vetor)/2; l++){
                  temp = vetor[l];
                  vetor[l] = vetor[strlen(vetor) - l -1];
                  vetor[strlen(vetor) - l -1] = temp;
            }
            /**for(i = 0; i < pos_atual_vetor; i++) cout<<vetor[i];
            cout<<endl;*/
            return;
            p = strstr(vetor,word);
            if( p != NULL){
                cout << "\nlocalizada na vertical (invertida) coluna "<<i+1<<"\n";
                return;
            }
            pos_atual_vetor = 0;
        }
    }
}

void Diagonal_Baixo_Cima(char **palavras, int lin, int col, int tam,char *word){
     int i=0, j=0,k,l,t;

    int pos_atual_vetor = 0;
    char vetor[tam], *p; /// MAIOR NUMERO LINHA OU COLUNA




    /// Pecorre a matriz nomarmente como se fosse imprimir menbro por menbro
    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++)
        {
            k = i; /// Guarda as posições atuais de i e j pq vamos pecorrer a matris diagonalmente
            l = j; /// no sentido i++ e j-- (direita pra esquerda)
            while(k < 3 && l >= 0) /// enquanto  as nao ultrapassar o limite das linhas e nem as colunas serem negativas
            {
                vetor[pos_atual_vetor] = palavras[k][l]; /// armazena os valores nas posições k e l;
                k++;
                l--;
                pos_atual_vetor++;
            }
            p = strstr(vetor,word);  /// faz apenas uma unica verificação se encontrar ja termina a função com o return;
            if( p != NULL){
                cout << "\nlocalizada na coluna "<<j+1<<endl; /// ta imprimindo a posição errada na coluna mas tudo bem
                cout << "sentindo : Diagonal de baixo para cima."<<endl;
                return;
            }
            pos_atual_vetor = 0; /// volta a posição do vetor para a posição 0 para reutiliza-lo
        }
    }
}

void Diagonal_Baixo_Cima_Inversa(char **palavras, int lin, int col,int tam, char *word){
     int i, j,k,l,m,n; /// OXI (variaveis m e n adicionadas para fazer a inversa  do vetor
     int pos_atual_vetor = 0;
     char vetor[tam];
     char *p, aux; /// variavel aux adicionada para armazenar temporariamente


    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++)
        {
            k = i;
            l = j;
            while(k < lin && l >= 0)
            {
                vetor[pos_atual_vetor] = palavras[k][l];
                k++;
                l--;
                pos_atual_vetor++;
            }
            /// unica difença com o codigo da diagonal normal é essa parte que inverte o vetor
            for(m = 0; m < pos_atual_vetor/2; m++){
                for(n = pos_atual_vetor - 1; n >= 0; n--){
                   aux = vetor[m];
                   vetor[m] = vetor[n];
                   vetor[n] = aux;
                }
            }
            p = strstr(vetor,word);
            if( p != NULL){
                cout << "\nlocalizada na coluna "<<j+1<<endl;
                cout << "sentindo : Diagonal de baixo para cima inversa."<<endl;
                return;
            }
            pos_atual_vetor = 0;
        }
    }
}

void Diagonal_Cima_Baixo(char **palavras, int lin, int col,int tam, char *word){
    int i=0, j=0,k,l,t;
    int pos_atual_vetor = 0;
    char vetor[tam];
    char *p;


    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++)
        {
            k = i;
            l = j;
            while(k < lin && l < col)
            {
                vetor[pos_atual_vetor] = palavras[k][l];
                k++;
                l++;  /// de  l-- para l++
                pos_atual_vetor++;
            }
            p = strstr(vetor,word);
            if( p != NULL){
                cout << "\nlocalizada na coluna "<<j+1<<endl;
                cout << "sentindo : Diagonal de cima para baixo."<<endl;
                return;
            }
            pos_atual_vetor = 0;
        }
    }

}

void Diagonal_Cima_Baixo_Inversa(char **palavras, int lin, int col,int tam, char *word){

    int i, j,k,l,m,n;
    int pos_atual_vetor = 0;
    char vetor[tam];
    char *p, aux;


    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++)
        {
            k = i;
            l = j;
            while(k < 3 && l < 3)
            {
                vetor[pos_atual_vetor] = palavras[k][l];
                k++;
                l++;
                pos_atual_vetor++;
            }
            for(m = 0; m < pos_atual_vetor/2; m++){
                for(n = pos_atual_vetor - 1; n >= 0; n--){
                   aux = vetor[m];
                   vetor[m] = vetor[n];
                   vetor[n] = aux;
                }
            }
            cout<<endl;
            p = strstr(vetor,word);
            if( p != NULL){
                cout << "localizada na coluna "<<j+1<<endl;
                cout << "sentindo : Diagonal de cima para baixo Inversa."<<endl;
                return;
            }
            pos_atual_vetor = 0;
        }
    }

}
