#include <iostream>
using namespace std;

int main() {
    int num = 8;

    // Operador AND (&&):
    if (num > 4 && num < 7) {
        cout << "\n\nAND aceito\n";
    } else {
        cout << "\n\nAND não aceito\n";  // retorna esta opção pois apenas a primeira condição é satisfeita
    }
    // Operador OR (||):
    if (num > 4 || num < 7) {
        cout << "\n\nOR aceito\n"; // retorna esta opção pois pelo menos a primeira condição é satisfeita
    } else {
        cout << "\n\nOR não aceito\n";
    }

    // Operador NOT (!):
    if (!(num > 10)) {
        cout << "\n\nO número não é maior do que 10\n"; // retorna esta opção num não é maior do que 10
    } else {
        cout << "\n\nO número é maior do que 10\n";
    }

    return 0;
}