#include <stdio.h>

int main()
{
    int quantidade[10];
    float preco[10];
    float totalVendas[10];
    float somaVendas = 0, mediaVendas;
    int totalPecas = 0;

    
    for (int i = 0; i < 10; i++)
    {
        printf("Digite a quantidade de peças vendidas pelo vendedor %d: ", i + 1);
        scanf("%d", &quantidade[i]);

        printf("Digite o preço da peça vendida pelo vendedor %d: ", i + 1);
        scanf("%f", &preco[i]);

        totalVendas[i] = quantidade[i] * preco[i];
        totalPecas += quantidade[i];
        somaVendas += totalVendas[i];
    }

    // Total de peças vendidas
    printf("\nTotal de peças vndidas: %d\n", totalPecas);

    // Vendas de cada vendedor
    for (int i = 0; i < 10; i++)
    {
        printf("Vendedor %d vendeu R$ %.2f\n", i + 1, totalVendas[i]);
    }

    
    mediaVendas = somaVendas / 10;
    printf("\nValor médio de vendas: R$ %.2f\n", mediaVendas);

    
    printf("\nVendedores com valor de vendas abaixo da méda:\n");
    for (int i = 0; i < 10; i++)
    {
        if (totalVendas[i] < mediaVendas)
        {
            printf("Vendedor %d com R$ %.2f\n", i + 1, totalVendas[i]);
        }
    }

    return 0;
}
