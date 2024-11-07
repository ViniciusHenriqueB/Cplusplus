#include <iostream>
using namespace std;

void tr(string tra[4]);


int main() {
    string transporte[4] = {"carro", "moto", "barco", "aviao"};
    tr(transporte);
    return 0;
}

void tr(string tra[4]) {
    for (int i = 0; i < 4; i++) {
        cout << tra[i] << "\n";
    }
}
