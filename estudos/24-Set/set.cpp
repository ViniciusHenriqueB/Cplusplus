// A biblioteca set em C++ é uma coleção ordenada de elementos únicos, geralmente usada para armazenar dados em que a ordem importa e em que a duplicidade deve ser evitada. Ela é implementada internamente com uma árvore binária balanceada, ou mais especificamente, uma árvore rubro-negra, garantindo que as operações sejam feitas de maneira eficiente.

/*
Características do set:
- Elementos únicos: Não aceita duplicatas. Se tentar adicionar um elemento que já existe, ele não será adicionado;
- Ordenação automática: Os elementos são armazenados em ordem crescente ou conforme um comparador fornecido;
- Acesso eficiente: O acesso aos elementos é feito com base na busca binária devido à implementação em árvore balanceada.
*/

#include <iostream>
#include <set> // Necessário para o uso de std::set

using namespace std;

int main() {
    // Declaração (assim como nos outros contêineres):
    set<int> s = {1, 3, 2};

    // Inserção (insert()): Como o set usa uma árvore binária balanceada, cada inserção exige uma complexidade O(log(n)).

    s.insert(10);
    s.insert(5);

    // Caso o elemento já exista, a operação não modifica o set.
    s.insert(2);

    for (int n : s) 
        cout << n << " ";
    cout << "\n";

    // Remoção (erase()): Remove um elemento da árvore. Você pode fornecer o elemento a ser removido ou um iterador para uma posição específica (complexidade O(log(n))).

    s.erase(3);       // Remove o elemento 3
    s.erase(s.begin());  // Remove o primeiro elemento
    for (int n : s) 
        cout << n << " ";
    cout << "\n";

    // Busca (find()): Permite buscar um elemento no set. Caso o elemento exista, um iterador é retornado, caso contrário, o iterador final (end()) é retornado. Devido à implementação com árvore binária balanceada, a busca por um elemento é realizada em complexidade O(log(n)).
    auto it = s.find(10);
    if (it != s.end()) {
        std::cout << "Encontrado: " << *it << "\n";
    }

    // Verificação de Existência (count()): Verifica se um elemento existe no set. Retorna 1 (true) se o elemento estiver presente e 0 (false) se não (complexidade O(log(n))).
    if (s.count(10)) {
        cout << "O elemento 10 está no set!" << std::endl;
    }

    // Método size() para retornar o tamanho (complexidade O(1)):
    cout << "Tamanho do set: " << s.size() << "\n";

    // Método clear() para limpar o set (O(n))

    // OBS.: Por padrão, os elementos em um conjunto são classificados em ordem crescente. Se você quiser inverter a ordem, pode usar o functor dentro dos colchetes angulares, assim:greater<type>
    set<int, greater<int>> numbers = {1, 7, 3, 2, 5, 9};
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << "\n";
    
    return 0; 
}