#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y, result, divisao, multiplicacao;
    int op;
    float soma, subtracao;

    printf("Escolha dois numeros, o primeiro: ");
    scanf("%f", &x);
    printf("o segundo: ");
    scanf("%f", &y);
    printf("Menu: \n");
    printf("1-Soma\n");
    printf("2-Subtracao\n");
    printf("3-Multiplicacao\n");
    printf("4-Divisao\n");
    printf("Escolha a Opção: ");
    scanf("%d", &op);

    switch(op)
    {
    case 1:
        soma = x+y;
        printf("O valor da soma é: %.2f\n", soma);
        break;
    case 2:
        subtracao = x-y;
        printf("O valor da subtracao é: %.2f\n", subtracao);
        break;
    case 3:
        multiplicacao = x*y;
        printf("O valor d sua multiplicacao é: %.2f\n", multiplicacao);
        break;
    case 4:
        if (y != 0)
        {
            divisao = x/y;
            printf("O valor da sua divisao é: %.2f\n", divisao);
        }
        else
        {
            printf("Erro: Divisao por zero não é permitida.\n");
        }
        break;
    default:
        printf("Opção inválida.\n");
        break;
    }

    return 0;
}

