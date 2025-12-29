# Super Trunfo – Comparacoes Avancadas em C

Este projeto foi desenvolvido como parte da disciplina de **Programacao em C** da faculdade.
O objetivo e simular uma rodada do jogo Super Trunfo, realizando comparacoes avancadas entre cartas de paises utilizando estruturas de decisao da linguagem C.

---

## Objetivo do Projeto

- Aplicar estruturas condicionais (`if`, `else` e operador ternario)
- Utilizar menus dinamicos com `switch`
- Comparar dois atributos numericos diferentes
- Trabalhar com estruturas (`struct`)
- Calcular soma de atributos para definir o vencedor
- Tratar empates corretamente
- Desenvolver um codigo organizado, legivel e funcional

---

## Funcionamento do Sistema

- O programa possui um banco interno de cartas representando paises.
- No inicio da execucao, duas cartas sao sorteadas aleatoriamente.
- O jogador escolhe dois atributos diferentes para comparacao.
- Cada atributo e comparado individualmente.
- Em seguida, os valores dos dois atributos sao somados.
- A carta com maior soma vence a rodada.
- Caso as somas sejam iguais, o sistema exibe a mensagem **"Empate!"**.

### Regra Especial

- Para o atributo **Densidade Demografica**, vence a carta com o menor valor.
- Para os demais atributos, vence a carta com o maior valor.

---

## Atributos Disponiveis

1. Populacao
2. Area
3. PIB
4. Pontos Turisticos
5. Densidade Demografica
6. PIB per Capita

---

## Estrutura do Projeto

faculdade/
└── trabalhos/
    └── supertrunfo/
        ├── super_trunfo_mestre.c
        └── README.md

---

## Como Compilar e Executar

1. Abra o terminal na pasta do projeto
2. Compile o codigo:

gcc supertrunfo.c -o super_trunfo_mestre

3. Execute o programa:

./super_trunfo_mestre      # Linux / Mac
super_trunfo_mestre.exe   # Windows
