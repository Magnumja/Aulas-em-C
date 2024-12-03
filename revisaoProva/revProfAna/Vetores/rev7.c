// Escreva um programa que leia um vetor de inteiros de 20 elementos e um inteiro x. Em seguida deverá
// trocar por x todos os números do vetor menores que x. O programa deverá imprimir o vetor resultante.

#include <stdio.h>
#include <time.h>
int main()
{
    int vetor[20];
    int x, i;

    srand(time(NULL));

    printf("\nOs numeros foram: \n ");

    for (i = 0; i < 20; i++)
    {
        vetor[i] = (rand() % 100) + 1;
        printf("%d\n", vetor[i]);
    }

    x = (rand() % 100) + 1;

    printf("\nAgora o novo vetor q tem o valores menor que X vai ser trocado por ele, que eh %d\n", x);

    for (i = 0; i < 20; i++)
    {
        if (vetor[i] < x)
        {
            vetor[i] = x;
            printf("%d\n", vetor[i]);
        }
        else
        {
            printf("%d\n", vetor[i]);
        }
        
    }

}