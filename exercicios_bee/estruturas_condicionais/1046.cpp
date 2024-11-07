#include <iostream>
using namespace std;

int main() {
    int inicio, fim, tempo;
    cin >> inicio >> fim;
    
    if (fim > inicio) tempo = fim - inicio;
    else tempo = 24 - inicio + fim;
    
    cout << "O JOGO DUROU " << tempo << " HORA(S)\n";
    return 0;
}