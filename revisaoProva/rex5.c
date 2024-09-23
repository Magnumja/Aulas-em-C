#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int numero;
    system("cls");

    printf("Ola, bom dia. Me informe o numero que deseja e te direi se é permitido:: ");
    scanf("%d", &numero);

    if (numero>=1 && numero<=9)
    {
        printf("Valor está na faixa permitida. \n");
    }
    else 
    {
        printf("Valor esta fora da faixa permitida. \n");
    }

    return 0;
}