#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    for (int i = 2; i <= num; i+=2) {
        cout << i << "^2 = " << i*i << endl;
    }
}