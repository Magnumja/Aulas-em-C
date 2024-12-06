#include <stdio.h>

int main() {
    printf("Múltiplos de 7 entre 1 e 100 (ordem decrescente):\n");
    for (int i = 98; i >= 7; i -= 7) {
        printf("%d\n", i);
    }
    return 0;
}
