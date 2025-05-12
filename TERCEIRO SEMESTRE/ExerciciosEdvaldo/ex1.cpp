/*1.  Trocar valores de variáveis por meio de ponteiros.
a)  Crie um programa que declare duas variáveis inteiras e use um ponteiro para
trocar seus valores.
b)  Faça o mesmo para duas variáveis do tipo float e char
*/

#include <iostream>

using namespace std;

int main()
{
    int opcao;
    printf("Escolha uma opção:\n");
    printf("1 - Trocar inteiros\n");
    printf("2 - Trocar float e char\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        int a = 5;
        int b = 10;
        int *p1, *p2;
        int temp;

        p1 = &a;
        p2 = &b;

        temp = *p1;
        *p1 = *p2;
        *p2 = temp;

        break;

    case 2:

        break;

    default:
        printf("Opção inválida.\n");
    }

    return 0;
}
