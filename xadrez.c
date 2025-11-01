/// Movimentação das peças de xadrez - Estruturas de repetição
/// Autor: Guilherme Camargo Valese
/// Nível novato
#include <stdio.h>

int main()
{
    printf("Movimentação Torre (5 casas para a direita)\n");
    
    // Estrutura de repetição para a movimentação da Torre
    for(int i = 0; i < 5; i++)
    {
        printf("Direita\n");
    }

    // Variável utilizada na estrutura de repetição para a movimentação do bispo
    int count = 0;
    printf("\nMovimentação Bispo (5 casas na diagonal)\n");
    
    do{
        printf("Cima - Direita\n");
        count++;
    }while(count < 5);

    // Variável utilizada na estrutura de repetição para a movimentação da rainha
    int moves = 0;
    printf("\nMovimentação da Rainha (8 casas para a esquerda)\n");
    while(moves < 8)
    {
        printf("Esquerda\n");
        moves++;
    }

    return 0;
}
