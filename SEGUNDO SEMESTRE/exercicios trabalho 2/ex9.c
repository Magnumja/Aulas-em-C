//  Faça um algoritmo que receba a média anual de cada aluno de uma classe.
// Ao final mostre quantos alunos foram aprovados e quantos alunos foram reprovados
// Considere média maior igual a 7 para aprovação e como critério de parada o valor -1 atribuído à média anual.

int main()
{

  float media;
  int aprovados = 0, reprovadors = 0;
  system("cls");

  printf("Me fale quais foram as medias dos alunos: (digite -1 para encerrar) \n");

  while (1)
  {
    scanf("%f", &media);

    if (media == -1)
    {
      break;
    }
    if (media >= 7)
    {
      aprovados++;
    }
    else
    {
      reprovadors++;
    }
  }

  printf("Foram %d aprovados esse ano e", aprovados);
  printf("Foram %d reprovados esse ano.", reprovadors);

  return 0;
}