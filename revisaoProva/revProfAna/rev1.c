// Programa que le 10 valores inteiros e armazena os em um vetor, e em seguida imprime os valores lidos:

#include <stdio.h>

int main (){

    int lista [10];
    int i;

    for ( i = 0; i < 10; i++)
    {
        printf("\n Digite o % do elemento do vetor: ", i + 1);
        scanf("%d", &lista[i]);
        
    }

    printf("\n Valores lidos: \n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", lista[i]);
    }
    
return 0;

}

