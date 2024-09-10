#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int main() 
{
  int cont; 
  //variavel para contar
  cont = 0;
  //estrutura de repeticao
  while (cont < MAX)
{
    printf("Valor do contador: %d\n", cont);
    cont = cont + 1; //ou cont++;
}
return 0;
}
