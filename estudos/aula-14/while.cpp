#include <iostream>
using namespace std;
// Lembrando que o laço while executa um bloco de código enquanto uma condição for verdadeira

/*
FORMATO:

while (condition) {
  // code block to be executed
}

// O break pode ser usado para interromper um loop.

*/

int main() {
    int num = 0;

    while (num < 10) {
        num++;
        cout << num << "\n";
    
        if (num == 5) break;
    }
    
    return 0;
}