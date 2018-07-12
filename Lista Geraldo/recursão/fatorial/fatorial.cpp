#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;
int fatorial (int number);

int main (){
    int i, n;

    ofstream fat;
             fat.open("fatorialSerie.txt", ios :: app);


    cout << "Informe o numero: "<<endl;
    cin >> n;

    for (i=0; i<=n; i++){
            cout << fatorial(i) << endl;
            fat << fatorial (i)<<endl;

    }

    fat.close();
}

int fatorial (int number){
    if (number <= 1){
        return 1;
    }else{
        return number * fatorial (number -1);
    }
}
