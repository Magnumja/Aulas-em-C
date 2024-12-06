#include <stdio.h>

int main()
{
    int escolha;

    printf("Escolha uma opção:\n");
    printf("1. Calcular área do quintal, piscina e área livre\n");
    printf("2. Soma dos n primeiros termos de uma PA\n");
    printf("3. Calcular salário final com comissão\n");
    printf("4. Quilometragem e consumo de combustível\n");
    printf("5. Latas de tinta e custo para pintar uma parede\n");
    printf("6. Conversão de moeda\n");
    printf("7. Conversão de metros para outras unidades\n");
    printf("Opção: ");
    scanf("%d", &escolha);

    if (escolha == 1)
    {
        float largura_quintal, comprimento_quintal, largura_piscina, comprimento_piscina;
        printf("Digite a largura e o comprimento do quintal: ");
        scanf("%f %f", &largura_quintal, &comprimento_quintal);
        printf("Digite a largura e o comprimento da piscina: ");
        scanf("%f %f", &largura_piscina, &comprimento_piscina);

        float area_quintal = largura_quintal * comprimento_quintal;
        float area_piscina = largura_piscina * comprimento_piscina;
        float area_livre = area_quintal - area_piscina;

        printf("Área do quintal: %.2f\n", area_quintal);
        printf("Área da piscina: %.2f\n", area_piscina);
        printf("Área livre: %.2f\n", area_livre);
    }
    else if (escolha == 2)
    {
        float a1, an, n;
        printf("Digite o primeiro termo (a1), o último termo (an) e o número de termos (n): ");
        scanf("%f %f %f", &a1, &an, &n);

        float soma = (a1 + an) * n / 2;
        printf("A soma dos termos é: %.2f\n", soma);
    }
    else if (escolha == 3)
    {
        float salario_fixo, vendas;
        printf("Digite o salário fixo e o valor das vendas: ");
        scanf("%f %f", &salario_fixo, &vendas);

        float comissao = vendas * 0.04;
        float salario_final = salario_fixo + comissao;

        printf("Comissão: %.2f\n", comissao);
        printf("Salário final: %.2f\n", salario_final);
    }
    else if (escolha == 4)
    {
        float tempo, velocidade;
        printf("Digite o tempo gasto (horas) e a velocidade média (km/h): ");
        scanf("%f %f", &tempo, &velocidade);

        float distancia = tempo * velocidade;
        float litros = distancia / 12;

        printf("Distância percorrida: %.2f km\n", distancia);
        printf("Combustível gasto: %.2f litros\n", litros);
    }
    else if (escolha == 5)
    {
        float largura, altura;
        printf("Digite a largura e a altura da parede (em metros): ");
        scanf("%f %f", &largura, &altura);

        float area = largura * altura;
        int latas = (int)(area / 10 + 0.9999); // Arredondamento para cima
        float custo = latas * 50;

        printf("Área da parede: %.2f m²\n", area);
        printf("Latas de tinta necessárias: %d\n", latas);
        printf("Custo total: R$ %.2f\n", custo);
    }
    else if (escolha == 6)
    {
        float reais;
        printf("Digite o valor em reais (R$): ");
        scanf("%f", &reais);

        float euros = reais / 6.00;
        float pesos = reais * 171.04;
        float ienes = reais * 26.91;

        printf("Valor em Euros: €%.2f\n", euros);
        printf("Valor em Pesos Argentinos: %.2f ARS\n", pesos);
        printf("Valor em Ienes: ¥%.2f\n", ienes);
    }
    else if (escolha == 7)
    {
        float metros;
        printf("Digite o valor em metros: ");
        scanf("%f", &metros);

        float decimetros = metros * 10;
        float centimetros = metros * 100;
        float milimetros = metros * 1000;

        printf("Decímetros: %.2f\n", decimetros);
        printf("Centímetros: %.2f\n", centimetros);
        printf("Milímetros: %.2f\n", milimetros);
    }
    else
    {
        printf("Opção inválida!\n");
    }

    return 0;
}
