// Faça um algoritmo que calcule o número fatorial de um número.
// Ex.: 5! = 1x2x3x4x5 = 120
// Lembrando que 0! =  1.

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numero, x = 0, fatorial = 1;

    printf("Me fale o numero que voce deseja calcular o fatorial: ");
    scanf("%d", &numero);

    x = numero;

    while (x > 1)
    {
        fatorial = fatorial * x;
        x -= 1;
    }

    printf("O resultado é: %d", fatorial);

    return 0;
}
