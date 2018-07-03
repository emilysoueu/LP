#include <iostream>

using namespace std;

int main()
{
    #include <iostream>

using namespace std;

int main (){
  int i;
  char letra;

  cout << "Informe uma letra:";
  cin >> letra;

  if (letra == 'i' || letra == 'I' ) {
  for (i = 0; i < 5; i++){
    cout << "*\n";
  }
  }

  else if (letra == 'o' || letra == 'O') {
    cout << "\n********";
    for (i = 0; i < 2; i ++ ){
       cout << "\n*\t*";
    }
    cout << "\n*********";

  }

  else if (letra == 'a' || letra == 'A') {
    cout << "\n********";
    for (i = 0; i < 2; i ++ ){
       cout << "\n*\t*";
    }

    cout << "\n*********";
    cout << "\n*\t*";
    cout << "\n*\t*";
  }
  else if (letra == 'u' || letra == 'U') {
    for (i = 0; i < 5; i++ ) {
       cout << "\n*\t*";
    }
      cout << "\n*********";

  }

  else if (letra == 'e' || letra == 'E'){

    for (i = 0; i < 2; i ++ ){
       cout << "\n********";
       cout << "\n*\t";
    }
        cout << "\n********";
  }


  else if (letra == 'b' || letra == 'B') {
    cout << "\n********";
    for (i = 0; i < 2; i ++ ){
       cout << "\n*\t*";
    }
    cout << "\n*********";
    cout << "\n********";
    for (i = 0; i < 2; i ++ ){
       cout << "\n*\t*";
    }
    cout << "\n*********";

    }





    return 0;
}
}
