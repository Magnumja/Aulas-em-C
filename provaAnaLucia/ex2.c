#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[12][24];
    int i, j, numerosTimesMais600 = 0, maiorQntArremessos = 0;

    for (i = 0; i < 12; i++)
    {
        int quantidadeArremesso = 0;

        for (j = 0; j < 24; j++)
        {
            printf("\nQuantos arremessos errados o %do time fez no %da partida? ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);

            quantidadeArremesso += matriz[i][j];
            if (matriz[i][j] > maiorQntArremessos)
            {
                maiorQntArremessos = matriz[i][j];
            }
        }

        if (quantidadeArremesso > 600)
        {
            numerosTimesMais600++;
        }
    }
    printf("\nQuantidade de times que tiveram arremessos errados acima de 600: %d", numerosTimesMais600);
    printf("\nMaior quantidade de arremessos errados que um time fez: %d", maiorQntArremessos);
}