
#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int fibonacci (int number);

int main (){
    ofstream file;
             file.open("fibonacci.txt", ios :: app);

    for (int i =0; i<=10; i++){
            cout << fibonacci(i) << endl;
            file << fibonacci(i) << endl;

    }

    file.close();

}

int fibonacci (int number){
    if ( (number == 0) || (number == 1) ){
        return 1;
    }else{
        return fibonacci(number-1) + fibonacci(number-2);
    }
}
