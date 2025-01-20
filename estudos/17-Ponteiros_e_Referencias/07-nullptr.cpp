#include <iostream>
using namespace std;

// nullptr é uma constante introduzida na linguagem a partir do C++11 que representa um ponteiro nulo de forma explícita e segura. Ele substitui o uso tradicional de NULL ou 0 para indicar um ponteiro que não aponta para nenhum objeto válido.

int main() {
    int *ptr = nullptr;

    cout << ptr << endl;
    
    return 0;
}