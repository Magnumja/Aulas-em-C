// Imagine uma brincadeira entre dois amigos, no qual um pensa em um número e o outro deve tentar acertar este número chutando um valor.
// Como dica, a cada tentativa é dito se o chute foi alto, maior que o valor definido, ou se o chute foi baixo, menor que o valor definido.
//  Faça um algoritmo dentro deste contexto, que leia um número e os chutes, ao final,
//  quando o amigo chutar o valor correto, mostrar quantas tentativas foram necessárias para descobrir o número.

#include <stdio.h>
#include <stdlib.h>
#define MAX 50

int main()
{
    system("cls");

    int num1, num2, chutes = 0;

    printf("Jogador 1, por favor, fale o numero que deseja que seu adversario adivinhe: ");
    scanf("%d", &num1);

    system("cls");

    while (chutes < MAX)
    {

        printf("Certo, agora o jogador 2 deve tentar advinhar a partir de agora, comece: ");
        scanf("%d", &num2);
        chutes++;

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
    return 0;
}