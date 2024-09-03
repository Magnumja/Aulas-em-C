// Faça um algoritmo que receba o salário de um funcionário e o seu percentual de
// aumento. Calcule e mostre o valor do aumento e seu novo salário.



#include <stdio.h>

int main() {
    // Declaração das variáveis
    float x,y,z,w;

    // Leitura do salário atual e do percentual de aumento
    printf("Digite o salario atual do funcionario: ");
    scanf("%f", &x);
    printf("Digite o percentual de aumento (por favor, nao coloque %%): ");
    scanf("%f", &y);

    // Cálculo do valor do aumento e do novo salário
    z = (x*y)/100;
    w = (x+z);

    // Exibição do valor do aumento e do novo salário
    printf("Valor do aumento: R$%.2f\n", z);
    printf("Novo salario: R$%.2f\n", w);

    //coloquei o "2" para poder gerar a quebra de decimais

    return 0;
}