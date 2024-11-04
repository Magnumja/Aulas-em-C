#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, quantidade = 0, soma = 0;
    float media;
    system("cls");

    for (;;)
    {
        printf("Digite um número inteiro positivo (ou um número negativo para sair): ");
        scanf("%d", &numero);

        if (numero < 0)
        {
            break;
        }

        soma += numero;
        quantidade++;
    }

    if (quantidade > 0)
    {
        media = (float)soma / quantidade;
        printf("Quantidade de números lidos: %d\n", quantidade);
        printf("Somatório dos números lidos: %d\n", soma);
        printf("Média dos números lidos: %.2f\n", media);
    }
    else
    {
        printf("Nenhum número positivo foi lido.\n");
    }

    return 0;
}
