#include <stdio.h>

int main() {
    int n;

    printf("Digite um número para calcular a tabuada: ");
    scanf("%d", &n);

    printf("Tabuada do %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", i, n, i * n);
    }

    return 0;
}
