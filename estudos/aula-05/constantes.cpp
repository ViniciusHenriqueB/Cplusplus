// Uma constante é um valor que, uma vez definido, não pode ser alterado durante a execução do programa. Isso é útil para definir valores que não devem mudar, como o valor de PI.
//1. Usando #define para criar macros:

#include <iostream>
using namespace std;
#define minutos_em_uma_hora 60

int main() {
    // Constantes podem ser declaradas de duas formas principais em C++:
    //2. Usando a palavra-chave const (obs.: Quando você declara uma variável constante, ela deve receber um valor):
    const float pi = 3.1415;
    // pi = 3.15;  // Erro, não se pode alterar uma constante!

    cout << minutos_em_uma_hora << "\n";
    cout << pi;

    return 0;
}