#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double pi = 3.14159;
    double a,b,c;
    cin >> a >> b >> c;

    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << a*c/2 <<"\n";
    cout << "CIRCULO: " << pi*c*c <<"\n";
    cout << "TRAPEZIO: " << (a+b)*c/2 <<"\n";
    cout << "QUADRADO: " << b*b <<"\n";
    cout << "RETANGULO: " << a*b <<"\n";
    return 0;
}