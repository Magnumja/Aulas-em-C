// Implemente um programa que tenha uma função para verificar se um número é primo. 
// A função deve retornar verdadeiro se o número for primo e falso caso contrário


#include <iostream>

using namespace std;

bool Primo(int num)
{
    if (num < 2)  
        return false; 
    for (int i = 2; i * i <= num; i++) 
    {
        if (num % i == 0) 
            return false; 
    }
    
    return true; 
}

int main()
{
    int numero;
    cout << "Digite um numero: ";
    cin >> numero;

    if (Primo(numero))
        cout << numero << " eh um numero primo.\n";
    else
        cout << numero << " não eh um numero primo.\n";

    return 0;
}
