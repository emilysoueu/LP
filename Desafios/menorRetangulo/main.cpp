/**Faça um programa que leia N círculos. Cada círculo possui um raio e um ponto central no plano cartesiano.
 A quantidade N de círculos deve ser informado pelo usuário.
O programa deve gerar como saída o menor retângulo que envolva todos os círculos.
O retângulo, que deve ser impresso na tela, deve conter a coordenada do ponto de origem, a largura e altura da mesma.

 */

#include <iostream>
#include <cstdlib>

using namespace std;

struct circ{
    int raio;
    int centrox;
    int centroy;


};

int main (){
    int qtdC;
    int i,j;
    int esq, dir, baixo, cima;
    int larg, alt;

    cout << "Informe quantos circulos: ";
    cin >> qtdC;

    circ *circulo = new circ[qtdC];

    for (i=0; i<qtdC; i++){
        cout << "Informe o raio: ";
        cin >> circulo[i].raio;
        cout << "Informe o ponto central em X: ";
        cin >> circulo[i].centrox;
        cout << "Informe o ponto central em Y: ";
        cin >> circulo[i].centroy;
    }

    /// Pra saber o mais a esquerda

        for (i=0; i<qtdC; i++){
            esq =  circulo[i].centrox - circulo[i].raio;
            for (j=0; j<qtdC; j++){
                    if (  esq > circulo[j].centrox - circulo[j].raio ){ /// precisa pegar o menor valor esquerda
                        esq = circulo[j].centrox - circulo[j].raio;
                }
        }
        }


        /// Pra saber o mais a direita


        for (i=0; i<qtdC; i++){
             dir =  (circulo[i].centrox) + (circulo[i].raio);
            for (j=0; j<qtdC; j++){
                        if (  dir < circulo[j].centrox + circulo[j].raio ){ ///precisa pegar o maior valor direita
                            dir = circulo[j].centrox + circulo[j].raio ;

                  }
            }
        }

        /// Pra saber o mais a cima


        for (i=0; i<qtdC; i++){
             cima = circulo[i].centroy + circulo[i].raio;
            for (j=0; j<qtdC; j++){
                        if ( cima < circulo[j].centroy + circulo[j].raio  ){ /// precisa pegar o maior cima
                            cima = circulo[j].centroy + circulo[j].raio;

                }
            }
        }



        /// Pra saber o mais a baixo


        for (i=0; i<qtdC; i++){
             baixo = (circulo[i].centroy) - (circulo[i].raio)  ;
            for (j=0; j<qtdC; j++){
                        if (  baixo > circulo[j].centroy - circulo[j].raio){ ///precisa pegar o menor baixo
                            baixo = circulo[j].centroy - circulo[j].raio ;

                }
            }
        }



        ///Conferindo as informações inseridas;

        for (i=0; i<qtdC; i++){
            cout << "Circulo "  <<endl;
            cout << circulo[i].raio<<endl;
            cout << circulo[i].centrox<<endl;
            cout <<  circulo[i].centroy<<endl;
            cout << "\n";
            cout << "esq: " << circulo[i].centrox - circulo[i].raio <<endl;
            cout << "dir: " << circulo[i].centrox + circulo[i].raio <<endl;
            cout << "cima: " << circulo[i].centroy + circulo[i].raio <<endl;
            cout << "baixo: " << circulo[i].centroy - circulo[i].raio <<endl;
                    cout << "\n\n\n";
        }



        cout << "Mais a esquerda: " << esq << endl;
        cout << "Mais a direita: " << dir <<endl;
        cout << "Mais a cima: " << cima <<endl;
        cout << "Mais a baixo: " << baixo <<endl;
        cout << "\n\n\n";

        larg = abs(esq) + abs(dir);
        alt = abs(cima) + abs(baixo);


        cout << "MENOR RETANGULO ENVOLVENTE\n";
        cout << "Origem em x = " << esq << endl;
        cout << "Origem em y = " << cima << endl;
        cout << "Altura = " << alt << endl;
        cout << "Largura = "<< larg <<endl;








}
