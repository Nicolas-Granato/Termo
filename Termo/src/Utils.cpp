#include <iostream>
#include <fstream>
#include <random>
#include <string>
#include <map>
#include "Utils.h"
using namespace std;

string Sistema::palavraChave(){
    random_device rd;
    mt19937 gerador(rd());
    uniform_int_distribution<int> distribuicao(1, 11397);

    int indicePalavra = distribuicao(gerador);
    string palavraAlvo;

    ifstream listaDePalavras("Termo\\dicionarioTratado.txt");

    if (listaDePalavras.is_open()){
        for (int i = 0; i != indicePalavra; i++){
            listaDePalavras >> palavraAlvo;
        }
        
        return palavraAlvo;
    }

    cout << "ERRO!!! Arquivo inexistente!" << endl;
    return "";
}

bool Sistema::verificacaoPalavraUsuario(string palavraUsuario){
    string linha;
    ifstream listaDePalavras("Termo\\dicionarioTratado.txt");

    if (palavraUsuario.length() != 6){
            cout << "A palavra deve ter 6 caracteres..." << endl;
            return false;
    }

    if (listaDePalavras.is_open()){

        while (listaDePalavras >> linha){
            if (palavraUsuario == linha){
                return true;
            }
        }
    
    cout << "Palavra invalida..." << endl;
    return false;
    }

    cout << "ERRO! Arquivo não conseguiu ser aberto!" << endl;
    return false;
}

bool Sistema::comparacaoUsuarioMaquina(string palavraUsuario, string palavraMaquina) {
    char resultado[6] = {'_', '_', '_', '_', '_', '_'};
    bool letrasDaMaquinaJaUsadas[6] = {false, false, false, false, false, false}; 
    int acertos = 0;

    for (int i = 0; i < 6; i++) {
        if (palavraUsuario[i] == palavraMaquina[i]) {
            resultado[i] = 'O';
            letrasDaMaquinaJaUsadas[i] = true;
            acertos++;
        }
    }

    for (int i = 0; i < 6; i++) {
        if (resultado[i] == 'O') continue; 

        for (int j = 0; j < 6; j++) {
            if (palavraUsuario[i] == palavraMaquina[j] && !letrasDaMaquinaJaUsadas[j]) {
                resultado[i] = 'X';
                letrasDaMaquinaJaUsadas[j] = true;
                break;
            }
        }
    }

    for (int i = 0; i < 6; i++) {
        cout << resultado[i];
    }
    cout << "\n";

    if (acertos == 6) {
        return true;
    }

    return false;
}

string Sistema::entradaPalavraUsuario(){
    string palavraUsuario;

    cout << "Escreva sua palavra: " << endl;
    cin >> palavraUsuario;

    return palavraUsuario;
}

char Sistema::opcoesDeInicializacao(){
    char variavelDeInicializacao;
    cout << "Iniciar partida(1) --- Regras(2) --- Sair do jogo(0)" << endl;
    cin >> variavelDeInicializacao;

    while (variavelDeInicializacao != '1' && 
        variavelDeInicializacao != '2' && 
        variavelDeInicializacao != '0'){
        cout << "ERRO: Opcao inexistente..." << endl;
        cout << "Iniciar partida(1) --- Regras(2) --- Sair do jogo(0)" << endl;
        cin >> variavelDeInicializacao;
    }

    return variavelDeInicializacao;
}

void Sistema::regras(){
    cout << "==================REGRAS==================" << endl;
    cout << endl;
    cout << " OBJETIVO: Descubra a palavra secreta!" << endl;
    cout << " Voce tem um numero limitado de tentativas." << endl;
    cout << endl;
    cout << " --- LEGENDA DO FEEDBACK ---" << endl;
    cout << " [ O ] -> ACERTOU! A letra esta na posicao correta." << endl;
    cout << " [ X ] -> QUASE! A letra existe, mas noutro lugar." << endl;
    cout << " [ _ ] -> ERROU! A letra nao existe na palavra." << endl;
    cout << "==========================================" << endl;
    cout << endl;
    return;
}

int Sistema::dificuldade(){
    char dificuldade;
    cout << "Escolha a dificuldade:" << endl;
    cout << "1-Facil(10 tentativas)\n2-Medio(7 tentativas)\n3-Dificil(4 tentativas)" << endl;
    cin >> dificuldade;

    while (dificuldade != '1' && 
        dificuldade != '2' && 
        dificuldade != '3'){
        cout << "ERRO: Opcao inexistente..." << endl;
        cout << "1-Facil(10 tentativas)\n2-Medio(7 tentativas)\n3-Dificil(4 tentativas)" << endl;
        cin >> dificuldade;
    }

    map<char, int> tentativas;

    tentativas['1'] = 10;
    tentativas['2'] = 7;
    tentativas['3'] = 4;

    return tentativas[dificuldade];
}
