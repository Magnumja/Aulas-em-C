#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LANCAMENTOS 50
#define FACES 6

int main()
{
    int lancamentos[LANCAMENTOS]; // Vetor para armazenar os lançamentos
    int ocorrencias[FACES] = {0}; // Contador para cada face (1 a 6)
    int i, faceMaisFrequente, faceMenosFrequente;
    int maiorOcorrencia = 0, menorOcorrencia = LANCAMENTOS;

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Realiza os lançamentos e armazena no vetor
    for (i = 0; i < LANCAMENTOS; i++)
    {
        lancamentos[i] = (rand() % FACES) + 1; // Gera um número entre 1 e 6
        ocorrencias[lancamentos[i] - 1]++;     // Incrementa o contador correspondente
    }

    // Determina a face mais frequente e a menos frequente
    for (i = 0; i < FACES; i++)
    {
        if (ocorrencias[i] > maiorOcorrencia)
        {
            maiorOcorrencia = ocorrencias[i];
            faceMaisFrequente = i + 1;
        }
        if (ocorrencias[i] < menorOcorrencia)
        {
            menorOcorrencia = ocorrencias[i];
            faceMenosFrequente = i + 1;
        }
    }

    // Exibe os resultados
    printf("Resultados dos 50 lançamentos:\n");
    for (i = 0; i < LANCAMENTOS; i++)
    {
        printf("%d ", lancamentos[i]);
        if ((i + 1) % 10 == 0)
        {
            printf("\n"); // Quebra de linha a cada 10 lançamentos
        }
    }

    printf("\n\nOcorrências de cada face:\n");
    for (i = 0; i < FACES; i++)
    {
        printf("Face %d: %d vezes\n", i + 1, ocorrencias[i]);
    }

    printf("\nFace que mais ocorreu: Face %d com %d ocorrências\n", faceMaisFrequente, maiorOcorrencia);
    printf("Face que menos ocorreu: Face %d com %d ocorrências\n", faceMenosFrequente, menorOcorrencia);

    return 0;
}
