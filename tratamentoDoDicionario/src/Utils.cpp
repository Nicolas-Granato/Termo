#include "Utils.h"
#include <fstream>
#include <iostream> 

using namespace std;

int Sistema::contarCaracter(string palavra) {
    int total = 0;
    for(int i = 0; palavra[i] != '\0'; i++){
        total++;
    }
    return total;
}

void Sistema::novoArquivo() {
    string linha;
    ifstream arquivoDeEntrada("tratamentoDoDicionario\\dicionarioSemAcento(bruto).txt");
    ofstream arquivoDeSaida("dicionarioTratado.txt");

    if (!arquivoDeEntrada.is_open()) {
        cout << "Erro: Nao foi possivel abrir o arquivo de entrada." << endl;
        return;
    }

    while(arquivoDeEntrada >> linha) {
        if (contarCaracter(linha) == 6) {
            arquivoDeSaida << linha << endl;
        }
    }

    arquivoDeEntrada.close();
    arquivoDeSaida.close();
}
