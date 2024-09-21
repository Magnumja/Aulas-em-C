#include <stdio.h>

int fatorial(int n)
{
    int f = 1;
    int i = 1;
    sytem("cls");

    while (i <= n)
    {
        f *= i;
        i++;
    }
    return f;
}

float calcula_E(int N)
{
    float E = 1.0f; //
    int i = 1;
    while (i <= N)
    {
        E += 1.0f / fatorial(i);
        i++;
    }
    return E;
}

int main()
{
    int N;

    printf("Digite um valor inteiro e positivo para N: ");
    scanf("%d", &N);

    if (N < 0)
    {
        printf("Por favor, insira um valor positivo.\n");
    }
    else
    {
        float resultado = calcula_E(N);
        printf("O valor de E para N = %d é: %.6f\n", N, resultado);
    }

    return 0;
}
