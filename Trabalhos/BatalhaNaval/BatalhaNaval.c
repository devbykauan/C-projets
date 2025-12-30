#include <stdio.h>
#include <stdlib.h>

#define TAM_TAB 10
#define TAM_HAB 5

#define AGUA 0
#define NAVIO 3
#define AREA 5

/* Exibe a legenda do tabuleiro */
void exibirLegenda()
{
    printf("\nLEGENDA:\n");
    printf("0 = Agua\n");
    printf("3 = Navio\n");
    printf("5 = Area afetada pela habilidade\n\n");
}

/* Exibe o tabuleiro */
void exibirTabuleiro(int tabuleiro[TAM_TAB][TAM_TAB])
{
    int i, j;

    printf("TABULEIRO:\n\n");
    for (i = 0; i < TAM_TAB; i++)
    {
        for (j = 0; j < TAM_TAB; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

/* Cria a matriz de habilidade em forma de CONE */
void criarCone(int cone[TAM_HAB][TAM_HAB])
{
    int i, j;
    int centro = TAM_HAB / 2;

    for (i = 0; i < TAM_HAB; i++)
    {
        for (j = 0; j < TAM_HAB; j++)
        {
            if (j >= centro - i && j <= centro + i)
            {
                cone[i][j] = 1;
            }
            else
            {
                cone[i][j] = 0;
            }
        }
    }
}

/* Cria a matriz de habilidade em forma de CRUZ */
void criarCruz(int cruz[TAM_HAB][TAM_HAB])
{
    int i, j;
    int centro = TAM_HAB / 2;

    for (i = 0; i < TAM_HAB; i++)
    {
        for (j = 0; j < TAM_HAB; j++)
        {
            if (i == centro || j == centro)
            {
                cruz[i][j] = 1;
            }
            else
            {
                cruz[i][j] = 0;
            }
        }
    }
}

/* Cria a matriz de habilidade em forma de OCTAEDRO (losango) */
void criarOctaedro(int octaedro[TAM_HAB][TAM_HAB])
{
    int i, j;
    int centro = TAM_HAB / 2;

    for (i = 0; i < TAM_HAB; i++)
    {
        for (j = 0; j < TAM_HAB; j++)
        {
            if (abs(i - centro) + abs(j - centro) <= centro)
            {
                octaedro[i][j] = 1;
            }
            else
            {
                octaedro[i][j] = 0;
            }
        }
    }
}

/* Aplica uma habilidade ao tabuleiro */
void aplicarHabilidade(
    int tabuleiro[TAM_TAB][TAM_TAB],
    int habilidade[TAM_HAB][TAM_HAB],
    int origemLinha,
    int origemColuna)
{
    int i, j;
    int offset = TAM_HAB / 2;

    for (i = 0; i < TAM_HAB; i++)
    {
        for (j = 0; j < TAM_HAB; j++)
        {

            int linhaTab = origemLinha + i - offset;
            int colunaTab = origemColuna + j - offset;

            if (habilidade[i][j] == 1)
            {
                if (linhaTab >= 0 && linhaTab < TAM_TAB &&
                    colunaTab >= 0 && colunaTab < TAM_TAB)
                {

                    if (tabuleiro[linhaTab][colunaTab] == AGUA)
                    {
                        tabuleiro[linhaTab][colunaTab] = AREA;
                    }
                }
            }
        }
    }
}

int main()
{
    int tabuleiro[TAM_TAB][TAM_TAB];
    int cone[TAM_HAB][TAM_HAB];
    int cruz[TAM_HAB][TAM_HAB];
    int octaedro[TAM_HAB][TAM_HAB];

    int i, j;

    /* Inicializa o tabuleiro com água */
    for (i = 0; i < TAM_TAB; i++)
    {
        for (j = 0; j < TAM_TAB; j++)
        {
            tabuleiro[i][j] = AGUA;
        }
    }

    /* Posiciona alguns navios fixos */
    tabuleiro[4][4] = NAVIO;
    tabuleiro[5][4] = NAVIO;
    tabuleiro[6][6] = NAVIO;

    /* Cria as habilidades */
    criarCone(cone);
    criarCruz(cruz);
    criarOctaedro(octaedro);

    /* Aplica as habilidades no tabuleiro */
    aplicarHabilidade(tabuleiro, cone, 2, 5);
    aplicarHabilidade(tabuleiro, cruz, 6, 2);
    aplicarHabilidade(tabuleiro, octaedro, 5, 7);

    /* Exibe resultado */
    exibirLegenda();
    exibirTabuleiro(tabuleiro);

    return 0;
}
