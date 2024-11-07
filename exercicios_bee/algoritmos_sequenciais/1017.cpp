#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int horas, velocidade;

    cin >> horas >> velocidade;

    int k = horas * velocidade;
    double litros = k / 12.0;

    cout << fixed << setprecision(3) << litros << "\n";

    return 0;
}