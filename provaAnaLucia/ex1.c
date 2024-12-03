#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dias[30];
    int i, media, numerador;

    for (i = 0; i < 30; i++)
    {
        printf("\nQual o indice do %do dia? ", i + 1);
        scanf("%d", &dias[i]);

        numerador += dias[i];
    }

    media = numerador / 30;

    if (media < 10)
    {
        printf("O programa não precisa de reformulação");
    }
    else
    {
        printf("O programa precisa ser reformulado.");
    }
}