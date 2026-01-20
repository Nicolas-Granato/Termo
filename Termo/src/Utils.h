#ifndef UTILS_H
#define UTILS_H
#include <string>

struct Sistema{
    std::string palavraChave();
    bool verificacaoPalavraUsuario(string palavraUsuario);
    bool comparacaoUsuarioMaquina(string palavraUsuario, string palavraChave());
};

struct Usuario{
    std::string entradaPalavraUsuario();
};

#endif