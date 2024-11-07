#include <iostream>
#include <iomanip> // necessário para mudar a precisão da saída
using namespace std;

int main() {
    const double pi = 3.14159;
    double raio;
    cin >> raio;

    cout << fixed << setprecision(4);
    cout << "A=" << pi * raio * raio << "\n";
    return 0;
}