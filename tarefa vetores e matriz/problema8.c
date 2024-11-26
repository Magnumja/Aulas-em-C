#include <stdio.h>

int main()
{
    char matriz[5][10]; // 5 alunos, 10 questões
    char gabarito[10];
    int resultado[5] = {0};

    printf("Digite o gabarito total (10 questões, opções: a, b, c, d):\n");
    for (int i = 0; i < 10; i++)
    {
        scanf(" %c", &gabarito[i]);
    }

    printf("\nDigite as respostas dos 5 alunos (tendo eles cada um 10 questões cada):\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Aluno %d:\n", i + 1);
        for (int j = 0; j < 10; j++)
        {
            scanf(" %c", &matriz[i][j]);
            if (matriz[i][j] == gabarito[j])
            {
                resultado[i]++;
            }
        }
    }

    printf("\nPontuação de cada aluno:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Aluno %d: %d pontos\n", i + 1, resultado[i]);
    }

    return 0;
}
