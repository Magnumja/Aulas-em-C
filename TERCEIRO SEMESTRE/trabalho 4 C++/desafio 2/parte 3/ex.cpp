#include <iostream>
using namespace std;

struct Pessoa {
    char nome[50];
    int cpf;
};

int main() {
    Pessoa* p = new Pessoa;
    cin >> p->nome >> p->cpf;
    cout << p->nome << " " << p->cpf << endl;
    delete p;
    return 0;
}
