#include <stdio.h>
#include <stdlib.h>
#define MAX 50

int main()
{
    system("cls");

    int num1, num2, chutes;

    
    printf("Jogador 1, por favor, fale o numero que deseja que seu adversario adivinhe: ");
    scanf("%d", &num1);

    system("cls");

    printf("Certo, agora o jogador 2 deve tentar advinhar a partir de agora, comece: \n");

    for (chutes = 1; chutes <= MAX; chutes++)
    {
        scanf("%d", &num2);

        if (num2 > num1)
        {
            printf("O chute foi alto, tente novamente: \n");
        }
        else if (num2 < num1)
        {
            printf("O chute foi baixo, tente novamente: \n");
        }
        else
        {
            printf("Parabéns! Você acertou em %d tentativas.\n", chutes);
            break;
        }
    }


    if (chutes > MAX)
    {
        printf("O jogador 2 não conseguiu adivinhar o número em %d tentativas.\n", MAX);
    }

    return 0;
}
