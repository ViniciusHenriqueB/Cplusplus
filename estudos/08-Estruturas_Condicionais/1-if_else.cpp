#include <iostream>
using namespace std;

int main() {

    /*
    Operadores de comparação em C++ (SÃO OS MESMOS DE PYTHON): 
    ==    !=    >    >=    <    <= 
    */

    // if:
    int num1 = 10;
    int num2 = 20;
    
    if (num1 > num2) {
        cout << "num1 eh maior do que num2\n\n";  // não vai exibir nada, pois num2 é maior
    } 

    if (num1 < num2) {
        cout << "num1 eh menor do que num2\n\n";  // vai executar o código do bloco
    } 

    // else:
    int sol = 1;
    if (sol == 1) {
        cout << "Vou ao clube\n\n";
    } else {                       // Vai exibir a primeira opção
        cout << "Vou ao cinema\n\n";
    }

    return 0;
}