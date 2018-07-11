/**2 - Implemente uma função cópia de arquivos copyfile_inverse. Esta função copia um arquivo A para um arquivo B de maneira inversa.
 Ou seja, a função lê o arquivo do final para o início.
*/

#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

int main (){
    char omelete;
    int lines = 0;

    ifstream original;
             original.open("A.txt", ios :: in);

    if (!original.is_open()){
        cout << "ERRO"<<endl;
        exit(1);
    }


    ofstream mundoInvertido;
             mundoInvertido.open("C.txt", ios :: app);



    while (!original.eof()){
        original.get(omelete);
        mundoInvertido << omelete;
        mundoInvertido.seekp(0);
    }
       original.close();
       mundoInvertido.close();

       return 0;


}






