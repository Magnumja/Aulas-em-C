// Escrever um algoritmo que leia 5 pares de valores (a,b), todos inteiros e positivos, um par de cada vez,
// considere que o usuário sempre forneça “a” menor que “b”. Escreva os inteiros de a até b, incluindo a e b.

#include <stdio.h>

int main()
{
    int a, b;
    int x = 0;

    system("cls");

    while (x < 5)
    {
        printf("Escreva o par que deseja (par %d): ", x + 1);
        scanf("%d %d", &a, &b);

        if (a < b)
        {
            int y = a;

            while (y <= b)
            {
                printf("%d ", y);
                y++;
            }
            printf("\n");
            x++;
        }
        else
        {
            printf("Não permitido, 'a' deve ser menor que 'b'.\n");
        }
    }

    return 0;
}
