#include <iostream>
using namespace std;

struct Pessoa {
    char nome[50];
    int idade;
    float altura;
    float peso;
};

void ler(Pessoa* p) {
    cin >> p->nome >> p->idade >> p->altura >> p->peso;
}

void mostrar(Pessoa* p) {
    cout << p->nome << " " << p->idade << " " << p->altura << " " << p->peso << endl;
}

int main() {
    Pessoa p;
    ler(&p);
    mostrar(&p);
    return 0;
}
