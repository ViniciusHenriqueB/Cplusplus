#include <iostream>
using namespace std;

int main() {
    int valor;
    cin >> valor;

    int n100, n50, n20, n10, n5, n2, n1;
    int r100, r50, r20, r10, r5, r2;

    n100 = valor / 100;
    r100 = valor%100;
    n50 = r100 / 50;
    r50 = r100%50;
    n20 = r50 / 20;
    r20 = r50%20; 
    n10 = r20 / 10;
    r10 = r20%10;
    n5 = r10 / 5;
    r5 = r10%5;
    n2 = r5 / 2;
    n1 = r5%2;

    cout << valor << "\n";
    cout << n100 << " nota(s) de R$ 100,00\n";
    cout << n50 << " nota(s) de R$ 50,00\n";
    cout << n20 << " nota(s) de R$ 20,00\n";
    cout << n10 << " nota(s) de R$ 10,00\n";
    cout << n5 << " nota(s) de R$ 5,00\n";
    cout << n2 << " nota(s) de R$ 2,00\n";
    cout << n1 << " nota(s) de R$ 1,00\n";
    return 0;
}