#include <stdio.h>

int main()
{
    int soma = 0;
    int i = 10;
    system("cls");

    while (i <= 50)
    {
        soma += i;
        i += 2;
    }

    printf("A soma dos valores pares entre 9 e 51 é: %d\n", soma);

    return 0;
}
