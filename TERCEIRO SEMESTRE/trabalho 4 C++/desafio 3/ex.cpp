#include <iostream>
using namespace std;

bool existe(int* p, int tam, int valor) {
    for(int i = 0; i < tam; i++) {
        if(p[i] == valor) {
            return true;
        }
    }
    return false;
}

int main() {
    int n, valor, usados = 0;
    int* v = new int[1000];

    while(cin >> valor && usados < 1000) {
        if(!existe(v, usados, valor)) {
            v[usados++] = valor;
        }
    }

    for(int i = 0; i < usados; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    delete[] v;
    return 0;
}
