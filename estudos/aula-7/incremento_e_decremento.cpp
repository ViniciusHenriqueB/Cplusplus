#include <iostream>
using namespace std;


int main() {
    int n1, n2;

    n1 = 10;

    // n1 = n1 + 5;    // Forma completa de fazer o incremento
    // n1 = n1 - 5;    // Forma completa de fazer o decremento

    // Porém, temos que essas operações acima, assim como em python, podem ser feitas da seguinte forma:
    // n1 += 5;
    // n1 -= 5;

    // Também é possível usar os outros operadores aritméticos (n1 /= 5, n1 %= 5, n1 *= 5)

    // Operador de incremento:
    // n1++;    // incrementa a variável depois de sua utilização.
    // ++n1;    // incrementa a variável antes de sua utilização.

    // Operador de decremento:
    // n1--;    // decrementa a variável depois de sua utilização.
    // --n1;    // decrementa a variável antes de sua utilização.
    
    cout << n1 << "\n";
    
    return 0;
}