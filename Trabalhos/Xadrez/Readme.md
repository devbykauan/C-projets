# Chess Moves Simulator

Este é o projeto final da disciplina de programação em C da faculdade.
O objetivo é simular os movimentos de quatro peças de xadrez utilizando **recursividade**, **loops aninhados** e **loops complexos**, com saída organizada no console.

---

## Objetivos do projeto

- Praticar **recursividade** em C
- Praticar **loops aninhados** e **controle de fluxo** (`break`, `continue`)
- Simular movimentos de peças de xadrez de forma didática
- Produzir um código **comentado e legível**, com boas práticas

---

## Descrição das peças e lógica implementada

### Torre
- Movimento: vertical (para cima)
- Implementação: **função recursiva**
- A cada casa, imprime `"Cima"` no console
- A recursão continua até atingir o número de casas definido no código

### Rainha
- Movimento: horizontal (para a direita)
- Implementação: **função recursiva**
- A cada casa, imprime `"Direita"` no console
- A recursão continua até atingir o número de casas definido

### Bispo
- Movimento: diagonal (cima + direita)
- Implementação: **função recursiva** com **loops aninhados**
  - Loop externo: vertical
  - Loop interno: horizontal
- Imprime `"Cima"` e `"Direita"` para cada passo da diagonal

### Cavalo
- Movimento: em “L” (duas casas para cima + uma para a direita)
- Implementação: **loops complexos com múltiplas variáveis e controle de fluxo**
- Imprime cada passo do movimento, usando `break` para controlar o final do L

---

## Estrutura de pastas do projeto

faculdade/
└── trabalhos/
└── xadrez/
├── xadrez.c # Código-fonte do projeto
└── README.md # Este arquivo


---

## Como compilar e executar

1. Abra o terminal na pasta `xadrez`
2. Compile o código:

gcc xadrez.c -o xadrez

3. Execute o programa:

./xadrez       # Linux/Mac
xadrez.exe     # Windows
