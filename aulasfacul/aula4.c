#include <stdio.h>
#include <stdlib.h>

int main()
{
  
    float x, v1, v2, v3, v4;
    int op;

    printf("Qual valor do pagamento?");
    scanf("%f", &x);

    printf("Selecione a forma de pagamento \n");
    printf("1-A vista, no dinheiro. 11%% de desconto \n");
    printf("2-No cartao de credito, a vista, com 5%% de desconto \n");
    printf("3-Parcelado em 2 vezes sem desconto\n");
    printf("4-Parcelado em 3 vezes, com 11%% de juros \n");
    printf("Escolha a Opção: ");
    scanf("%d", &op);

    switch(op)
    {
    case 1:
        v1 = x*0.89;
        printf("O valor do novo pagamento: %.2f\n", v1);
        break;
    case 2:
        v2 = x*0.95;
        printf("O valor do novo pagamento: %.2f\n", v2);
        break;
    case 3:
        v3 = x/2;
        printf("O valor do pagamento por mes (durante dois meses) será: %.2f\n", v3);
        break;
    case 4:
        v4 = (x*1.11)/3;
        printf("O valor do pagamento por mes (durante tres meses) será: %.2f\n", v4);
        break;
       
       
    default:
        printf("Opção inválida.\n");
        break;
    }


 // versão errada, corrigi no proximo 



    return 0;
}
