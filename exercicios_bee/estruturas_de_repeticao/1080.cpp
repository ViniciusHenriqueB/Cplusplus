#include <iostream>
using namespace std;

int main() {
    int num, maior = 0, maior_pos;

    for (int i = 1; i <= 100; i++) {
        cin >> num;
        if (num > maior) {
            maior = num;
            maior_pos = i;
        }
    }
    cout << maior << "\n" << maior_pos << "\n";

    return 0;
}