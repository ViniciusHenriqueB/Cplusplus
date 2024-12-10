#include <iostream>
using namespace std;

int main() {
    int val;

    cout << "Selecione uma cor:\n";
    cout << "[1, 2, 3]=Verde, [4, 5, 6]=Azul\n";

    cin >> val;

    switch(val) {
        case 1:
        case 2:
        case 3:
            cout << "Cor selecionada: Verde\n";
            break;
        case 4:
        case 5:
        case 6:
            cout << "Cor selecionada: Azul\n";
            break;
        default:
            cout << "Valor selecionado inválido\n";
    }
    
    cout << "\nPrograma finalizado\n\n";

    return 0;
}