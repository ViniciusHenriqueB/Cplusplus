#include <iostream>

#include <stack>  // IMPORTANDO A BIBLIOTECA PARA CRIAR PILHAS


// LIFO

/*
Principais métodos da std::stack:

- push(): Adiciona um novo elemento ao topo da pilha.

- pop(): Remove o elemento do topo da pilha.

- top(): Retorna o valor do elemento no topo, sem removê-lo.

- empty(): Retorna true se a pilha estiver vazia, caso contrário, false.

- size(): Retorna o número de elementos presentes na pilha.
*/

using namespace std;

int main () {
    stack<string> cartas;

    cartas.push("Rei de Copas\n");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    if (cartas.empty()) cout << "\nPilha vazia\n";
    else cout << "\nPilha com cartas\n";

    cout << "\nTamanho da pilha: " << cartas.size() << "\n";
    cout << "Carta do topo: " << cartas.top() << "\n";

    cartas.pop();
    cartas.pop();

    cout << "\nTamanho da pilha: " << cartas.size() << "\n";
    cout << "Nova carta do topo: " << cartas.top() << "\n";

    while (!cartas.empty()) {
        cartas.pop();
    }

    cout << "\nTamanho da pilha: " << cartas.size() << "\n";
    if (cartas.empty()) cout << "Pilha vazia\n\n";
    else cout << "Pilha com cartas\n\n";
    return 0;
}
