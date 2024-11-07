#include <iostream>
using namespace std;

int main() {
    int l, c;
    cin >> l >> c;
    // 1 = branca
    // 0 = preta

    if ((l%2 == 0 && c%2 == 0) || (l%2 != 0 && c%2 != 0)) cout << "1\n";
    else cout << "0\n";
 
    return 0;
} 