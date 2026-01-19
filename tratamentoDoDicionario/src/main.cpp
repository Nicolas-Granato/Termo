#include <iostream>
#include "Utils.h"
using namespace std;

 int main(){
    cout << "Gerando novo arquivo..." << endl;
    Sistema sistema;

    try{
        sistema.novoArquivo();
    }

    catch(const exception& e){
        cout << "ERRO!!!" << endl;
        return 1;
    }
    
    cout << "Concluído! Arquivo ''dicionarioTratado.txt'' gerado!" << endl;
    return 0;
}
