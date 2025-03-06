// Crie um programa que contenha uma sub-rotina para validar a entrada de caracteres.
// Somente as letras “A”, “a”, “P” ou “p” são permitidas.
// Caso o usuário informe um caractere diferente, a função deve retornar falso e solicitar uma nova entrada.
// Informe ao usuário se o caractere foi aceito ou não.

#include <iostream>

using namespace std;

bool validarCaractere(char carac)
{
    return (carac == 'A' || carac == 'a' || carac == 'P' || carac == 'p');
}

int main()
{

    char caractere;
    do
    {
        cout << "Digite um caractere (A, a, P, p): ";
        cin >> caractere;

        if (validarCaractere(caractere))
        {
            cout << "Caractere aceito!" << endl;
            break;
        }
        else
        {
            cout << "Caractere invalido, tente novamente" << endl;
        }

    } while (true);

    return 0;
}