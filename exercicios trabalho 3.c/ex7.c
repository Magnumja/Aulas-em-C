
#include <stdio.h>

int main()
{
    int numero;
    int maior = -1;
    int menor = -1;

    printf("Digite os números inteiros positivos (digite -1 para terminar):\n");

    for (;;)
    {
        scanf("%d", &numero);

        if (numero == -1)
        {
            break;
        }

        if (numero > 0)
        {
            if (maior == -1 || numero > maior)
            {
                maior = numero;
            }
            if (menor == -1 || numero < menor)
            {
                menor = numero;
            }
        }
    }

    if (maior != -1 && menor != -1)
    {
        printf("O menor valor é: %d\n", menor);
        printf("O maior valor é: %d\n", maior);
    }
    else
    {
        printf("Nenhum número válido foi digitado.\n");
    }

    return 0;
}
