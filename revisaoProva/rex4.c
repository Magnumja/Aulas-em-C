#include <stdio.h>
#include <stdlib.h>

int main()
{

    int idade;
    char classe[30];

    system("cls");
    printf("Me informe a sua idade para classificar a sua classe: ");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7)
    {
        sprintf(classe, "Infantil A");
    }
    else if (idade >= 8 && idade <= 10)
    {
        sprintf(classe, "Infantil B");
    }
    else if (idade >= 11 && idade <= 13)
    {
        sprintf(classe, "Juvenil A");
    }
    else if (idade >= 14 && idade <= 17)
    {
        sprintf(classe, "Juvenil B");
    }
    else if (idade >= 18)
    {
        sprintf(classe, "Adulto");
    }
    else
    {
        sprintf(classe, "sem classe");
    }

    printf("A sua classe: %s\n ", classe);

    return 0;
}