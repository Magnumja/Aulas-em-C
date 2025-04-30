#include <stdio.h>

int main() {
    int vetor[10], valor, count = 0;

    
    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("\nDigite um valor parabuscar: ");
    scanf("%d", &valor);

    
    printf("\nPosições do valor %d:\n", valor);
    for (int i = 0; i < 10; i++) {
        if (vetor[i] == valor) {
            printf("Posção %d\n", i);
            count++;
        }
    }

    if (count > 0) {
        printf("\nTotal de ocorrências: %d\n", count);
    } else {
        printf("\nO número %d não foi encontrado no vetor.\n", valor);
    }

    return 0;
}
