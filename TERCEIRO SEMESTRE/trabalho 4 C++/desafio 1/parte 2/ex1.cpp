#include <iostream>
using namespace std;

struct Aluno {
    char nome[50];
    int idade;
};

int main() {
    Aluno a;
    Aluno* p = &a;
    cin >> p->nome >> p->idade;
    cout << p->nome << " " << p->idade << endl;
    return 0;
}
