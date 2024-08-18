// Faça um algoritmo que calcule e mostre a área de um trapézio.
// Sabe-se que: A = ((base maior + base menor) * altura)/2

#include <stdio.h>
#include <stdlib.h>

int main()
{

    // declarando as variaveis, x para bm, y para bme, z para altura
    float x,y,z,area;

    // pedindo para dar o valor das respectivas variaveis
    printf("//////////////////////////////////////////////////////////////////////////////////////////////////////////////// \n");
    printf("Para calcular o valor da area do trapezio, de o valor da base maior, base menor e a altura e eu te darei o resultado da area.");
    printf("Por favor, a base maior: \n");
    scanf("%f", &x);
    printf("//////////////////////////////////////////////////////////////////////////////////////////////////////////////// \n");
    printf("Por favor, a base menor: \n");
    scanf("%f", &y);
    printf("//////////////////////////////////////////////////////////////////////////////////////////////////////////////// \n");
    printf("Por favor, a altura: \n");
    scanf("%f", &z);
    printf("//////////////////////////////////////////////////////////////////////////////////////////////////////////////// \n");
    
    // calculando a area
   
    area = (x+y)*z/2;

    // mostrando o valor da area final com quebra de dois decimais
    printf("resultado da area: %.2f ",area);

    return 0;
}
