// Resolva o exercício anterior utilizando as sub-rotinas criadas nos exercícios 1 e 2 para validar as notas e a entrada da letra.

#include <iostream>

using namespace std;

bool validarCaractere(char carac)
{
    return (carac == 'A' || carac == 'P');
}

bool validarNota(float nota)
{
    return (nota >= 0.0 && nota <= 10.0);
}

void operacao(float n1, float n2, float n3)
{
    float media = (n1 + n2 + n3) / 3;
    cout << "A média das notas: " << media << endl;
}

void operacao2(float n1, float n2, float n3)
{
    float mediaPonderada = (2 * n1 + 3 * n2 + 4 * n3) / 9;
    cout << "A média ponderada das notas: " << mediaPonderada << endl;
}

int main()
{
    float n1, n2, n3;
    char caractere;
    bool entradaValida = false;

    while (!entradaValida)
    {
        cout << "Digite as 3 notas (entre 0 e 10): ";
        cin >> n1 >> n2 >> n3;

        if (validarNota(n1) && validarNota(n2) && validarNota(n3))
        {
            entradaValida = true;
        }
        else
        {
            cout << "Uma ou mais notas são inválidas! Tente novamente.\n";
        }
    }

    entradaValida = false;

    while (!entradaValida)
    {
        cout << "Digite 'A' para média aritmética ou 'P' para média ponderada: ";
        cin >> caractere;

        if (validarCaractere(caractere))
        {
            entradaValida = true;
        }
        else
        {
            cout << "Caractere inválido! Tente novamente.\n";
        }
    }

    if (caractere == 'A')
    {
        operacao(n1, n2, n3);
    }
    else
    {
        operacao2(n1, n2, n3);
    }

    return 0;
}
