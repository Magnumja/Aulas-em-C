#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int senha, tentativa, num;
    system("cls");

    printf("--------------------------- \n");
    printf("\tSeja Bem-vindo       \n");
    printf("\tDefina sua senha      \n");
    printf(" Pressione 1 para continuar \n");
    printf("        0 para parar        \n");
    printf("--------------------------- \n");
    scanf("%d", &num);
    fflush(stdin);
    system("cls");

    if (num == 1) 
    {
        printf("Entendido! Iniciando o Jogo");
        for (int i = 0; i < 3; i++) {
            Sleep(500);
            printf(".");
        }
        Sleep(500);
        system("cls");

        printf("Digite a senha que deseja (deve ter 4 dígitos):\n");
        scanf("%d", &senha);
        fflush(stdin);

        
        while (senha < 1000 || senha > 9999)
        {
            printf("A senha deve ter 4 dígitos, tente novamente!\n");
            scanf("%d", &senha);
            fflush(stdin);
        }

        system("cls");

        printf("Certo, agora confirme sua senha. Você terá 3 tentativas:\n");
        int tentativas_restantes = 3;

        for (int tentativa_atual = 1; tentativa_atual <= tentativas_restantes; tentativa_atual++) 
        {
            printf("Tentativa %d: ", tentativa_atual);
            scanf("%d", &tentativa);
            fflush(stdin);

            if (tentativa == senha) 
            {
                printf("Tudo certo, sua senha foi salva e \x82 %d.\n", senha);
                break;
            } 
            else if (tentativa_atual < tentativas_restantes) 
            {
                printf("Senha incorreta. Tente novamente.\n");
            } 
            else 
            {
                printf("Sua conta foi bloqueada.\n");
            }
        }
    }
    else if (num == 0) 
    {
        printf("Programa encerrado.\n");
    }

    return 0;
}
