#include <iostream>
using namespace std;

// Funções são blocos de código que realizam uma tarefa específica e podem ser chamadas de diferentes partes do programa, promovendo a modularização e a reutilização de código.

int soma(int a, int b);  // Como a função soma está definida após a função main, esta declaração é necessária para que ela funcione em main. 

// OBS.: O MELHOR, POR QUESTÃO DE ORGANIZAÇÃO, É DEFINIR UMA FUNÇÃO APÓS A FUNÇÃO MAIN, COMO FOI FEITO NESTE EXEMPLO.

int main() {
    cout << soma(5, 10);

    return 0;
}

int soma(int a, int b) {
    return a + b;
}