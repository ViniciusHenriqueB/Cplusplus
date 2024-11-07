#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int cod1, quant1;
    double valor1;
    cin >> cod1 >> quant1 >> valor1;

    int cod2, quant2;
    double valor2;
    cin >> cod2 >> quant2 >> valor2;

    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << quant1*valor1 + quant2*valor2 << "\n";
    return 0;
}