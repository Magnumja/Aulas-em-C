#include <stdio.h>

int main()
{
    int matriz[5][5];
    int maiorLinha[5], menorColuna[5];

    
    printf("Digitee os valores da matriz 5x5:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    // a) 
    for (int i = 0; i < 5; i++)
    {
        maiorLinha[i] = matriz[i][0];
        for (int j = 1; j < 5; j++)
        {
            if (matriz[i][j] > maiorLinha[i])
            {
                maiorLinha[i] = matriz[i][j];
            }
        }
    }

    // b) 
    for (int j = 0; j < 5; j++)
    {
        menorColuna[j] = matriz[0][j];
        for (int i = 1; i < 5; i++)
        {
            if (matriz[i][j] < menorColuna[j])
            {
                menorColuna[j] = matriz[i][j];
            }
        }
    }

    // Exibir resultados
     printf("\nMaior valor em ada linha:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Linha %d: %d\n", i + 1, maiorLinha[i]);
    }

    printf("\nMenor valor em cada coluna:\n");
    for (int j = 0; j < 5; j++)
    {
        printf("Coluna %d: %d\n", j + 1, menorColuna[j]);
    }

    return 0;
}
