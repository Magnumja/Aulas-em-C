#include <stdio.h>
#include <stdlib.h>

int main()
{
  float quant_hamb, quant_emp, venda, rendimento;
  system("cls");

  printf("Boa noite, me diga quantos hamburguer vendeu hoje: \n");
  scanf("%f", &quant_hamb);
  printf("Agora me diga quantas empadas vendeu: \n");
  scanf("%f", &quant_emp);

  venda = quant_emp * 12.50 + quant_hamb * 25.00;
  rendimento = venda * 0.12;

  printf("O valor total que vendeu hoje foi %.2f\n reais.", venda);
  printf("E o quanto voce vai guardar com esse valor na conta poupanca e de %.2f reais", rendimento);

  return 0;
}