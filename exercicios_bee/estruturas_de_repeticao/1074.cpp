#include <iostream>
using namespace std;

int main() {
    int num, x;
    cin >> num;
    
    for (int i = 0; i < num; i++) {
        cin >> x;

        if (x == 0) {
            cout << "NULL\n"; 
        } else {

            if (x%2 == 0) {
                cout << "EVEN ";
            } else {
                cout << "ODD ";
            }

            if (x > 0) {
                cout << "POSITIVE\n";
            } else {
                cout << "NEGATIVE\n";
            }

        }
    }
}