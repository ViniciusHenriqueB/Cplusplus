#include <iostream>
using namespace std;

int main() {
    int m, f1, f2;
    cin >> m >> f1 >> f2;

    int f3 = m - f1 - f2;

    if (f1 >= f2 && f1 >= f3) {
        cout << f1 << endl;
    } else if (f2 >= f1 && f2 >= f3) {
        cout << f2 << endl;
    } else {
        cout << f3 << endl;
    }
 
    return 0;
} 