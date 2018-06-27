#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int main (){
    char txt[10][10];

    for (int i =0; i<10; i++){
        cin.getline(txt[i],10);
    }

    for (int i =0; i<10; i++){
        cout << txt[i] << endl;

    }
}
