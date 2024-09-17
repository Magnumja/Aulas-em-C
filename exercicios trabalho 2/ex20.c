#include <stdio.h>

int main()
{
    int numero, quantidade = 0, soma = 0;
    float media;

    do
    {
        printf("Digite um número inteiro positivo (ou um número negativo para sair): ");
        scanf("%d", &numero);

        if (numero >= 0)
        {
            soma += numero;
            quantidade++;
        }
    } while (numero >= 0);

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
