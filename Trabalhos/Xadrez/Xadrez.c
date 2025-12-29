#include <stdio.h>

// -----------------------------
// Função recursiva da Torre
// -----------------------------
void moverTorre(int casas)
{
    if (casas == 0)
        return;            // Base da recursão
    printf("Cima\n");      // Movimento da Torre para cima
    moverTorre(casas - 1); // Chamada recursiva diminuindo 1 casa
}

// -----------------------------
// Função recursiva da Rainha
// -----------------------------
void moverRainha(int casas)
{
    if (casas == 0)
        return;             // Base da recursão
    printf("Direita\n");    // Movimento da Rainha para direita
    moverRainha(casas - 1); // Chamada recursiva diminuindo 1 casa
}

// -----------------------------
// Função recursiva do Bispo com loops aninhados
// -----------------------------
void moverBispo(int casas)
{
    if (casas == 0)
        return; // Base da recursão
    for (int i = 0; i < 1; i++)
    { // Loop externo (vertical)
        for (int j = 0; j < 1; j++)
        {                        // Loop interno (horizontal)
            printf("Cima\n");    // Passo vertical
            printf("Direita\n"); // Passo horizontal
        }
    }
    moverBispo(casas - 1); // Chamada recursiva
}

// -----------------------------
// Função do Cavalo (loops complexos)
// -----------------------------
void moverCavalo(int movimentos)
{
    for (int m = 0; m < movimentos; m++)
    {
        int cont = 0;
        while (1)
        {
            printf("Cima\n");
            cont++;
            if (cont == 2)
                break; // Duas casas para cima
        }
        printf("Direita\n"); // Uma casa para direita
    }
}

// -----------------------------
// Função principal
// -----------------------------
int main()
{
    int casasTorre = 3;       // Número de casas que a Torre vai subir
    int casasRainha = 3;      // Número de casas que a Rainha vai mover
    int casasBispo = 3;       // Número de casas que o Bispo vai mover diagonal
    int movimentosCavalo = 2; // Quantos "L" o Cavalo vai fazer

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo);
    printf("\n");

    printf("Movimento do Cavalo:\n");
    moverCavalo(movimentosCavalo);
    printf("\n");

    return 0;
}
