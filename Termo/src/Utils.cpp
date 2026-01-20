#include <iostream>
#include <fstream>
#include <random>
#include <string>
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
        string primeiraLinha;
        getline(listaDePalavras, primeiraLinha);

        int bytesPrimeiraLinha = listaDePalavras.tellg();

        if (bytesPrimeiraLinha <= 0){
            cout << "ERRO!!! Byte não encontrado!" << endl;
            return;
        }

        int posicaoByte = bytesPrimeiraLinha * indicePalavra;

        listaDePalavras.seekg(posicaoByte, ios::beg);

        listaDePalavras >> palavraAlvo;

        return palavraAlvo;
    }

    cout << "ERRO!!! Arquivo inexistente!" << endl;
    return;
}

string Usuario::entradaPalavraUsuario(){
    string palavraUsuario;

    cout << "Escreva sua palavra: " << endl;
    cin >> palavraUsuario;

    
}