#include <stdio.h>

int main() {
    int valor, maior;

    printf("Digite 10 valores:\n");
    for (int i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valor);

        if (i == 0 || valor > maior) {
            maior = valor;
        }
    }

    printf("O maior valor é: %d\n", maior);
    return 0;
}
