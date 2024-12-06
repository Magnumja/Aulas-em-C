#include <stdio.h>

int main() {
    int inicio, fim;

    printf("Digite o primeiro número: ");
    scanf("%d", &inicio);

    printf("Digite o segundo número: ");
    scanf("%d", &fim);

    // Certifique-se de que 'inicio' seja menor que 'fim'
    if (inicio > fim) {
        int temp = inicio;
        inicio = fim;
        fim = temp;
    }

    printf("Múltiplos de 7 entre %d e %d:\n", inicio, fim);
    for (int i = (inicio + 6) / 7 * 7; i <= fim; i += 7) {
        printf("%d\n", i);
    }

    return 0;
}
