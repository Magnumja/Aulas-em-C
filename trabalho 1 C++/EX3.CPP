// Faça um programa que tenha uma sub-rotina que receba dois números inteiros.
// A sub-rotina deve calcular e exibir a soma dos dois números, além da subtração e da divisão do maior pelo menor.
// Certifique-se de que os números informados não sejam iguais.

#include <iostream>

using namespace std;

bool validarNum(float num1, float num2)
{
    return (num1 != num2);
}

void operacoes(float num1, float num2)
{
    float soma, sub;
    float div;

    soma = num1 + num2;

    if (num1 > num2)
    {
        sub = num1 - num2;
        div = num1 / num2;
    }
    else
    {
        sub = num2 - num1;
        div = num2 / num1;
    }

    cout << "Soma: \n"
         << soma << endl;
    cout << "Sub: \n"
         << sub << endl;
    cout << "Div: " << div << endl;
}

int main()
{
    float num1, num2;
    do
    {
        cout << "Digite os numeros que deseja, respectivamente: \n";
        cin >> num1 >> num2;

        if (!validarNum(num1, num2))
        {
            cout << "Numeros iguais, tente novamente" << endl;
        }

    } while (!validarNum(num1, num2));

    operacoes(num1, num2);
}
