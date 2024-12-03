#include <stdio.h>
#include <stdlib.h>

int main()
{
    int VetorA[10];
    int Contador;
    float Media, SomaDeNotas;

    for (Contador = 0; Contador < 10; Contador++)
    {
        printf("Digite a %da nota:", Contador + 1);
        scanf("%d", &VetorA[Contador]);

        SomaDeNotas += VetorA[Contador];
    }

    Media = (SomaDeNotas) / 10.0;

    printf("\nA media das notas foram: %.2f\n ", Media);

    printf("As notas acima da média foram: \n");

    for (Contador = 0; Contador < 10; Contador++)
    {
        if (VetorA[Contador] >= Media)
        {
            printf("%d\n", VetorA[Contador]);
        }
    }

}
