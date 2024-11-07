#include <iostream>
using namespace std;

// PONTEIROS + FUNÇÕES (cont...)

// Passagem de Arrays como Ponteiros

// Obs.: ao passar um array como parâmetro para uma função em C++, declarar o parâmetro como "int* arr" é equivalente a "int arr[]". Em ambos os casos, a função recebe um ponteiro para o primeiro elemento do array. Ou seja, int* arr e int arr[] são, na prática, interpretados da mesma forma quando usados como parâmetros de função.

void ptarr(int* vetor);

int main() {    
    int vetor[5];
    ptarr(vetor);
    cout << vetor[4];

    return 0;
}

void ptarr(int* vetor){
    for (int i = 0; i < 5; i++) {
        *vetor = i;
        vetor++;
    }
}