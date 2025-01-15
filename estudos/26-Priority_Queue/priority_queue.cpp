// A std::priority_queue em C++ é uma estrutura de dados baseada em um heap que implementa o conceito de fila de prioridade, onde os elementos têm uma "ordem de prioridade". Por padrão, os elementos de maior valor são considerados prioritários, mas você pode customizar o comportamento para que funcione como um min-heap ou para outras ordenações personalizadas.

/*
Principais características:
- Ordenação Padrão: Um max-heap em que o maior elemento está no topo.
- Customização: Pode ser configurada como um min-heap ou com ordenação personalizada usando comparadores.
- Contêiner Subjacente: Usa std::vector como padrão, mas é compatível com outros contêineres como std::deque.
*/

/*
    Declaração:

    priority_queue<T> pq; // Max-Heap padrão
    priority_queue<T, vector<T>, greater<T>> pq; // Min-Heap

    T: O tipo de dado dos elementos (int, string, etc.).
    Contêiner: Contêiner subjacente (default: vector<T>).
    Comparador: Função ou tipo funcional para definir a ordem de prioridade.
*/

/*
Principais Operações:
- empty() -> O(1)
- size() -> O(1)
- push() -> O(log n)
- pop(): Remove o elemento de maior prioridade -> O(log n)
- top(): Retorna o elemento de maior prioridade -> O(1);
*/

#include <iostream>
#include <queue> // Necessário para std::priority_queue
#include <vector>
#include <functional> // Necessário para std::greater<Type>

using namespace std;

int main() {
    // Max-Heap (Padrão) ------------------------------
    priority_queue<int> maxHeap;

    maxHeap.push(10);
    maxHeap.push(40);
    maxHeap.push(0);
    maxHeap.push(20);
    maxHeap.push(500);
    
    cout << "Max-Heap:\n";
    while (!maxHeap.empty()) {
        cout << maxHeap.top() << "\n";
        maxHeap.pop();
    }

    // Min-Heap ---------------------------------------
    priority_queue<int, vector<int>, greater<int>> minHeap;

    minHeap.push(10);
    minHeap.push(40);
    minHeap.push(0);
    minHeap.push(20);
    minHeap.push(500);
    
    cout << "\nMin-Heap:\n";
    while (!minHeap.empty()) {
        cout << minHeap.top() << "\n";
        minHeap.pop();
    }

    return 0;
}