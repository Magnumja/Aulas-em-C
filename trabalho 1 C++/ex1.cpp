#include <iostream>

using namespace std;

bool validarNota(float nota)
{
    return (nota >= 0.0 && nota <= 10.0);
}

int main()
{

    float nota;

    do
    {
        cout << "Digite a nota do aluno (0 a 10): ";
        cin >> nota;

        if (!validarNota(nota))
        {
            cout << "Nota invalda! tente novamente.\n";
        }
    } 
    
    while (!validarNota(nota));
    
    cout << "Nota aceita: " << nota << endl;


    return 0;
}