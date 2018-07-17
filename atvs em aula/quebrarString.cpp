#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>

using namespace std;

int main (){
    string teste1 = "emily,juliana,costa,e,silva";
    string teste2;
    string teste3;
    string teste4;
    int found, i=0;

    /**
    while(teste1 != "\0"){
        found = teste1.find(",");
        for(int f=0; f<found; f++){
            teste2[i] += teste1[f];
        }
        teste1.erase(0,found+1);
        i++;
    }
    for(int d=0; d<i; d++){
            cout << teste2[d] <<endl;
    }
    */

    teste2= teste1.substr(6,12);
    teste3 = teste2.substr(8,5);

    cout << teste2 <<endl;
    cout << teste3 <<endl;

    return 0;
}
