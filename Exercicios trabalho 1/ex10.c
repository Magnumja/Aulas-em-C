#include <stdio.h>

int main() {
    float salario, grat, imposto, salarionv;

    // Recebe o salário base do funcionário
    printf("Digite o salario base do funcionario: ");
    scanf("%f", &salario);

    // Calcula a gratificação de 5% sobre o salário base
    grat = salario*0.05;

    // Calcula o imposto de 7% sobre o salário base
    imposto = salario*0.07;

    // Calcula o salário a receber
    salarionv = salario+grat-imposto;

    // Exibe o salário a receber
    printf("O salario a receber: %.2f\n", salarionv);

    return 0;
}
