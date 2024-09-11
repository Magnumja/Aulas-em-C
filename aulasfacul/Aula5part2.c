#include <stdio.h>
#include <stdlib.h>
#define MAX 50

int main ()
{
float n1,n2,med;
int cont;
while (cont<MAX)
{
  printf("Nota 1: ");
  scanf("%f", &n1);
  printf("%f", &n2);
  scanf("%f", &n2);
  med=(n1+n2)/2;
//classificar

if(med>7)
  printf("Aprovado!\n");
else
  printf("Esude mais!\n);
cont++;
}
return 0;
}
