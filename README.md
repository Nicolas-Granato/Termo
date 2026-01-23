# 🟩 Projeto Termo (C++)

Este repositório contém a implementação completa do jogo **Termo** (clone do Wordle), desenvolvido como trabalho para a disciplina de **Algoritmos 1**. 

O projeto é composto por dois módulos principais:
1.  🎮 **O Jogo:** A aplicação interativa onde o usuário tenta adivinhar a palavra.
2.  ⚙️ **Ferramenta de Tratamento:** Um utilitário que processa um dicionário bruto e gera um arquivo limpo com palavras de 6 letras.

## 🚀 Funcionalidades

### Do Jogo
- **Sorteio Aleatório:** Seleciona palavras de um banco de dados tratado.
- **Feedback Visual:**
  - `[ O ]` **Verde:** Letra certa na posição certa.
  - `[ X ]` **Amarelo:** Letra existe na palavra, mas em outra posição.
  - `[ _ ]` **Cinza:** Letra não existe.
- **Validação Lógica:** Algoritmo de "duas passadas" para tratar corretamente letras repetidas.
- **Dificuldade:** Níveis Fácil, Médio e Difícil (varia o número de tentativas).

### Da Ferramenta (Tratamento)
- Leitura de arquivo bruto (`.txt`).
- Filtragem de palavras baseada em contagem de caracteres (exclusivamente 6 letras).
- Geração automática do arquivo `dicionarioTratado.txt`.

## 📂 Estrutura de Pastas

A organização do projeto separa o código-fonte do jogo do código de tratamento de dados:

```text
Trab2Alg1/ (Pasta Raiz)
│
├── Termo/                          # Módulo do Jogo
│   ├── src/
│   │   ├── main.cpp                # Loop principal do jogo
│   │   ├── Utils.cpp               # Lógica de gameplay e validação
│   │   └── Utils.h                 # Cabeçalhos
│   └── dicionarioTratado.txt       # (Gerado) Arquivo final usado pelo jogo
│
├── tratamentoDoDicionario/         # Módulo da Ferramenta
│   ├── src/
│   │   ├── main.cpp                # Executável do gerador
│   │   ├── Utils.cpp               # Lógica de filtragem
│   │   └── Utils.h                 # Cabeçalhos
│   └── dicionarioSemAcento(bruto).txt  # Arquivo de entrada original
│
└── README.md
```
### ✒️ Autor
Aluno: [Nícolas Granato Lempk Barbosa]
Matrícula: [202576016]
