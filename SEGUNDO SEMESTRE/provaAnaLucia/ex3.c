#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

int main()
{
    int codigo[5], qntLivro[MAX], idade[5];
    int i, idade18anos = 0, idade50menos = 0, porcentagem;
    int mediaLivros;
    int numerador = 0;

    for (i = 0; i < 5; i++)
    {
        
        printf("Cliente %d: \n", i + 1);
        printf("Codigo: ");
        scanf("%d", &codigo[i]);
        printf("\nQuantidade de livros emprestados: ");
        scanf("%d", &qntLivro[i]);
        printf("\nQual a sua idade: ");
        scanf("%d", &idade[i]);

        if (idade[i] >= 18)
        {
            idade18anos++;
        }
        if (idade[i] < 50)
        {
            idade50menos++;
        }

        numerador += qntLivro[i];
    }

    mediaLivros = numerador / 5;

    printf("\nMedia de livros emprestados: %d", mediaLivros);

    printf("\nNumeros de usuarios com idade maior ou igual a 18: %d", idade18anos);
    printf("\nPorcentagem de usuarios com idade menor que 50 anos: %d", porcentagem = (idade50menos / 5) * 100);
}