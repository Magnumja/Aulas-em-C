/*ALTERNATIVA A 

&a, &b e &resultado são passados por referência, ou seja, a função altera os valores das variáveis diretamente.

*/


//Alternativa B

#include <iostream>
using namespace std;

int soma(int a, int b) {
    return a + b;
}

int main() {
    int n1 = 10, n2 = -20;
    int r = soma(n1, n2);
    cout << "Resultado: " << r << endl;
    return 0;
}
