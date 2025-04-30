#include <stdio.h>

int main()
{
    float vendas[12][4];
    float totalMes[12] = {0};
    float totalSemana[4] = {0};
    float totalAno = 0;
    int mesMaiorVenda = 0;

    
    printf("Digite os valores das vendas (12 meses, 4 semanas por mês):\n");
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Mês %d, Semana %d: ", i + 1, j + 1);
            scanf("%f", &vendas[i][j]);
            totalMes[i] += vendas[i][j];
            totalSemana[j] += vendas[i][j];
            totalAno += vendas[i][j];
        }
    }

    
    for (int i = 1; i < 12; i++)
    {
        if (totalMes[i] > totalMes[mesMaiorVenda])
        {
            mesMaiorVenda = i;
        }
    }

    
    printf("\nTotal vendido em cada mês:\n");
    for (int i = 0; i < 12; i++)
    {
        printf("Mês %d: R$ %.2f\n", i + 1, totalMes[i]);
    }

    printf("\nTotal vendido em cada semana durante o ano:\n");
    for (int j = 0; j < 4; j++)
    {
        printf("Semana %d: R$ %.2f\n", j + 1, totalSemana[j]);
    }

    printf("\nTotal vendido no ano: R$ %.2f\n", totalAno);
    printf("Mês com maior venda: Mês %d com R$ %.2f\n", mesMaiorVenda + 1, totalMes[mesMaiorVenda]);

    return 0;
}
