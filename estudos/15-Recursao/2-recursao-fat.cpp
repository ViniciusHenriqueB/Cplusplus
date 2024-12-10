#include <iostream>
using namespace std;

// Recursão é uma técnica de programação onde uma função chama a si mesma para resolver um problema. Em C++, essa técnica é comumente utilizada para problemas que podem ser divididos em subproblemas menores do mesmo tipo.

int fatorial(int num);

int main() {

    cout << fatorial(5) << endl;
    
    return 0;
}

int fatorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    return num * fatorial(num - 1);
}
