//Faça um algoritmo que receba três notas de um aluno e seus respectivos pesos. Calcule
// e mostre a média ponderada.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,p1,p2,p3;
    float media;

    printf("De o valor de x: ");
    scanf("%i", &x);
    printf("De o valor de y: ");
    scanf("%i", &y);
    printf("De o valor de z: ");
    scanf("%i", &z);


    printf("De o valor de peso1: ");
    scanf("%i", &p1);
    printf("De o valor de peso2: ");
    scanf("%i", &p2);
    printf("De o valor de peso3: ");
    scanf("%i", &p3);
    

    media = ((x*p1)+(y*p2)+(z*p3))/(p1+p2+p3);

    printf("resultado da media: %f ",media);

    return 0;
}
