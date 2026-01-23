#include <iostream>
#include "Utils.h"
using namespace std;

int main(){
    int variavelDeInicializacao;
    int dificuldade;
    Sistema sistema;

    cout << "==================Início Termo==================" << endl;
    int variavelDeInicializacao = sistema.opcoesDeInicializacao();

    if (variavelDeInicializacao == '2'){
        sistema.regras();
        int variavelDeInicializacao = sistema.opcoesDeInicializacao();
    }

    while (variavelDeInicializacao == '1'){
        int tentativas = sistema.dificuldade();
        string palavraMaquina, palavraUsuario;
        bool ganhou;

        cout << endl;
        cout << "Escolhendo a palavra..." << endl;
        palavraMaquina = sistema.palavraChave();

        for (int i = 0; i < tentativas; i++){
            string palavraUsuario = sistema.entradaPalavraUsuario();
            bool palavraExiste = sistema.verificacaoPalavraUsuario(palavraUsuario);

            while (!palavraExiste){
                cout << "Palavra Inexistente!" << endl;
                cin >> palavraUsuario;
                palavraExiste = sistema.verificacaoPalavraUsuario(palavraUsuario);
            }

        bool palavraAcertada = sistema.comparacaoUsuarioMaquina(palavraUsuario, palavraMaquina);

            if (palavraAcertada){
                ganhou = true;
                break;
            }   
        }

        if (ganhou){
            cout << "Parabens!!!" << endl;
            cout << "Voce ganhou!!" << endl;
        } else {
            cout << "Infelizmente não foi dessa vez..." << endl;
        }
        
        cout << endl;

        cout << "Gostaria de jogar mais uma vez?" << endl;
        variavelDeInicializacao = sistema.opcoesDeInicializacao();
        if (variavelDeInicializacao == '2'){
            sistema.regras();
            int variavelDeInicializacao = sistema.opcoesDeInicializacao();
        }
    }
    return 0;
}
