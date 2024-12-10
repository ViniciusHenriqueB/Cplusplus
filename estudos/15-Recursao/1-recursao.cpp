#include <iostream>
using namespace std;

// Recursão é uma técnica de programação onde uma função chama a si mesma para resolver um problema. Em C++, essa técnica é comumente utilizada para problemas que podem ser divididos em subproblemas menores do mesmo tipo.

void contador(int num, int cont=0);

int main() {

    contador(20);
    
    return 0;
}

void contador(int num, int cont) {
    cout << cont << "\n";

    if (num > cont) { 
        contador(num, ++cont);
    }
}
