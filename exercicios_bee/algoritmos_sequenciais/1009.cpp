#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string nome;
    cin >> nome;

    double salario;
    cin >> salario;

    double vendas;
    cin >> vendas;

    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << salario + 0.15*vendas << "\n";
    return 0;
}