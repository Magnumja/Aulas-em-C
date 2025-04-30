// Escreva um programa que tenha uma função para calcular o fatorial de um número inteiro informado pelo usuário.

#include <iostream>

using namespace std;

// Função para calcular o fatorial com int (para numeros menores)
int fatorialInt(int n)
{
    int resultado = 1;
    for (int i = 2; i <= n; i++)
    {
        resultado *= i;
    }
    return resultado;
}

// Função para calcular o fatorial com long long (para numeros maiores)
long long fatorialLongLong(int n)
{
    long long resultado = 1;
    for (int i = 2; i <= n; i++)
    {
        resultado *= i;
    }
    return resultado;
}

int main()
{
    int numero;
    int opcao;

   
    cout << "Escolha o tipo de calculo do fatorial:\n";
    cout << "1 - Usar int (para numeros menores)\n";
    cout << "2 - Usar long long (para numeros maiores)\n";
    cout << "Digite a opcao: ";
    cin >> opcao;

    cout << "Digite um numero inteiro: ";
    cin >> numero;

    
    switch (opcao)
    {
    case 1:
        // Usando int
        if (numero < 0)
        {
            cout << "O fatorial não eh definido para numeros negativos.\n";
        }
        else if (numero <= 12)
        { // O valor máximo para int (12!) sem overflow
            cout << "O fatorial de " << numero << " eh " << fatorialInt(numero) << ".\n";
        }
        else
        {
            cout << "O número é grande demais para ser calculado com 'int'. Tente usar 'long long'.\n";
        }
        break;

    case 2:
        // Usando long long
        if (numero < 0)
        {
            cout << "O fatorial não é definido para números negativos.\n";
        }
        else
        {
            cout << "O fatorial de " << numero << " eh " << fatorialLongLong(numero) << ".\n";
        }
        break;

    default:
        cout << "Opcao invalida. Tente novamente.\n";
        break;
    }

    return 0;
}
