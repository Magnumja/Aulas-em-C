#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, maior, menor, cont = 0;
    system("cls");

    while (cont<10)
    {
        printf("Informe um numero: ");
        scanf("%d", &num);
        
        if (cont == 0)
        {
            menor = num;
            maior = num;
        }
        if (num>maior)
        {
            maior = num;
        }
        if (num<menor)
        {
            menor = num;
        }
        cont+= 1;
    }
    
    system("cls");


    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);



    return 0;
}