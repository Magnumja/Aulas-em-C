#include <stdio.h>
main()
{
    int lista[10];
    int i; 
    for (i = 0; i < 10; i++)
    {
        printf("\nDigite o %do elemento do vetor: ", i + 1);
        scanf("%d", &lista[i]);
    }
    printf("\nValores lidos:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", lista[i]);
    }
}