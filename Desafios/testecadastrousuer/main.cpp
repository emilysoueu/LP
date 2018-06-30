#include <iostream>
#include <fstream>

using namespace std;

struct user{
    char nome[40];
    char senha [7];
};

int main (){
    char comando;
    user usuario;

    ofstream user_S;
    user_S.open("user.txt", ios :: app);



    cout << "Bem Vindo ao Proximo exercicio: " <<endl;
    cout << "E Novo por aqui? Cadastre-se para ter acesso aos nossos exercicios. Pressione 'N'\n";
    cout << "Ja possui cadastro? Faca loguin. pressione 'L'\n";
    cout << "Para sair pressione 'S'";
    cin >> comando;

    switch (comando){
    case 'n':
    case 'N':
        cout << "Insira seu nome de usuario\nNo maximo 6 caracteres\nEvite usar espaços em branco";
        cin.getline(usuario.nome,7);
        user_S << usuario.nome;
        cout <<"Insira sua senha\nNo maximo 6 caracteres\nEvite usar espaços em branco";
        cin >> usuario.senha;
        user_S << usuario.senha;
        cout << "Cadastro efetuado com sucesso!!";
        user_S.close ();
        break;
    case 'L':
    case 'l':
        cout << "Nome de usuario: ";
        cin.getline(usuario.nome,7);
        cout << "Senha: ";
        cin >> usuario.senha;
        break;
    case 's':
    case 'S':
        return 1;
        break;

    }

}
