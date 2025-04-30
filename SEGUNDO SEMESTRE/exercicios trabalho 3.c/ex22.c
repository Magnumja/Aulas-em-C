#include <stdio.h>

#define SENHA 1234

int main()
{
    int senhaTentativa;

    for (int tentativas = 0; tentativas < 3; tentativas++)
    {
        printf("Digite a senha: ");
        scanf("%d", &senhaTentativa);

        if (senhaTentativa == SENHA)
        {
            printf("Acesso permitido!\n");
            return 0;
        }

        printf("Senha incorreta. Você tem %d tentativa(s) restante(s).\n", 2 - tentativas);
    }

    printf("Conta bloqueada!\n");
    return 0;
}
