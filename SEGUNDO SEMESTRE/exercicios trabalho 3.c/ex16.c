#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, fatorial = 1;
    system("cls");

    printf("Me fale o numero que voce deseja calcular o fatorial: ");
    scanf("%d", &numero);

    for (int x = numero; x > 1; x--)
    {
        fatorial *= x;
    }

    printf("O resultado é: %d\n", fatorial);

    return 0;
}
