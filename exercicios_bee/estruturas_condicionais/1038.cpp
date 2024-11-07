#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int cod, quant;
    cin >> cod >> quant;
    float preco_individual;

    switch(cod) {
        case 1:
            preco_individual = 4;
            break;
        case 2:
            preco_individual = 4.5;
            break;
        case 3:
            preco_individual = 5;
            break;
        case 4:
            preco_individual = 2;
            break;
        case 5:
            preco_individual = 1.5;
            break;
    }

    float preco = preco_individual * quant; 

    cout << fixed << setprecision(2);
    cout << "Total: R$ " << preco << "\n"; 
    
    return 0;
}