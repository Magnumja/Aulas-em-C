#include <stdio.h>
#include <stdlib.h>

int main()
{
    int op;
    float salario, aumento, novo_salario;
    system("cls");

    printf("Ola, bom dia. Poderia me informar qual seu salario? ");
    scanf("%f", &salario);
    system("cls");

    printf("Selecione o seu codigo de cargo por favor: \n");
    printf("1-101 \n");
    printf("2-202 \n");
    printf("3-303 \n");
    printf("4-outros \n");
    scanf("%d", &op);
    system("cls");

    switch (op)
    {
         case 1:
            aumento = salario * 0.05;
            novo_salario = aumento + salario;
            printf("Seu novo salario tem o valor de %.2f reais. \n", novo_salario);
            printf("Seu salario antigo era de %.2f reais. \n", salario);
            printf("A diferenca entre os dois foi de %.2f reais. \n", aumento);
            break;
         case 2:
            aumento = salario * 0.08;
            novo_salario = aumento + salario;
            printf("Seu novo salario tem o valor de %.2f reais. \n", novo_salario);
            printf("Seu salario antigo era de %.2f reais. \n", salario);
            printf("A diferenca entre os dois foi de %.2f reais. \n", aumento);
            break;
         case 3:
            aumento = salario * 0.1;
            novo_salario = aumento + salario;
            printf("Seu novo salario tem o valor de %.2f reais. \n", novo_salario);
            printf("Seu salario antigo era de %.2f reais. \n", salario);
            printf("A diferenca entre os dois foi de %.2f reais. \n", aumento);
            break;
         case 4:
            aumento = salario * 0.02;
            novo_salario = aumento + salario;
            printf("Seu novo salario tem o valor de %.2f reais. \n", novo_salario);
            printf("Seu salario antigo era de %.2f reais. \n", salario);
            printf("A diferenca entre os dois foi de %.2f reais. \n", aumento);
            break;
         default:
            break;
    }

    return 0;
}