#include <iostream>
using namespace std;

int n1, n2; // Variáveis Globais

int main() {
    
    int n3, n4;  // Variáveis Locais

    return 0;
}

/*
Obs.:

- Variáveis Locais: São declaradas dentro de uma função, bloco de código ({}) ou método, e só podem ser acessadas dentro desse mesmo escopo. Quando o bloco de código termina, a variável local é destruída, e sua memória é liberada.

- Variáveis Globais: São declaradas fora de qualquer função ou bloco de código, geralmente no início do arquivo, e podem ser acessadas por qualquer função dentro desse arquivo (ou em outros arquivos, dependendo de como o código é estruturado). Elas permanecem alocadas na memória durante toda a execução do programa.
*/