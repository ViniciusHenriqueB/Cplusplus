// Operadores Matemáticos: + - / * %

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 3;

    cout << "Soma: " << a + b << "\n";          // 13
    cout << "Subtração: " << a - b << "\n";     // 7
    cout << "Multiplicação: " << a * b << "\n"; // 30
    cout << "Divisão: " << a / b << "\n";       // 3 (divisão de inteiros)
    cout << "Resto: " << a % b << "\n";        // 1 (resto da divisão 10 / 3)

    return 0;
}

// Obs.: o C++ assume que o resultado da divisão entre dois inteiros é outro inteiro!