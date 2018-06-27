#include <iostream>
#include "matriz.h"

using namespace std;

void lematriz(float **M, int l, int c){
    int i,j;

    for (i=0; i<l; i++)
        for (j=0; j<c; j++) {
            cout << "M[" << i << "][" <<j <<"]:";
            cin >> M[i][j];
        }
}

void imprimematriz(float **M, int l, int c) {
    int i,j;

    cout << "Resultado: \n";
    for (i=0; i<l; i++){
        for (j=0; j<c; j++)
            cout << M[i][j] << " ";
        cout << "\n";
    }
}

int main() {
    float **A, **B, **C;
    int la, lb, lc;
    int ca, cb, cc;
    int i;

    do {
        cout << "Dimensoes de A: ";
        cin >> la >> ca;
        cout << "Dimensoes de B: ";
        cin >> lb >> cb;
        cout << "Dimensoes de C: ";
        cin >> lc >> cc;
    }
    while ( (ca != lb) || (cb != lc));

    A = alocamatriz(la, ca);
    if (A==NULL) return 1;
    lematriz(A, la, ca);

    B = alocamatriz(lb, cb);
    if (B==NULL) return 1;
    lematriz(B, lb, cb);

    //as dimensoes do primeiro resultado
    //C = alocamatriz(la, cb);
    //if (C==NULL) return 1;
    multiplica(A, la, ca,
               B, lb, cb,
               &C);

    freeMatriz(A, la);
    A = alocamatriz(lc, cc);
    if (A==NULL) return 1;
    lematriz(A, lc, cc);

    freeMatriz(B, lb);
    //B = alocamatriz(la, cc);
    //if (B==NULL) return 1;
    multiplica(C, la, cb,
               A, lc, cc,
               &B);


    imprimematriz(B, la, cc);

    freeMatriz(A, lc);
    freeMatriz(B, la);
    freeMatriz(C, la);
}
