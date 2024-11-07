#include <iostream>
using namespace std;

int main() {
    int num = 10;

    // num = num * -1; // Forma tradicional para inversão (não é momentâneo)

    // Quando queremos inverter o valor da varíável momentâneamente, podemos usar o menos(-) antes da variável:
    cout << -num << "\n";
    cout << num << "\n";

    return 0;
}