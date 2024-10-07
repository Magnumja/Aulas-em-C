#include <stdio.h>

int main() {
    int voto;
    int votosc1 = 0, votosc2 = 0, votosc3 = 0, votosc4 = 0;
    int votosnulos = 0, votosbrancos = 0, total = 0;

    printf("Vote 1 para Marcos, 2 para Eliana, 3 para Miguel, 4 para Laura,\n");
    printf("5 para nulo e 6 para branco (0 para finalizar os votos)\n");

    while (1) {
        printf("Fale qual seu voto: ");
        scanf("%d", &voto);

        if (voto == 0) {
            break; 
        }

        total++; 

        
        switch (voto) {
            case 1:
                votosc1++;
                break;
            case 2:
                votosc2++;
                break;
            case 3:
                votosc3++;
                break;
            case 4:
                votosc4++;
                break;
            case 5:
                votosnulos++;
                break;
            case 6:
                votosbrancos++;
                break;
            default:
                printf("Voto não existente!\n");
                total--; 
        }
    }

    if (total == 0) {
        printf("Nenhum voto foi registrado para contagem.\n");
        return 0;
    }

    
    printf("\nResultados da votação:\n");
    printf("O total de votos para Marcos foi de: %d (%.2f%%)\n", votosc1, (votosc1 * 100.0) / total);
    printf("O total de votos para Eliana foi de: %d (%.2f%%)\n", votosc2, (votosc2 * 100.0) / total);
    printf("O total de votos para Miguel foi de: %d (%.2f%%)\n", votosc3, (votosc3 * 100.0) / total);
    printf("O total de votos para Laura foi de: %d (%.2f%%)\n", votosc4, (votosc4 * 100.0) / total);
    printf("O total de votos nulos foi de: %d (%.2f%%)\n", votosnulos, (votosnulos * 100.0) / total);
    printf("O total de votos brancos foi de: %d (%.2f%%)\n", votosbrancos, (votosbrancos * 100.0) / total);
    printf("O total de votos gerais foi de: %d\n", total);

    return 0;
}

