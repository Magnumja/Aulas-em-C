#include <stdio.h>
#define MAX 100

int main()
{
    int n, i;
    int vetor[MAX];

    printf("Digite o numero de elementos a serem digitados: \nLembre-se que deve ser de 1 a 100\n");
    scanf("%d", &n);

   
    if (n <= 0 || n > MAX)
    {
        printf("Erro: o numero de elementos deve ser entre 1 e %d.\n", MAX);
        return 1;
    }

 
    for (i = 0; i < n; i++)
    {
        printf("Digite o valor do %do numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    
    printf("Aqui estao os valores pares:\n");
    for (i = 0; i < n; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            printf("%do: %d\n", i + 1, vetor[i]);
        }
    }

    return 0;
}
