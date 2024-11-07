#include <iostream>
using namespace std;

// PONTEIROS + ARRAYS
// Arrays e ponteiros estão intimamente relacionados. Em muitos casos, um array pode ser tratado como um ponteiro para seu primeiro elemento, e os ponteiros podem ser usados para navegar pelos elementos do array de forma eficiente.

int main() {
    int *p;
    int vetor[10];

    p = vetor;  // Agora, o ponteiro p está apontando para o endereço de memória do primeiro elemento do array "vetor"
                // Seria o mesmo de fazer: "p = &vetor[0];", pelo motivo explicado logo abaixo:

                // Em C++, um array é essencialmente um ponteiro constante para o seu primeiro elemento. Isso significa que, embora o nome do array se comporte como um ponteiro, ele não pode ser modificado para apontar para outro endereço.

                
    *p = 10; // Definindo a primeira posição do vetor como 10 (vetor[0] = 10);
    cout << vetor[0] << "\n";

    p++; // (MESMO DE FAZER "p+=1")Incrementando o ponteiro para a próxima posição do array;
    *p = 20; // vetor[1] = 20
    cout << vetor[1] << "\n";

    p++; 
    *p = 30; // vetor[2] = 30
    cout << vetor[2] << "\n";

    // ...

    return 0;
}