#include <stdio.h>

int main()
{
    int vetor[10], temp;

    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (vetor[j] > vetor[j + 1])
            {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    printf("\nVetor ordenado em ordem crescente:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }

    return 0;
}
