#include <stdio.h>

int main()
{
    int numero;
    int dentroIntervalo = 0, foraIntervalo = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numero);

        if (numero >= 10 && numero <= 20)
        {
            dentroIntervalo++;
        }
        else
        {
            foraIntervalo++;
        }
    }

    printf("Quantidade de números no intervalo de 10 a 20: %d\n", dentroIntervalo);
    printf("Quantidade de números fora do intervalo de 10 a 20: %d\n", foraIntervalo);

    return 0;
}
