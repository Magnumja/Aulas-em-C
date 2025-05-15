#include <iostream>
using namespace std;

int main() {
    float x = 1.5, y = 2.5;
    float* px = &x;
    float* py = &y;

    float tempf = *px;
    *px = *py;
    *py = tempf;

    char c1 = 'A', c2 = 'B';
    char* pc1 = &c1;
    char* pc2 = &c2;

    char tempc = *pc1;
    *pc1 = *pc2;
    *pc2 = tempc;

    cout << x << " " << y << endl;
    cout << c1 << " " << c2 << endl;
    return 0;
}
