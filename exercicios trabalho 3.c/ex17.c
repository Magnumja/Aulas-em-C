#include <stdio.h>

int fatorial(int n)
{
    int resultado = 1;
    for (int i = 2; i <= n; i++)
    {
        resultado *= i;
    }
    return resultado;
}

int main()
{
    int N;
    float E = 1.0f; 

    printf("Digite um valor inteiro e positivo para N: ");
    scanf("%d", &N);

    if (N < 0)
    {
        printf("Por favor, insira um valor positivo.\n");
        return 1;
    }

    for (int i = 1; i <= N; i++)
    {
        E += 1.0f / fatorial(i);
    }

    printf("O valor de E para N = %d é: %.6f\n", N, E);

    return 0;
}
