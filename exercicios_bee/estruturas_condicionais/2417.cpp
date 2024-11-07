#include <iostream>
using namespace std;

int main() {
    int cvi, cem, cgol, fvi, fem, fgol;
    cin >> cvi >> cem >> cgol >> fvi >> fem >> fgol;
    
    int cpontos = 3*cvi + cem;
    int fpontos = 3*fvi + fem;

    if (cpontos > fpontos) {
        cout << "C\n";
    } else if (fpontos > cpontos) {
        cout << "F\n";
    } else {
        if (cgol > fgol) cout << "C\n";
        else if (fgol > cgol) cout << "F\n";
        else cout << "=\n";
    }

    return 0;
} 