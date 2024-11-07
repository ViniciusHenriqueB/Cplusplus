#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double pi = 3.14159;
    double raio;
    cin >> raio;
    double result = 4.0/3 * pi * raio*raio*raio;
    cout << fixed << setprecision(3);
    cout << "VOLUME = " << result << "\n";
    return 0;
}