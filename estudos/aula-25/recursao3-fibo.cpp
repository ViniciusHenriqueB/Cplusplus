#include <iostream>
using namespace std;

// Recursão é uma técnica de programação onde uma função chama a si mesma para resolver um problema. Em C++, essa técnica é comumente utilizada para problemas que podem ser divididos em subproblemas menores do mesmo tipo.
int fibonacci(int num);


int main() {

    cout << fibonacci(10);
    
    return 0;
}

int fibonacci(int num) {
    if (num == 0) {
        return 0;
    } else if (num == 1 || num == 2) {
        return 1;
    } else {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
    
}
