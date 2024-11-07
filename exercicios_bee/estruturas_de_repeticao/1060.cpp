#include <iostream>
using namespace std;

int main() {
    int positivos = 0;
    float num;

    for (int i = 0; i < 6; i++) {
        cin >> num;
        
        if (num > 0) {
            positivos++;
        } 
    }
    
    cout << positivos << " valores positivos\n";

    return 0;
}