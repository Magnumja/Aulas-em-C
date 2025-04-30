// Escreva um programa que tenha uma sub-rotina para validar a nota de um aluno. 
// Se a nota informada estiver fora do intervalo de 0 a 10, a função deve retornar falso. 
//O programa principal deve pedir uma nova entrada até que uma nota válida seja informada. 
//Além disso, exiba uma mensagem para o usuário indicando se a nota foi aceita ou não.





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
            cout << "Nota invalida! tente novamente.\n";
        }
    }

    while (!validarNota(nota));

    cout << "Nota aceita: " << nota << endl;

    return 0;
}