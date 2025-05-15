#include <iostream>
using namespace std;

struct Aluno {
    char nome[50];
    int idade;
};

int main() {
    Aluno alunos[3];
    Aluno* p = alunos;
    for(int i = 0; i < 3; i++) {
        cin >> (p + i)->nome >> (p + i)->idade;
    }

    for(int i = 0; i < 3; i++) {
        cout << (p + i)->nome << " " << (p + i)->idade << endl;
    }
    return 0;
}
