#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Estrutura da carta
typedef struct
{
    char nome[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade;
    float pib_per_capita;
} Carta;

// Menu de atributos (dinamico)
void mostrar_menu(int excluido)
{
    printf("\nEscolha um atributo para comparar:\n\n");

    if (excluido != 1)
        printf("1 - Populacao\n");
    if (excluido != 2)
        printf("2 - Area\n");
    if (excluido != 3)
        printf("3 - PIB\n");
    if (excluido != 4)
        printf("4 - Pontos Turisticos\n");
    if (excluido != 5)
        printf("5 - Densidade Demografica\n");
    if (excluido != 6)
        printf("6 - PIB per Capita\n");

    printf("\nOpcao: ");
}

// Retorna valor do atributo
float obter_valor(Carta c, int atributo)
{
    switch (atributo)
    {
    case 1:
        return (float)c.populacao;
    case 2:
        return c.area;
    case 3:
        return c.pib;
    case 4:
        return (float)c.pontos_turisticos;
    case 5:
        return c.densidade;
    case 6:
        return c.pib_per_capita;
    default:
        return 0;
    }
}

// Nome do atributo
void nome_atributo(int atributo)
{
    switch (atributo)
    {
    case 1:
        printf("Populacao");
        break;
    case 2:
        printf("Area");
        break;
    case 3:
        printf("PIB");
        break;
    case 4:
        printf("Pontos Turisticos");
        break;
    case 5:
        printf("Densidade Demografica");
        break;
    case 6:
        printf("PIB per Capita");
        break;
    }
}

int main()
{
    srand(time(NULL));

    // Banco de cartas (lista completa)
    Carta cartas[] = {
        {"Brasil", 203000000, 8516000, 1900, 50, 23.8, 9360},
        {"Argentina", 46000000, 2780000, 640, 40, 16.5, 13900},
        {"Canada", 39000000, 9985000, 2100, 45, 3.9, 53800},
        {"Alemanha", 83000000, 357000, 4200, 60, 232.0, 50600},
        {"Japao", 125000000, 378000, 5100, 55, 330.0, 40800},
        {"Estados Unidos", 331000000, 9834000, 25000, 70, 33.7, 75500},
        {"Mexico", 126000000, 1964000, 1400, 35, 64.0, 11100},
        {"Italia", 59000000, 301000, 2100, 65, 195.0, 35500},
        {"Franca", 67000000, 643000, 2800, 60, 104.0, 41800},
        {"Reino Unido", 68000000, 244000, 3100, 55, 278.0, 45600}};

    int total = sizeof(cartas) / sizeof(cartas[0]);

    // Sorteio de duas cartas diferentes
    int i1 = rand() % total;
    int i2;
    do
    {
        i2 = rand() % total;
    } while (i1 == i2);

    Carta carta1 = cartas[i1];
    Carta carta2 = cartas[i2];

    int atributo1, atributo2;

    printf("\n=== SUPER TRUNFO - NIVEL MESTRE ===\n\n");

    printf("Cartas sorteadas:\n");
    printf("Carta 1: %s\n", carta1.nome);
    printf("Carta 2: %s\n", carta2.nome);

    // Escolha dos atributos
    mostrar_menu(0);
    scanf("%d", &atributo1);

    mostrar_menu(atributo1);
    scanf("%d", &atributo2);

    // Valores
    float c1_a1 = obter_valor(carta1, atributo1);
    float c2_a1 = obter_valor(carta2, atributo1);
    float c1_a2 = obter_valor(carta1, atributo2);
    float c2_a2 = obter_valor(carta2, atributo2);

    // Soma (densidade invertida)
    float soma1 = 0, soma2 = 0;

    soma1 += (atributo1 == 5) ? (1 / c1_a1) : c1_a1;
    soma2 += (atributo1 == 5) ? (1 / c2_a1) : c2_a1;

    soma1 += (atributo2 == 5) ? (1 / c1_a2) : c1_a2;
    soma2 += (atributo2 == 5) ? (1 / c2_a2) : c2_a2;

    // Resultado
    printf("\n--- RESULTADO DA COMPARACAO ---\n");

    printf("\nAtributo 1: ");
    nome_atributo(atributo1);
    printf("\n%s: %.2f\n", carta1.nome, c1_a1);
    printf("%s: %.2f\n", carta2.nome, c2_a1);

    printf("\nAtributo 2: ");
    nome_atributo(atributo2);
    printf("\n%s: %.2f\n", carta1.nome, c1_a2);
    printf("%s: %.2f\n", carta2.nome, c2_a2);

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", carta1.nome, soma1);
    printf("%s: %.2f\n", carta2.nome, soma2);

    printf("\nResultado final: ");
    if (soma1 > soma2)
    {
        printf("%s venceu!\n", carta1.nome);
    }
    else if (soma2 > soma1)
    {
        printf("%s venceu!\n", carta2.nome);
    }
    else
    {
        printf("Empate!\n");
    }

    return 0;
}
