#include <stdio.h>

int main()
{
  float media;
  int aprovados = 0, reprovados = 0;
  system("cls");

  printf("Me fale quais foram as medias dos alunos: (digite -1 para encerrar) \n");

  for (;;)
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
      reprovados++;
    }
  }

  printf("Foram %d aprovados esse ano e ", aprovados);
  printf("%d reprovados esse ano.\n", reprovados);

  return 0;
}
