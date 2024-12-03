// Escreva um programa que leia 30 números inteiros e armazene-os em um vetor A e leia também um
// inteiro n. Em seguida seu programa deve calcular e imprimir a quantidade de vezes que o valor n aparece
// em A.

#include <stdio.h>

int main()
{
    int vetorA[30];
    int n, i, cont;

    for (i = 0; i < 30; i++)
    {
        printf("\nDigite o %do numero: ", i + 1);
        scanf("%d", &vetorA[i]);
    }

    printf("Qual valor vc quer saber quantas vezes apareceu messe vetor? \n");
    scanf("%d", &n);

    for (i = 0; i < 30; i++)
    {
        if (n == vetorA[i])
        {
            cont++;
        }
    }

    printf("\n O seu valor apareceu %d vezes nesse vetor.", cont);
}