// Quando você sabe exatamente quantas vezes deseja executar um loop em um bloco de código, use o loop for em vez de um loop while

#include <iostream>
using namespace std;

/*
FORMATO:

for (inicial, condição, incremento/decremento) {
    // bloco de código a ser executado
}
*/

int main() {

    for (int i = 0; i < 10; i++) {
        cout << i << "\n";
    }

    // Também é possível criar as variáveis antes do for e também usar mais de uma variável, por ex:

    int x;
    int y;
    int z;

    for (x = 0, y = 1, z = 0; x <= 10; x++, y+=2, z+=2) {
        cout << x << " - " << y << " - " << z << "\n";
    }
    return 0;
}