// Faça um programa que tenha um procedimento para exibir a tabuada de um número.
// A saída deve seguir o seguinte formato:
// 1 x N =
// 2 x N =
// 3 x N =

#include <iostream>

using namespace std;

void exibirTabuada(int N)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " x " << N << " = " << i * N << endl;
    }
}

int main()
{
    int N;

    cout << "Digite o valor que deseja saber a tabuada: ";
    cin >> N;

    exibirTabuada(N);

    return 0;
}
