#include <iostream>
using namespace std;

int main() {
    int n1, n2, nota;
    string res;
 
    cout << "Digite a primeira nota: ";
    cin >> n1;
    cout << "Digite a segunda nota: ";
    cin >> n2;

    nota = n1 + n2;

    // >=60  APROVADO
    // <60   REPROVADO

    // OPERADOR TERNÁRIO ("(condição) ? expressão1 : expressão2;"):
    res = (nota >= 60) ? "APROVADO" : "REPROVADO";
    // (nota >= 60) ? res="APROVADO" : res="REPROVADO";  // Também poderia ser escrito desta forma

    cout << "O ALUNO FOI " << res << "\n";

    // Outro exemplo:

    // int x = 1;
    // (x < 10) ? x++ : x--;

    // cout << x << "\n";
 
    return 0;
}