/// Movimentação das peças de xadrez - Estruturas de repetição
/// Autor: Guilherme Camargo Valese
/// Nível intermediário
#include <stdio.h>

int main()
{
    printf("Movimentação Torre (5 casas para a direita)\n");

    // Estrutura de repetição para a movimentação da Torre
    for (int i = 0; i < 4; i++)
    {
        printf("Direita\n");
    }

    // Variável utilizada na estrutura de repetição para a movimentação do bispo
    int count = 0;
    printf("Movimentação Bispo (5 casas na diagonal)\n");

    do
    {
        printf("Cima - Direita\n");
        count++;
    } while (count < 4);

    // Variável utilizada na estrutura de repetição para a movimentação da rainha
    int moves = 0;
    printf("Movimentação da Rainha (8 casas para a esquerda)\n");
    while (moves < 7)
    {
        printf("Esquerda\n");
        moves++;
    }

    // Nível Aventureiro - Movimentação do cavalo utilizando loops aninhados
    printf("\nMovimentação do Cavalo em L\n");

    for (int i = 0; i < 1; i++)
    {
        int j = 0;
        while (j < 2)
        {
            printf("Baixo\n");
            j++;
        }
        printf("Esquerda\n");
    }

    return 0;
}