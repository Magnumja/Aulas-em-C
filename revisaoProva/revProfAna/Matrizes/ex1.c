#include <stdio.h>

int main()
{
    int matriz[3][4];
    int pares = 0, impares = 0;

    
    printf("Digite 12 números inteiros para preencher a matriz 3x4:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            
            if (matriz[i][j] % 2 == 0)
            {
                pares++;
            }
            else
            {
                impares++;
            }
        }
    }

    
    printf("\nMatriz 3x4:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Exibição dos resultados
    printf("\nQuantidade de valores pares: %d\n", pares);
    printf("Quantidade de valores ímpares: %d\n", impares);

    return 0;
}
