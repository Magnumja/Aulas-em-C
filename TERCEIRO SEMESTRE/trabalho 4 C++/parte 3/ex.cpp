#include <iostream>
using namespace std;

int main() {
    int v[5];
    int* p = v;
    for(int i = 0; i < 5; i++) {
        cin >> *(p + i);
    }

    for(int i = 0; i < 5; i++) {
        cout << *(p + i) << " ";
    }
    cout << endl;

    float soma = 0;
    for(int i = 0; i < 5; i++) {
        soma += *(p + i);
    }
    cout << soma / 5 << endl;
    return 0;
}
