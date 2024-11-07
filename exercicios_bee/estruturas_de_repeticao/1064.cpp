#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int positivos = 0;
    double num, soma, media;

    for (int i = 0; i < 6; i++) {
        cin >> num;
        
        if (num > 0) {
            positivos++;
            soma += num;
        } 
    }
    media = soma / positivos;

    cout << fixed << setprecision(1);
    cout << positivos << " valores positivos\n";
    cout << media << "\n";

    return 0;
}