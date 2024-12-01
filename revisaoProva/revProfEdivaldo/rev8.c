#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num, numerador = 0, denominador = 0;
    float media;

    printf("Digite com quais numeros deseja fazer a media(digite -1 para finalizar): ");
    scanf("%d", &num);
    while(num >= 0)
    {
        numerador+=num;
        denominador += 1;
        printf("Digite com quais numeros deseja fazer a media(digite -1 para finalizar): ");
        scanf("%d", &num);
    }

    media = ((float) numerador/denominador);
    printf("A media aritmetica dos numeros informados é %.2f .", media);


    return 0;
}
