// Um instituto de Meteorologia deseja fazer um estudo sobre as temperaturas do
// mês de outubro. Para isso você deve fazer um programa que leia as 31
// temperaturas médias ocorridas em cada um dos 31 dias do mês e armazená-las
// em um vetor. Seu programa deve calcular e imprimir a temperatura média do
// mês de outubro e a diferença entre cada temperatura e a média.


#include <stdio.h>]


int main()
{
    int temperaturas[31];
    int i, numerador = 0;
    int media, diferenca;


    for ( i = 0; i < 31; i++)
    {
      printf("Qual a tempratura do %do dia: ", i + 1);
      scanf("%d", &temperaturas[i]);

      numerador += temperaturas[i];
    }

    media = numerador/31;
    
    printf("a media eh: %d", media);

    printf("\nAs difereças das temperaturas são: \n");

    for ( i = 0; i < 31; i++)
    {
      if (media > temperaturas[i])
      {
        diferenca =  media - temperaturas[i];
        printf("%d\n", diferenca);
      }
      if (media = temperaturas[i])
      {
        diferenca = 0;
        printf("%d\n", diferenca);
      }
      
      else
      {
        diferenca = temperaturas - media;
        printf("%d\n", diferenca);

      }
    }







}