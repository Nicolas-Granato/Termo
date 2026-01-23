# 🟩 Termo em C++

Este projeto é uma implementação em C++ do popular jogo de palavras "Termo" (similar ao Wordle), desenvolvido como trabalho para a disciplina de **Algoritmos 1**.

O jogo consiste em adivinhar uma palavra secreta de 6 letras sorteada aleatoriamente de um dicionário, com um sistema de feedback visual e níveis de dificuldade.

## 🚀 Funcionalidades

- **Sorteio Aleatório:** O sistema escolhe uma palavra aleatória de um banco de dados (`dicionarioTratado.txt`) contendo milhares de verbetes.
- **Validação de Entrada:** Verifica se a palavra digitada pelo usuário existe no dicionário e se possui o tamanho correto.
- **Sistema de Feedback:**
  - `[ O ]` **Verde:** Letra correta na posição correta.
  - `[ X ]` **Amarelo:** Letra existe na palavra, mas em outra posição.
  - `[ _ ]` **Cinza:** Letra não existe na palavra (ou já foi contabilizada).
- **Tratamento de Letras Repetidas:** Lógica avançada para garantir que letras duplicadas sejam marcadas corretamente (evitando "falsos positivos").
- **Dificuldade:**
  1. Fácil (10 tentativas)
  2. Médio (7 tentativas)
  3. Difícil (4 tentativas)

## 📂 Estrutura do Projeto

O projeto segue a seguinte organização de diretórios:

```text
Termo/
│
├── dicionarioTratado.txt  # Banco de palavras (6 letras)
├── README.md              # Documentação do projeto
└── src/                   # Códigos-fonte
    ├── main.cpp           # Loop principal do jogo
    ├── Utils.cpp          # Implementação das funções lógicas
    └── Utils.h            # Declaração das estruturas e cabeçalhos