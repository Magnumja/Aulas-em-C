#include <iostream>
using namespace std;

void imprimirInvertido(int vetor[], int indice, int tamanho) {
    if (indice == tamanho) {
        return;
    }
    imprimirInvertido(vetor, indice + 1, tamanho);  
    cout << vetor[indice] << " ";  
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
    imprimirInvertido(vetor, 0, n);  
    cout << endl;

    return 0;
}
