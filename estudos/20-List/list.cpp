#include <iostream>
#include <list>
using namespace std;

// A std::list em C++ é uma estrutura de dados do tipo lista duplamente encadeada, que permite armazenar elementos de maneira não contínua na memória. Cada elemento da lista possui um ponteiro para o elemento anterior e para o próximo, facilitando operações de inserção e remoção em qualquer posição da lista com complexidade O(1), desde que o local seja conhecido.

int main() {

    // Declaração de lista:
    list<int> aula; // Outros tipos de declarações no caderno
    // Exemplo de declaração múltipla: list<int> aula, canal, matricula;
    
    int tam;

    tam = 10;
    for (int i = 0; i < tam; i++) {
        aula.push_front(i);
    }
    
    cout << "Tamanho da lista: " << aula.front() << "\n";

    tam = aula.size();
    
    for (int i = 0; i < tam; i++) {
        cout << aula.front() << "\n";
        aula.pop_front();
    }
    
    return 0;
}

// Principais métodos no caderno!!