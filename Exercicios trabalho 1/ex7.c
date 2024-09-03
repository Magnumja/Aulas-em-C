// Faça um algoritmo que calcule e mostre a área de um triângulo.
// Sabe-se que A = (base*altura)/2

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,area;

    printf("De o valor da base: ");
    scanf("%i", &x);
    printf("De o valor da altura: ");
    scanf("%i", &y);
   
    area = (x*y)/2;


    printf("resultado da area: %i ",area);

    return 0;
}
