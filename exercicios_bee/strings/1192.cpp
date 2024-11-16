#include <iostream>
#include <cctype> // Contém isupper() e islower()

using namespace std;

int main() {
    int q, num1, num2;
    char op;
    string entrada;

    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> entrada;
        num1 = entrada[0] - '0';
        num2 = entrada[2] - '0';
        op = entrada[1];

        if (num1 == num2) cout << num1 * num2 << "\n";
        else if (isupper(op)) cout << num2 - num1 << "\n";
        else cout << num1 + num2 << "\n";
    }
    
    
    return 0;
}