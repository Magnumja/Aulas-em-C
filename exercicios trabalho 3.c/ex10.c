#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, somaSalarios = 0, maiorSalario = 0;
    int numFilhos, totalHabitantes = 0, somaFilhos = 0, pessoasAte1200 = 0;

    printf("Informe o salário e o número de filhos dos habitantes (digite um salário negativo para finalizar):\n");

    for (;;)
    {
        printf("Informe o salario: ");
        scanf("%f", &salario);

        if (salario < 0)
        {
            break;
        }

        printf("Informe o numero de filhos: ");
        scanf("%d", &numFilhos);

        somaSalarios += salario;
        somaFilhos += numFilhos;
        totalHabitantes++;

        if (salario > maiorSalario)
        {
            maiorSalario = salario;
        }

        if (salario <= 1200)
        {
            pessoasAte1200++;
        }
    }

    if (totalHabitantes > 0)
    {
        float mediaSalarial = somaSalarios / totalHabitantes;
        float mediaFilhos = (float)somaFilhos / totalHabitantes;
        float percentualAte1200 = ((float)pessoasAte1200 / totalHabitantes) * 100;

        printf("\nMédia salarial da população: R$%.2f\n", mediaSalarial);
        printf("Média do número de filhos: %.2f\n", mediaFilhos);
        printf("Maior salário: R$%.2f\n", maiorSalario);
        printf("Percentual de pessoas com salário até R$1200,00: %.2f%%\n", percentualAte1200);
    }
    else
    {
        printf("Nenhum dado foi informado.\n");
    }

    return 0;
}
