// Em C++, a entrada de usuário é geralmente realizada usando o objeto std::cin (abreviação de "console input"), que faz parte da biblioteca <iostream>. Ele é usado para receber dados do usuário via console. O operador >> (extrai dados) é utilizado com std::cin para capturar a entrada e armazená-la em variáveis.

#include <iostream>
using namespace std;

int main() {
    int idade;
    float altura;

    cout << "Digite sua idade: ";
    cin >> idade;
    cout << "Agora digite sua altura em metros: ";
    cin >> altura;

    cout << "\nIdade: " << idade << "\nAltura: " << altura;

    return 0;
}