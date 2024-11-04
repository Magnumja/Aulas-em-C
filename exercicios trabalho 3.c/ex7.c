#include <stdio.h>

int main()
{
    int numeroAluno, altura;
    int numeroMaisAlto, alturaMaisAlto = 0;
    int numeroMaisBaixo, alturaMaisBaixo = 300; 

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o número do aluno e sua altura em cm (Aluno %d): ", i + 1);
        scanf("%d %d", &numeroAluno, &altura);

        if (altura > alturaMaisAlto)
        {
            alturaMaisAlto = altura;
            numeroMaisAlto = numeroAluno;
        }

        if (altura < alturaMaisBaixo)
        {
            alturaMaisBaixo = altura;
            numeroMaisBaixo = numeroAluno;
        }
    }

    printf("Aluno mais alto: Número: %d, Altura: %d cm\n", numeroMaisAlto, alturaMaisAlto);
    printf("Aluno mais baixo: Número: %d, Altura: %d cm\n", numeroMaisBaixo, alturaMaisBaixo);

    return 0;
}
