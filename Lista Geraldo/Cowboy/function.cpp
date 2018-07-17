#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <fstream>

#include "functions.h"


using namespace std;


void cadastrarUser(){
    char buffer[100]; /// verifica no arquivo de user se o nome de user ja existe
    int i,n,lines; /// retorno da função find
    bool jaTem = false; /// flag pra caso encontre o username

                //Abrindo o arquivo para cadastro
                ofstream outUser;
                outUser.open("user.txt", ios :: app);

			    _Usuario_ user; // struct de user


			// abrindo arquivo para leitura e conferir dados que vão ser inseridos
			ifstream inUser;
                     inUser.open("user.txt", ios :: app);

            if (!inUser.is_open()){
                exit(1);
            }


            cout << "Informe o nome de usuario: "<< endl;
                        cin >> user.nome; /// recebendo nome de usuario [string]
                            while(!inUser.eof() ){  /// meche com  arquivo
                                inUser.getline(buffer,99); // pegando cada linha do arquivo
                                if (strstr(buffer,user.nome) != NULL){
                                    jaTem = true;
                                   // break;
                                  }
                                }// close while
                                    if (!jaTem){
                                        outUser << user.nome <<","; // gravando nome de usuario no arquivo de usuario
                                        cout << "Informe a senha: " <<endl; // recebendo a senha
                                        cin >> user.senha;// gravando  a senha do usuario no arquivo
                                        outUser << user.senha << endl;
                                        cout << "Cadastro Realizado com Sucesso!!\n\n" <<endl;
                                        //break;
                                    }

                    if (jaTem){
                        cout << "Nome de usuario ja cadastrado" <<endl;
                        //break;
                    }

             outUser.close();// fechando arquivo
             inUser.close();
 }

 void cadastrarExercicio()
{
            string pass = "emilysoueu"; ///senha do adm
        	string pass1; ///senha que o user vai inserir
        	int i,n;


        	cout << "PASSWORD: "<< endl;
        	cin >> pass1;

        	if (pass1 == pass){
        		// APENAS PARA ADMINISTRADOR

			cout << "========= TELA DE CADASTRO DE EXERCICIOS ===========" <<endl;
			ofstream OutFile; // arquivo de saida , cadastrando exercicios;
			OutFile.open("exercise.txt", ios :: app);

			//recebendo a quantidade de exercicios para alocar espaço para as estruturas
			cout << "Entre com a quantidade de exercicios para inserir: "<<endl;
			cin >> n;

			_exercicio_ *action = new _exercicio_[n]; // alocando espaço para as estruturas;

			cout << "Insira o nivel, a categoria, o titulo e a descricao do exercicio." <<endl;

			///Gravando tudo na mesma linha
			for (i=0; i<n; i++){
				cin >> action[i].nivel;
				OutFile << action[i].nivel << ";";

				cin	>> action[i].categoria;
				OutFile << action[i].categoria << ";";
				cin.ignore();

				getline(cin,action[i].title);
				OutFile << action[i].title << ";";

				getline(cin,action[i].descricao);
				OutFile << action[i].descricao << endl;

				cout << "Exercicio cadastrado com sucesso!!\n"<<endl;
                }//close for
			} else {
        	cout << "Senha Incorreta!!\n\n" << endl;
        	 } // close else
           } // close do case




