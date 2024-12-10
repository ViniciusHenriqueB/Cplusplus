#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> num1, num2;
    int tam1, tam2;
    /*
    POSSIBILIDADES DE DECLARAÇÃO E INICIALIZAÇÃO:
        vector<int> vec;             // Vector vazio
        vector<int> vec(10);         // Vector com 10 elementos, todos inicializados com 0
        vector<int> vec(5, 100);     // Vector com 5 elementos, todos inicializados com 100
        vector<int> vec = {1, 2, 3}; // Inicialização com lista
    */

    num1.push_back(1);
    num1.push_back(2);
    num1.push_back(3);
    num1.push_back(4);

    tam1 = num1.size();

    cout << "Tamanho do vetor 1: " << tam1 << "\n";

    for (int i = 0; i < tam1; i++) {
        cout << num1[i] << " ";
    }
    cout << "\n";

    num2.push_back(5);
    num2.push_back(6);
    num2.push_back(7);
    num2.push_back(8);

    tam2 = num2.size();
    cout << "Tamanho do vetor 2: " << tam2 << "\n";

    for (int i = 0; i < tam2; i++) {
        cout << num2[i] << " ";
    }


    num1.swap(num2); // Agora os elementos de num2 estão em num1 e vice-versa

    cout << "\n\nSwap\n";
    for (int i = 0; i < tam1; i++) {
        cout << num1[i] << " ";
    }
    cout << "\n";
    for (int i = 0; i < tam2; i++) {
        cout << num2[i] << " ";
    }
    cout << "\n\n";

    cout << "Primeiro valor de num1: " << num1.front() << "\n";
    cout << "Ultimo valor de num1: " << num1.back() << "\n";
    cout << "Valor do meio de num1: " << num1[tam1/2] << "\n";

    // Usando o insert(pos, value):
    tam1 = num1.size();
    cout << "\n\nInserindo um elem na primeira pos:\n";
    num1.insert(num1.begin(), 15);
    for (int i = 0; i < tam1; i++) {
        cout << num1[i] << " ";
    }

    cout << "\n\nInserindo um elem na ultima pos:\n";
    num1.insert(num1.end(), 15);
    for (int i = 0; i < tam1; i++) {
        cout << num1[i] << " ";
    }

    cout << "\n\nInserindo um elem na quarta pos:\n";
    num1.insert(num1.begin() + 3, 15);
    for (int i = 0; i < tam1; i++) {
        cout << num1[i] << " ";
    }

    // O método erase(pos) pode apagar um elemento na posição pos e pode ser usado como o  insert(pos, value) (utilizando begin() e end() como iterador para pos)
    return 0;
}

/*
Principais métodos: 

- [index]: Acessa o elemento no índice index (sem verificação de limites).

- at(index): Acessa o elemento no índice index com verificação de limites (lança std::out_of_range se o índice for inválido).

- front(): Retorna o primeiro elemento.

- back(): Retorna o último elemento.

- push_back(value): Adiciona value ao final do vetor, aumentando o tamanho.

- pop_back(): Remove o último elemento do vetor.

- insert(pos, value): Insere value na posição pos.

- insert(pos, count, value): Insere count cópias de value na posição pos.

- erase(pos): Remove o elemento na posição pos.

- erase(start, end): Remove elementos no intervalo [start, end).

- clear(): Remove todos os elementos do vetor (não altera a capacidade).

- size(): Retorna o número de elementos no vetor.

- capacity(): Retorna a capacidade atual (número de elementos que o vetor pode armazenar sem redimensionar).

- empty(): Retorna true se o vetor estiver vazio.

- begin(): Retorna um iterador para o primeiro elemento.

- end(): Retorna um iterador para a posição após o último elemento.
*/