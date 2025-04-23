#include <iostream>
using namespace std;

void imprimirInvertido(int vetor[], int indice, int tamanho) {
    if (indice == tamanho) {
        return;
    }
    imprimirInvertido(vetor, indice + 1, tamanho);  // Chama recursivamente para ir até o final
    cout << vetor[indice] << " ";  // Imprime da última posição para a primeira
}

int main() {
    int n;
    cout << "Digite a quantidade de numeros que deseja inserir no vetor: ";
    cin >> n;

    int vetor[n];

    cout << "Digite " << n << " números inteiros:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> vetor[i];
    }

    cout << "\nOrdem invertida: ";
    imprimirInvertido(vetor, 0, n);  // Começa o índice da recursão em 0
    cout << endl;

    return 0;
}
