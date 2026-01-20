#ifndef UTILS_H
#define UTILS_H
#include <string>

struct Sistema{
    std::string palavraChave();
    bool verificacaoPalavraUsuario();
};

struct Usuario{
    std::string entradaPalavraUsuario();
};

#endif