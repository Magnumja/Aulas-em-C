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
    printf("Escolha a Op��o: ");
    scanf("%d", &op);

    switch(op)
    {
    case 1:
        soma = x+y;
        printf("O valor da soma �: %.2f\n", soma);
        break;
    case 2:
        subtracao = x-y;
        printf("O valor da subtracao �: %.2f\n", subtracao);
        break;
    case 3:
        multiplicacao = x*y;
        printf("O valor d sua multiplicacao �: %.2f\n", multiplicacao);
        break;
    case 4:
        if (y != 0)
        {
            divisao = x/y;
            printf("O valor da sua divisao �: %.2f\n", divisao);
        }
        else
        {
            printf("Erro: Divisao por zero n�o � permitida.\n");
        }
        break;
    default:
        printf("Op��o inv�lida.\n");
        break;
    }

    return 0;
}

