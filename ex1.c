#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaração das  variáveis
    int n1,n2,n3,n4,soma;
    //Receber os dados
    printf("Informe N1: ");
    scanf("%d",&n1);
    printf("Informe N2: ");
    scanf("%d",&n2);
    printf("Informe N3: ");
    scanf("%d",&n3);
    printf("Informe N4: ");
    scanf("%d",&n4);
    //Realizar o cálculo
    soma=n1+n2+n3+n4;
    //Mostrar o resultado
    printf("Soma: %d",soma);
    return 0;
}