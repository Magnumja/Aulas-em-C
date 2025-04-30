#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3, maior, menor;

    printf("Me informe o numero 1:");
    scanf("%d", &n1);

    printf("Me informe o numero 2:");
    scanf("%d", &n2);

    printf("Me informe o numero 3:");
    scanf("%d", &n3);

    if (n1 > n2 && n1 > n3)
    {
        maior = n1;
    }
    else if (n2 > n1 && n2 > n3)
    {
        maior = n2;
    }
    else
    {
        maior = n3;
    }

    // parte 2

    if (n1 < n2 && n1 < n3)
    {
        menor = n1;
    }
    else if (n2 < n1 && n2 < n3)
    {
        menor = n2;
    }
    else
    {
        menor = n3;
    }

    printf("O menor valor: %d e o maior: %d", menor, maior);

    return 0;
}