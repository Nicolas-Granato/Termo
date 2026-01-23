#ifndef UTILS_H
#define UTILS_H
#include <string>

struct Sistema{
    std::string palavraChave();
    bool verificacaoPalavraUsuario(std::string palavraUsuario);
    bool comparacaoUsuarioMaquina(std::string palavraUsuario, std::string palavraMaquina);
    char opcoesDeInicializacao();
    void regras();
    int dificuldade();
    std::string entradaPalavraUsuario();
};

#endif