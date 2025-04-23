#include <iostream>
using namespace std;

float calcular(float num1, float num2, char operacao, bool &valido) {
    valido = true;

    if (operacao == 'A' || operacao == 'a') {
        return num1 + num2;
    } else if (operacao == 'S' || operacao == 's') {
        return num1 - num2;
    } else if (operacao == 'M' || operacao == 'm') {
        return num1 * num2;
    } else if (operacao == 'D' || operacao == 'd') {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            valido = false;
            return 0;
        }
    } else {
        valido = false;
        return 0;
    }
}

int main() {
    float n1, n2, resultado;
    char op;
    bool verificacao;

    cout << "Digite o primeiro numero: ";
    cin >> n1;
    cout << "Digite o segundo numero: ";
    cin >> n2;
    cout << "Digite o que deseja fazer (A - adicao, S - subtracao, M - multiplicacao, D - divisao): ";
    cin >> op;

    resultado = calcular(n1, n2, op, verificacao);

    if (verificacao) {
        cout << "Resultado: " << resultado << endl;
    } else {
        cout << "invalida ou divisao foi por zero" << endl;
    }

    return 0;
}
