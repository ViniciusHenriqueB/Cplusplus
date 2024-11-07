#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int num;
    cin >> num;

    double n1, n2, n3, media_ponderada;
    
    for (int i = 0; i < num; i++) {
        cin >> n1 >> n2 >> n3;
        media_ponderada = (n1*2 + n2*3 + n3*5) / 10;

        cout << fixed << setprecision(1);
        cout << media_ponderada << "\n";
    }

    return 0;
}