void proximoExercicio(){

    	    bool Jafeito = false;
            char buffer[1000],Titulo[100],bufferExer[1000],bufferHistUser[1000],*p,*q,logWordChar[10];

    	    string loguinWord, senhaWord; /// entradas do usuario
		    string word; /// linha do arquivo
		    string linhaToda, password; ///linhaToda = linha toda do arquivo e eu vou procurar password
		    int offset, offset2, i=0;
		    bool achou = true, sair = false, aindaTem = true;
		    char *level, *category; // esolha do usuario para o nivel de exercico (na verdade n sei o que eu vou receber aqui);
            level = new char[20];
            category = new char[50];

		    string word2, lineUser; /// linha do arquivo de exercicio e linha do exercicio;
		    string linhaToda2, buscaCategoria;
		    int even, even2, comparar;
		    string sum, txt = (".txt");
		    char filename[10];
            int qlinesTemp = 0; /// arquivo temporario
            string sun; /// arquivo temporario
            string completo,titulo,atividade; /// usar na função substr(); algo como o strtok




		    // aqui eu vou abrir, ler e conferir informações, uma vez que eu criei o arquivo na função cadastrar user

		    ifstream inUser;
                     inUser.open("user.txt", ios :: in);

            if (!inUser.is_open()){
                cout << "Erro!!" << endl;
                exit(1);
            }

			cout <<"Usuario: ";
			cin >> loguinWord;
			cout << "Senha: ";
            cin >> senhaWord;


			while(!inUser.eof()){
                    getline(inUser,word); ///getline(arquivo, char ou string)
                        if (( offset = word.find(loguinWord,0)) != string :: npos){
                            achou = true;
                                linhaToda = word;
                                if((offset2 = linhaToda.find(senhaWord,0)) != string :: npos ){
                                    achou = true;
                                }else{
                                    achou = false;
                                }
                            break;
                        }else{
                           achou = false;

                        }// close else

                }// close while

		    // aqui eu vou abrir, ler e conferir informações, uma vez que eu criei o arquivo na função cadastrar user

		    ifstream inUser;
                     inUser.open("user.txt", ios :: in);

            if (!inUser.is_open()){
                cout << "Erro!!" << endl;
                exit(1);
            }

			cout <<"Usuario: ";
			cin >> loguinWord;
			cout << "Senha: ";
            cin >> senhaWord;


			while(!inUser.eof()){
                    getline(inUser,word); ///getline(arquivo, char ou string)
                        if (( offset = word.find(loguinWord,0)) != string :: npos){
                            achou = true;
                                linhaToda = word;
                                if((offset2 = linhaToda.find(senhaWord,0)) != string :: npos ){
                                    achou = true;
                                }else{
                                    achou = false;
                                }
                            break;
                        }else{
                           achou = false;

                        }// close else

                }// close while


                if (achou){
                    //cout << "Loguin e Senha Corretos" <<endl;
                    do{
                            cout << "|---------------------------------------|"<<endl;
                            cout << "| Bem Vindo " << loguinWord << "   !                   |"<<endl;
                            cout << "| Escolha o Nivel do seu Exercicio:     |"<<endl;
                            cout << "|       [facil]                         |"<<endl;
                            cout << "|       [medio]                         |"<<endl;
                            cout << "|       [dificil]                       |"<<endl;
                            cout << "|Escolha a Categoria do seu Exercicio:  |"<<endl;
                            cout << "|       [Sintaxe de C++]                |"<<endl;
                            cout << "|       [Laco de Repeticao]  |"<<endl;
                            cout << "|       [Vetores e Matrizes]            |"<<endl;
                            cout << "|       [Alocacao Dinamica]             |"<<endl;
                            cout << "|       [String]                        |"<<endl;
                            cout << "|       [Funcoes]                       |"<<endl;
                            cout << "|       [Arquivos]                      |"<<endl;
                            cout << "|       [Struct,Listas e Ponteiros]     |"<<endl;
                            cout << "|Para finalizar digite [sair]           |"<<endl;
                            cout << "|---------------------------------------|"<<endl;
                            cout << "Sua Escolha de Nivel: "<<endl;
                            cin >> level ;
                            cin.ignore();
                            cout << "Sua Escolha de Categoria: "<<endl;
                            cin.getline(category,49);
                            if  ((strstr(level,"sair") !=NULL )|| (strstr(category,"sair") != NULL)) {
                                    sair = true;
                                    break;
                                }else{
                                    sair = false;
                                    cout << "Insira seu loguin com a extensao [.txt]" <<endl;
                                    cin >> filename; /// criando o arquivo do user;
                                    cout << "\n\n";

                                    ofstream outArq; /// historico do usuario
                                            outArq.open(filename, ios :: app);

                                    /// arquivo com exercicios
                                    ifstream inExercise;
                                             inExercise.open("exercise.txt", ios :: in);

                                    /// historico do usuario
                                    ifstream inArq;
                                            inArq.open(filename, ios :: in);



                                    if (!inExercise.is_open()){
                                        cout << "Erro arquivo de Exericios" <<endl;
                                        exit(2);

                                    }

                                    if (!inArq.is_open()){
                                        cout << "Erro arquivo de usuario" <<endl;
                                        exit(3);

                                    }
                                    int i = 0;
                                    while(inExercise.good()){ /// Pecorre o arquivo dos exercicios
                                        inExercise.getline(bufferExer,999);
                                        strcpy(buffer,bufferExer);  /// copia toda a linha para um buffer a parte
                                        p = strtok(bufferExer,";"); /// aqui p é somente o nivel da questao
                                        if(p == NULL){
                                            cout<<"ERRO DE FORMATAÇÃO DO ARQUIVO DE EXERCICIOS"<<endl;
                                            break;
                                        }
                                        if(strstr(p,level) == NULL) Jafeito = true; /// se o nivel nao for o mesmo da escolha do usuario marca como se o exercicio ja foi feito
                                        p = strtok(NULL,";");       /// aqui p é somente a Categoria da questao
                                        if(p == NULL){
                                            cout<<"ERRO DE FORMATAÇÃO DO ARQUIVO DE EXERCICIOS"<<endl;
                                            break;
                                        }
                                        if(strstr(p,category) == NULL) Jafeito = true; /// se a categoria nao for a mesma da escolha do usuario marca como se o exercicio ja foi feito
                                        p = strtok(NULL,";");       /// aqui p é somente o Titulo da questao
                                        if(p == NULL){
                                            cout<<"ERRO DE FORMATAÇÃO DO ARQUIVO DE EXERCICIOS"<<endl;
                                            break;
                                        }
                                        strcpy(Titulo,p);           /// Copia o titulo(p) para Titulo
                                        p = strtok(NULL,";");
                                        while(inArq.good() && !Jafeito){   /// Pecorre o historico do usuario se o exercicio ainda nao for marcado como feito
                                            inArq.getline(bufferHistUser,999);
                                            q = strtok(bufferHistUser,";");
                                            if(q == NULL) break;
                                            q = strtok(NULL,";");
                                            if(q == NULL) break;
                                            q = strtok(NULL,";");
                                            if(q == NULL) break;
                                            q = strtok(NULL,";");
                                            if(strstr(p,q) != NULL) /// Ve se p (descrição do exercicio) ja está em q(historico do usuario
                                                Jafeito = true;  /// se tiver entao a questao ja foi feita
                                        }
                                            if(Jafeito == false){ /// se nao tiver feito printa O titulo da questao e a descrição desta;
                                                cout<<Titulo<<"\n\n"<<p<<endl;
                                                outArq<<"\n"<<buffer;  /// salva a linha do exercicio no fim do arquivo
                                                system("pause"); /// Pausa a cada vez que printar uma questao
                                            }else  Jafeito = false;
                                            inArq.seekg(0);

                                        ///cout<<i<<endl;
                                    }
                                    if (sair){
                                    exit(4);
                                    }


                                    outArq.close();
                                    inExercise.close();
                                }
                        }while(!sair);
                }else{
                    cout << "Loguin e/ou Senha Incorretos"<<endl;
                }




        inUser.close();
}


