#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    float media;

    printf("De o valor de x: ");
    scanf("%i", &x);
    printf("De o valor de y: ");
    scanf("%i", &y);
    printf("De o valor de z: ");
    scanf("%i", &z);

    media = (x+y+z)/3;

    printf("resultado da media: %f ",media);

    return 0;
}