#include <stdio.h>
#include <time.h>

int main()
{
    int faltas[20][38];
    int i, j, somaFaltas, acimaFaltas = 0, numerador = 0, maiorFalta = 0, mediaFaltas;

    srand(time(NULL));

    for (i = 0; i < 20; i++)
    {
        somaFaltas = 0;

        for (j = 0; j < 38; j++)
        {
            printf("Quantas faltas o %do time fez no %d jogo: ", i + 1, j + 1);
            faltas[i][j] = rand() % 25 + 1; 
            printf("%d\n", faltas[i][j]);

            somaFaltas += faltas[i][j];
            numerador += faltas[i][j];

            if (faltas[i][j] > maiorFalta)
            {
                maiorFalta = faltas[i][j];
            }
        }

        printf("O %d time teve um total de %d faltas nas 38 partidas.\n", i + 1, somaFaltas);

        if (somaFaltas > 300)
        {
            acimaFaltas++;
        }
    }

    mediaFaltas = numerador / (20 * 38); // Calcula a média total de faltas
    printf("A quantidade de times que obtiveram mais de 300 faltas são: %d\n", acimaFaltas);
    printf("A média de faltas do campeonato: %d\n", mediaFaltas);
    printf("A maior quantidade de faltas em uma única partida foi: %d\n", maiorFalta);

    return 0;
}
