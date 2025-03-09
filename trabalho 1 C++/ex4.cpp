// Desenvolva um programa que contenha uma função para calcular o volume de uma esfera.
// O raio da esfera deve ser passado como parâmetro, e a função deve retornar o volume correspondente.

#include <iostream>
#include <cmath>

using namespace std;

bool validarRaio(int raio)
{
    return (raio > 0);
}
double calcularVolume(int raio)
{
    return (4.0 / 3) * M_PI * pow(raio, 3);
}

int main()
{
    int raio;

    do
    {
        cout << "Digite o valor do raio para eu poder te fornecer o valor do volume em seguida: ";
        cin >> raio;

        if (!validarRaio(raio))
        {
            cout << "Raio negativo, tente novamente" << endl;
        }

    } while (!validarRaio(raio));

    double volume = calcularVolume(raio);
    cout << "O volume da esfera é: " << volume << endl;


    return 0;
}