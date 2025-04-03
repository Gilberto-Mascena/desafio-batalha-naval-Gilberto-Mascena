#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    int tabuleiro[10][10] = {0}; // Inicializa o tabuleiro com 0 (vazio)

    /*
     Atribuíção de valores manualmente para representar os navios no tabuleiro.
     Exemplo de posicionamento de navios:
     Navio 1 (horizontal)

     tabuleiro[4][3] = 3; // Parte do navio
     tabuleiro[4][4] = 3; // Parte do navio
     tabuleiro[4][5] = 3; // Parte do navio
     */

    // Laços aninhados para preencher o tabuleiro com navios
    // Navio 1 (horizontal)
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == 0 && j == 0)
            {
                tabuleiro[4][3] = 3; // Parte do navio
            }
            else if (i == 0 && j == 1)
            {
                tabuleiro[4][4] = 3; // Parte do navio
            }
            else if (i == 0 && j == 2)
            {
                tabuleiro[4][5] = 3; // Parte do navio
            }
        }
    }

    /*
    Exemplo de atribuição manual para o segundo navio (vertical)
    Navio 2 (vertical)

    tabuleiro[6][4] = 3; // Parte do navio
    tabuleiro[7][4] = 3; // Parte do navio
    tabuleiro[8][4] = 3; // Parte do navio
    */

    // Exemplo de preenchimento do tabuleiro com laços aninhados
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == 6 && j == 4)
            {
                tabuleiro[i][j] = 3; // Parte do navio
            }
            else if (i == 7 && j == 4)
            {
                tabuleiro[i][j] = 3; // Parte do navio
            }
            else if (i == 8 && j == 4)
            {
                tabuleiro[i][j] = 3; // Parte do navio
            }
        }
    }
    // Exibe o tabuleiro
    printf("Tabuleiro:\n");
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    // Exibe as coordenadas dos navios
    printf("\nCoordenadas dos Navios:\n");
    printf("Navio 1: (4,3) (4,4) (4,5)\n");
    printf("Navio 2: (6,4) (7,4) (8,4)\n");

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1

    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
