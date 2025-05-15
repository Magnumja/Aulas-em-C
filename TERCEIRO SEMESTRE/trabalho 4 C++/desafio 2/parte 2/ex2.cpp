#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int* p = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> p[i];
    }

    int maior = p[0];
    for(int i = 1; i < n; i++) {
        if(p[i] > maior) {
            maior = p[i];
        }
    }
    cout << maior << endl;
    delete[] p;
    return 0;
}
