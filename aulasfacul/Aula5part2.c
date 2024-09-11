#include <stdio.h>
#include <stdlib.h>
#define MAX 50

int main ()
{
    float n1, n2, med;
    int cont = 0; // Inicializando 'cont'
    
    while (cont < MAX)
    {
        printf("Nota 1: ");
        scanf("%f", &n1);
        
        printf("Nota 2: ");
        scanf("%f", &n2);
        
        med = (n1 + n2) / 2;
        
        if (med > 7)
            printf("Aprovado!\n");
        else
            printf("Estude mais!\n");
        
        cont++; // Incrementando o contador
    }
    
    return 0;
}
