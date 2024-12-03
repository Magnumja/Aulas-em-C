// Escreva um programa que leia 10 notas e armazene-as em um vetor A. Em
// seguida calcule e imprima a média das notas e as notas que estão acima da
// média.

#include <stdio.h>

int main()
{
    int va[10];
    int notas;
    float media, numerador = 0.0;

    system("cls");

    for (notas = 0; notas < 10; notas++)
    {
        do
        {
            printf("Digite a %da nota (entre 0 e 10): ", notas + 1);
            scanf("%d", &va[notas]);

            if (va[notas] < 0 || va[notas] > 10)
            {
                printf("Nota inválida! Digite novamente.\n");
            }
        } while (va[notas] < 0 || va[notas] > 10);

        numerador += va[notas];
    }

    media = (numerador) / 10.0;
    printf("\nA media da turma foi %.2f\n ", media);
    printf("As notas acima da media sao: \n ");

    for (notas = 0; notas < 10; notas++)
    {
        if (va[notas] >= media)
        {
            printf("%da nota: %d\n", notas + 1, va[notas]);
        }
    }
}