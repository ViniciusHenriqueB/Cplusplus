#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int maior, menor, meio;

    if (a >= b && a >= c) {
        maior = a;
        if (b > c) {
            meio = b;
            menor = c;
        } else {
            meio = c;
            menor = b;
        }
    } else if (b >= a && b >= c) {
        maior = b;
        if (a > c) {
            meio = a;
            menor = c;
        } else {
            meio = c;
            menor = a;
        }
    } else {
        maior = c;
        if (a > b) {
            meio = a;
            menor = b;
        } else {
            meio = b;
            menor = a;
        }
    }

    cout << menor << "\n" << meio << "\n" << maior << "\n\n" << a << "\n" << b << "\n" << c << "\n";
    
    return 0;
}