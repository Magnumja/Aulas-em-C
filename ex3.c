//Faça um algoritmo que receba duas notas, calcule e mostre a média ponderada dessas
// notas, considerando peso 2 para a primeira nota e peso 3 para a segunda nota.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,p1,p2;
    float media;

    printf("De o valor de x: ");
    scanf("%i", &x);
    printf("De o valor de y: ");
    scanf("%i", &y);
   
    p1 = 2;
    p2 = 3;

    media = ((x*p1)+(y*p2))/(p1+p2);

    printf("resultado da media: %f ",media);

    return 0;
}
