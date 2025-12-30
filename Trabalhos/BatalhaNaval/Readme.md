# Batalha Naval — Habilidades Especiais e Áreas de Efeito

Este projeto faz parte da disciplina de **Programação em C** e corresponde ao **Desafio Nível Mestre**, cujo objetivo é aplicar conceitos de **vetores, matrizes, loops aninhados e estruturas condicionais** por meio da simulação de habilidades especiais em um jogo de Batalha Naval.

O programa exibe um tabuleiro 10x10 no console e demonstra visualmente as áreas de efeito de diferentes habilidades especiais.

---

## 🎯 Objetivos do Projeto

- Trabalhar com **matrizes bidimensionais**
- Utilizar **loops aninhados** para construção e manipulação de matrizes
- Aplicar **condicionais** para definir áreas de efeito
- Representar visualmente habilidades especiais no tabuleiro
- Produzir um código **organizado, comentado e legível**

---

## 🗺️ Representação do Tabuleiro

O tabuleiro possui tamanho **10x10** e utiliza valores inteiros para representar cada elemento:

- `0` → Água
- `3` → Navio
- `5` → Área afetada pela habilidade

Uma legenda é exibida no console antes do tabuleiro para facilitar a interpretação da saída.

---

## ✨ Habilidades Implementadas

Cada habilidade é representada por uma **matriz 5x5**, construída dinamicamente com loops e condicionais.

### 🔻 Cone
- Formato de cone apontado para baixo
- Origem no topo da matriz
- A área se expande conforme avança para baixo

### ➕ Cruz
- Formato de cruz
- Origem no centro da matriz
- Afeta linhas e colunas centrais

### 🔶 Octaedro
- Representação frontal de um octaedro
- Formato semelhante a um losango
- Origem no centro da matriz

---

## 🧩 Funcionamento Geral

1. O tabuleiro é inicializado com água (`0`)
2. Alguns navios (`3`) são posicionados diretamente no código
3. As matrizes das habilidades são criadas dinamicamente
4. Cada habilidade é sobreposta ao tabuleiro a partir de um ponto de origem
5. As áreas afetadas são marcadas com o valor `5`
6. O tabuleiro final é exibido no console

Não há entrada de dados pelo usuário, conforme especificado no desafio.

---

## 🖥️ Como Compilar e Executar

### Compilação
1. No terminal, dentro da pasta do projeto:

gcc BatalhaNaval.c -o batalha

2. Execução:

Windows = batalha.exe
Linux / macOS = ./batalha

---

## Estrutura de pastas

Trabalhos/
└── BatalhaNaval/
├── BatalhaNaval.c
└── README.md
