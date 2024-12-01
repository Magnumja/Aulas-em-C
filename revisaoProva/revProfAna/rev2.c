//Programa que lê 7 valores inteiros e armazena-os em um
//vetor, e em seguida imprime os valores lidos em ordem
//inversa à leitura

#include <stdio.h>

int main()
{
    int lista [7];
    int i, maior, menor, cont;

    for ( i = 0; i < 7; i++)
    {
        printf("\n Digite o %do numero que deseja: \n", i + 1);
        scanf("%d", &lista[i]);

    }
    
    printf("Aqui estao os numeros digitados em ordem inversa:");

    for ( i = 6; i >= 0; i--)
    {
        printf("\n %d: %d", i+1, lista[i]);
            
    }
    










}