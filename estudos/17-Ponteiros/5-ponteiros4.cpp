#include <iostream>
using namespace std;

// PONTEIROS + FUNÇÕES (cont...)

// Passagem de Arrays como Ponteiros

// Obs.: ao passar um array como parâmetro para uma função em C++, declarar o parâmetro como "int* arr" é equivalente a "int arr[]". Em ambos os casos, a função recebe um ponteiro para o primeiro elemento do array. Ou seja, int* arr e int arr[] são, na prática, interpretados da mesma forma quando usados como parâmetros de função.

void iniVetor(int* vetor);

int main() {    
    int vetor[5];

    iniVetor(vetor);

    for (int i = 0; i < 5; i++) {
        cout << vetor[i] << " ";
    }
    cout << "\n";

    return 0;
}

void iniVetor(int* vetor){ // Mesmo de fazer o código da função "ptarr" do arquivo "teste.cpp" desta pasta, mas esta implementação evita o incremento explícito do ponteiro.
    for (int i = 0; i < 5; i++) {
        vetor[i] = i;
    }
}