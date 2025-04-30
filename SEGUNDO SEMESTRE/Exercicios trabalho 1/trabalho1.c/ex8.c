// Faça um algoritmo que calcule e mostre a área de um triângulo.
// Sabe-se que A = (base*altura)/2

#include <stdio.h>
#include <stdlib.h>

int main()
{

// declarando as variaveis, x para o lado do quadrado e area para a area do quadrilatero
    float x,area;
    printf("//////////////////////////////////////////////////////////////////////////////////////////////////////////////// \n");
    printf("Sabendo que todos os lados do quadradoo sao iguais, de o valor do lado e eu te darei o resultado da area:  ");
    scanf("%f", &x);
    printf("//////////////////////////////////////////////////////////////////////////////////////////////////////////////// \n");
    
   
    area = (x*x);


    printf("resultado da area: %.2f ",area);

    return 0;
}
