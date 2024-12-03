// Programa que lê 3 notas de 5 alunos e as armazena em uma
// matriz de ordem 5 X 3 de números reais, e em seguida imprime os valores
// lidos.

//  Forma Geral:
//  tipo nome_matriz [dim1][dim2]...[dimN] ;
//  Onde:
//  tipo: qualquer tipo possível na linguagem C.
//  nome_matriz: nome da matriz.
//  [dim1][dim2]...[dimN]: cada tamanho inteiro entre
//  colchetes define o tamanho da respectiva dimensão
//  desejada.

#include <stdio.h>

int main()
{

    float notas[5][3];
    int i, j; // índices que representam linhas e colunas
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\nDigite a %da nota do aluno %d: ", j + 1, i + 1);
            scanf("%f", &notas[i][j]);
        }
    }
    printf("\nValores lidos:\n\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%5.1f", notas[i][j]);
        }
        printf("\n");
    }
}
