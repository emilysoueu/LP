#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;



int main (){
    int l1, c1, l2, c2;
    int **A, **B, **C;
    int i, j, k;

    cout << "Informe as dimensoes da primeira matriz: ";
    cin >> l1 >> c1;
    cout << "Informe as dimensoes da segunda matriz: ";
    cin >> l2 >> c2;

    srand(time(NULL));

    if (c1 != l2){
        cout << "Impossivel realizar multiplicacao\n\n";
        return 1;
    }


    A = new int*[l1];
        for (i=0; i<l1; i++){
            A[i] = new int [c1];
        }
    B = new int*[l2];
        for (i=0; i<l2; i++){
            B[i] = new int[c2];
        }

    C = new int*[l1];
        for (i=0; i<l1; i++){
            C[i] = new int [c2];
        }


    cout << "\n\nPrimeira Matriz: "<< endl;
        for (i=0; i<l1; i++){
            for(j=0; j<c1; j++){
                A[i][j] = rand()%10;
                cout << A[i][j] << " ";
            }
            cout << "\n";
        }

    cout << "\n\nSegunda Matriz:"<<endl;
        for (i=0; i<l2; i++){
            for(j=0; j<c2; j++){
                B[i][j] = rand()%20;
                cout << B[i][j] << " ";
            }
            cout <<"\n";
        }

    cout << "\n\nMatriz Resultado: "<<endl;
        for (i=0; i<l1; i++){
            for(j=0; j<c2; j++){
                C[i][j]= 0;
                for (k=0; k<l2; k++)
                    C[i][j]+= A[i][k] *B[k][j];
                cout << C[i][j] << " ";
            }
            cout << "\n";
        }

        for (i=0; i<l1; i++)
            delete[] A[i];p.l
        delete []A;

        for (i=0; i<l2; i++)
            delete [] B[i];
        delete []B;

        for (i=0; i<c1; i++)
            delete [] C[i];
        delete []C;






}
