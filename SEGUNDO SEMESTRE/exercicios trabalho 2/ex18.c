#include <stdio.h>

int main() {
    int B, E, resultado = 1;
    system("cls");

    
    printf("Digite o valor da base (B): ");
    scanf("%d", &B);
    printf("Digite o valor do expoente (E): ");
    scanf("%d", &E);

    
    if (E < 0) {
        printf("O expoente deve ser um número inteiro positivo.\n");
        return 1;  
    }

    
    int i = 0;
    while (i < E) {
        resultado *= B;
        i++;
    }

    
    printf("%d elevado a %d é: %d\n", B, E, resultado);

    return 0;
}
