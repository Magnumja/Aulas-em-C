#include <stdio.h>
#include <stdlib.h>

int main()
{
    int senha,tentativa;

    printf("Digite a senha que deseja: (devera ter 4 digitos)");
    scanf("%d", &senha);


    while(senha<1000 || senha>9999)
    {
        printf("Deve ter 4 digitos, tente novamente! \n");
        scanf("%d", &senha);
    }

    printf("Certo, agora confirme sua senha, voce tera 3 tentativas: ");
    scanf("%d", &tentativa);

    if(tentativa == senha)
    {
        printf("Tudo certo, sua senha foi salva e é %d .", senha);
    }
    else
    {
        int chute = 1;
        while(chute<3)
        {
            printf("Sua senha nao esta certa, tente novamente. \n");
            scanf("%d", &tentativa);
            chute++;
        }
        printf("Sua conta foi bloqueada, sinto muito!");
    }

    return 0;
}
