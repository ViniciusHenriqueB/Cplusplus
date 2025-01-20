#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 20;

    // Ponteiro para constante --------------------------------------

    const int* ptr1 = &x;  // Ponteiro para constante, não podemos alterar o valor de *ptr

    // *ptr1 = 30;         // Erro: não podemos modificar o valor de *ptr, pois ele é constante

    ptr1 = &y;             // Ok, podemos mudar o ponteiro para apontar para outro endereço

    // Ponteiro constante -------------------------------------------

    int* const ptr2 = &x; // Ponteiro constante, não podemos mudar o ponteiro, mas podemos alterar *ptr

    *ptr2 = 30;            // Ok, podemos alterar o valor para o qual ptr aponta

    // ptr2 = &y;          // Erro: não podemos mudar ptr para apontar para outro endereço

    // Ponteiro constante para constante ----------------------------

    const int* const ptr2 = &x; // Ponteiro constante para um valor constante

    // *ptr3 = 30;          // Erro: não podemos alterar o valor de *ptr

    // ptr3 = &y;           // Erro: não podemos mudar ptr para apontar para outro endereço

    return 0;
}

