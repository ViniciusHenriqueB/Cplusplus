#include <iostream>
using namespace std;

int main() {
    int n1, n2, res;
    char opc;

    cout << "Digite o valor da nota 1: ";
    cin >> n1;
    cout << "Digite o valor da nota 2: ";
    cin >> n2;

    res = n1 + n2;

    /*
    res >= 60               APROVADO
    res >= 40 e res < 60    RECUPERAÇÃO
    res < 40                REPROVADO
    */

    if (res >= 60) {
        cout << "Aluno Aprovado\n";
    } else if (res >= 40) {   // Mesma coisa do elif em python
        cout << "Aluno em Recuperação\n";
    } else {
        cout << "Aluno Reprovado\n";
    }

    return 0;
}