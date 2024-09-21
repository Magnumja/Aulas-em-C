#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y, z, w, quant_geral; //x, y, z, w respectivamente eh de 350, 600, 2litros e 5litros
    system("cls");

    printf("Ola, me informe quantas latas voce comprou: ");
    scanf("%f", &x);

    printf("E de garrafa de 600ml: ");
    scanf("%f", &y);

    printf("E de garrafa de 2litros: ");
    scanf("%f", &z);

    printf("E de garrafa de 5litros: ");
    scanf("%f", &w);

    quant_geral = 0.35*x + 0.6*y + 2*z + 5*w;

    printf("Certo, voce comprou %.2f litros de refrigerante na loja Meio Gole.", quant_geral);

    return 0;
}