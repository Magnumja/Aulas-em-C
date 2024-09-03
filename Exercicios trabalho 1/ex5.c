// Faça um algoritmo que receba o salário de um funcionário, calcule e mostre o novo
// salário, sabendo que este recebeu 25% de aumento.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    float desc;

    printf("De o valor do seu salario: ");
    scanf("%i", &x);
    
    
    desc = x*1.25;


    printf("resultado do novo salario: %f ", desc);

    return 0;
}
