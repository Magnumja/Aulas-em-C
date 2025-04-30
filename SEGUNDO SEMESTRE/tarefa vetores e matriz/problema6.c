#include <stdio.h>

int main()
{
    int matriz[10][10];
    int maior;
    int linhaMaior = 0, colunaMaior = 0;

    
    printf("Digite os valores da matriz 10x10:\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    
    maior = matriz[0][0];

   
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
                linhaMaior = i;
                colunaMaior = j;
            }
        }
    }

    
    printf("\nO maior valor encontrado é: %d\n", maior);
    printf("Localizado na linha %d e coluna %d\n", linhaMaior + 1, colunaMaior + 1);

    return 0;
}
