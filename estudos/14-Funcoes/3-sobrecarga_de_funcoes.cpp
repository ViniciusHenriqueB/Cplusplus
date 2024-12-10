#include <iostream>
using namespace std;

// A sobrecarga de funções em C++ permite que você defina múltiplas funções com o mesmo nome, mas com assinaturas diferentes (diferente número ou tipos de parâmetros). O compilador decide qual versão da função chamar com base nos argumentos passados durante a chamada da função.

void soma(int n1, int n2);
void soma();

int main() {

    soma(20, 30);
    soma();

    return 0;
}

void soma(int n1, int n2) {
    int res = n1 + n2;
    cout << "\nSoma de " << n1 << " com " << n2 << " = " << res << "\n";
}

void soma() {
    int n1,n2,res;
    n1 = 10;
    n2 = 20;
    res = n1 + n2;
    cout << "\nSoma de " << n1 << " com " << n2 << " = " << res << "\n";
}