#include <iostream>
using namespace std;

int main() {
    int num, pares = 0;

    for (int i = 0; i < 5; i++) {
        cin >> num;

        if (num%2 == 0) pares++;
    }
    
    cout << pares << " valores pares\n";
    return 0;
}