//Escreva um programa com um procedimento que receba três notas e uma letra como parâmetros. 
//Se a letra for “A”, calcule e retorne a média aritmética. Se for “P”, retorne a média ponderada considerando os pesos 2, 3 e 4 para as respectivas notas.


#include <iostream>

using namespace std;

bool validarCaractere(char carac)
{
    return (carac == 'A' || carac == 'P');
}

void operacao(float n1, float n2, float n3)
{
    float media = (n1 + n2 + n3) / 3;
    cout << "A media das notas: " << media << endl;
}

void operacao2(float n1, float n2, float n3)
{
    float mediaPonderada = (2 * n1 + 3 * n2 + 4 * n3) / 9;
    cout << "A media ponderada das notas: " << mediaPonderada << endl;
}

int main()
{
    float n1, n2, n3;
    char caractere;

    do
    {
        cout << "Digite o valor das 3 notas, respectivamente: \n";
        cin >> n1 >> n2 >> n3;

        cout << "\nAgora, fale o caractere necessário, A para media aritmética e P para media ponderada: ";
        cin >> caractere;

        if (validarCaractere(caractere))
        {
            cout << "Caractere aceito!\n";
            if (caractere == 'A')
            {
                operacao(n1, n2, n3);
            }
            if (caractere == 'P')
            {
                operacao2(n1, n2, n3);
            }
        }
        else
        {
            cout << "Caractere Invalido, tente novamente\n";
        }
    } while (true);

    return 0;
}
