#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int distancia;
    double litro;
    cin >> distancia >> litro;

    cout << fixed << setprecision(3);
    cout << distancia/litro << " km/l\n";
    return 0;
}