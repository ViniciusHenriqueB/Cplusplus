#include <iostream>

#include <queue>  // IMPORTANDO A BIBLIOTECA PARA CRIAR FILAS


// FIFO

/*
Principais métodos da std::stack:

- push(): Adiciona um novo elemento ao final da fila.

- pop(): Remove o elemento do topo da fila.

- front(): Retorna o valor do elemento da frente da fila.

- back(): Retorna o valor do elemento do final da fila.

- empty(): Retorna true se a fila estiver vazia, caso contrário, false.

- size(): Retorna o número de elementos presentes na fila.
*/

using namespace std;

int main () {
    queue<string> cartas;

    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    cartas.front() = "Carlos";
    cout << "Tamanho da fila: " << cartas.size() << "\n";
    cout << "Primeira carta.: " << cartas.front() << "\n";
    cout << "Ultima carta...: " << cartas.back() << "\n\n";

    while (!cartas.empty()) {
        cout << "Carta retirada: " << cartas.front() << "\n";
        cartas.pop();
    }
    return 0;
}
