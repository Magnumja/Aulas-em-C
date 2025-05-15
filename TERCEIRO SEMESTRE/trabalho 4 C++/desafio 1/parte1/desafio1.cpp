#include <iostream>
using namespace std;

void preencher(float* m, int linhas, int colunas) {
    for(int i = 0; i < linhas * colunas; i++) {
        cin >> *(m + i);
    }
}

float somaProdutoColunas(float* m, int colunas, int c1, int c2) {
    float soma = 0;
    for(int i = 0; i < 4; i++) {
        float a = *(m + i * colunas + c1);
        float b = *(m + i * colunas + c2);
        soma += a * b;
    }
    return soma;
}

int main() {
    float matriz[4][5];
    preencher(&matriz[0][0], 4, 5);
    int c1 = 0, c2;
    cin >> c2;
    float resultado = somaProdutoColunas(&matriz[0][0], 5, c1, c2);
    cout << resultado << endl;
    return 0;
}
