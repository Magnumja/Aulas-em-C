// Crie um programa que tenha uma função para calcular a idade de uma pessoa em dias.
// O usuário deve informar a idade em anos, meses e dias, e a função deve retornar o total correspondente em dias.

#include <iostream>

using namespace std;

bool ehBissexto(int ano)
{
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

int calcularDiasVividos(int anos, int meses, int dias, int anoAtual)
{
    int totalDias = 0;

    for (int i = anoAtual - anos; i < anoAtual; i++)
    {
        if (ehBissexto(i))
            totalDias += 366;
        else
            totalDias += 365;
    }

    int diasPorMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (ehBissexto(anoAtual))
        diasPorMes[1] = 29;

    for (int i = 0; i < meses; i++)
    {
        totalDias += diasPorMes[i];
    }

    totalDias += dias;

    return totalDias;
}

int main()
{
    int anos, meses, dias, anoAtual;

    cout << "Digite quantos anos, meses e dias voce viveu: ";
    cin >> anos >> meses >> dias;

    cout << "Digite o ano atual: ";
    cin >> anoAtual;

    int totalDias = calcularDiasVividos(anos, meses, dias, anoAtual);

    cout << "Voce viveu aproximadamente " << totalDias << " dias.\n";

    return 0;
}
