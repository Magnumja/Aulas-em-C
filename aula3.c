#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;

    printf("Me de o valor de dois numeros e te direi qual � maior. \n");
    printf("Primeiro numero: \n");
    scanf("%d", &x);
    printf("Segundo n�mero: \n");
    scanf("%d", &y);

    if (x>y)
    {
        printf("O maior numero �: %d\n ", x);
    }
    else if(y>x)
    {
        printf("O maior numero �: %d\n ", y);
    }
    else
    {
        printf("Os numeros sao iguais");
    }

    return 0;
}
