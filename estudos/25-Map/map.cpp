// O std::map é um contêiner de biblioteca padrão em C++ que implementa um mapa associativo. Ele armazena pares chave-valor (std::pair), onde cada chave é única e é mapeada para exatamente um valor. Internamente, ele usa uma árvore binária balanceada (geralmente uma árvore Red-Black), garantindo complexidade logarítmica para as operações principais.

/*
Principais Características:
- Cada chave é única;
- Por padrão, as chaves são armazenadas em ordem crescente, mas a ordem também pode ser estabelecida conforme um critério definido pelo usuário usando um comparador.
- As chaves não podem ser modificadas diretamente, pois isso invalidaria a ordenação interna.
- Um map é composto por pares (pairs) do tipo pair<const KeyType, ValueType>
*/

#include <iostream>
#include <map>

using namespace std;

int main() {
    // Sua declaração é feita no seguinte formato: map<KeyType, ValueType> mapName;
    map<int, string> estudantes;

    // Inserindo elementos (O(log n)):
    estudantes[1] = "Alice";
    estudantes[2] = "Vinicius";
    estudantes[3] = "Joao";

    // Acessando elementos (O(log n)):
    cout << estudantes[1] << "\n";

    // Quando tentamos acessar uma chave que não está no map com o operador [], como no exemplo abaixo, um novo par chave-valor é automaticamente inserido no map com a chave que tentamos acessar e o valor padrão do tipo do valor do mapa (no caso do exemplo, o valor padrão para strings é uma string vazia "", para inteiros ou double o valor padrão é 0, etc).
    cout << estudantes[4] << "\n"; // irá imprimir ""

    // Também é possível acessar um elemento do map utilizando o método at(), que, caso a chave não esteja presente no map, exibe um erro, como em:
    // cout << estudantes.at(10) << "\n";

    // Alterando valores (O(log n))
    estudantes[4] = "Josias";

    // Remoção de elementos (O(log n))  // erase()
    estudantes.erase(3);  // Remoção do par {3, Joao}

    // Para a remoção de todos os elementos, pode-se usar o método clear, que possui complexidade O(n)
    
    // size (O(1)):
    cout << estudantes.size() << "\n";

    // count (O(log n)): Assim como no set, usa-se count para ver se uma chave está no map ou não, a função retorna 1 caso esteja e 0 caso contrário
    if (estudantes.count(3)) 
        cout << "O estudante 3 esta no map\n";
    else
        cout << "O estudante 3 nao esta no map\n"; 

    // O método find() também serve para a busca de uma chave no map, e retorna um iterator para a chave caso ela exista, se não, retorna o iterados para o .end()
    auto it = estudantes.find(1);
    if (it != estudantes.end()) {
        std::cout << "Chave encontrada: " << (*it).first << ", Valor: " << (*it).second << std::endl;
    }

    // Também há o método empty()

    // Iterar sobre um map:
    cout << "\n";
    cout << "Usando iteradores manualmente:\n";
    for (auto it = estudantes.begin(); it != estudantes.end(); it++) {  // No lugar de "auto it" seria "map<int, string>::iterator it"
        cout << (*it).first << " : " << (*it).second << "\n";
    }

    cout << "\n";
    cout << "Utilizando o range-based for:\n";
    for (auto &par : estudantes) {  // No lugar de "auto &par" seria "pair<const int, string> &par"
        cout << par.first << " : " << par.second << "\n";
    }

    // Obs.: Caso queira armazenar as chaves em ordem decrescente, basta usar o comparador greater<KeyType>, por ex:
    // map<string, int, greater<string>> mapa;
    
    return 0;
}