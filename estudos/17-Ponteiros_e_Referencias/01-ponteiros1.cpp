#include <iostream>
using namespace std;

// Ponteiros em C++ são variáveis que armazenam o endereço de memória de outra variável. Eles são muito poderosos e permitem acessar e manipular diretamente a memória, facilitando operações como gerenciamento dinâmico de memória, passagem de parâmetros por referência, e estruturas de dados complexas (como listas encadeadas e árvores).

int main() {
    string veiculo = "carro";

    // Declaração de Ponteiro: Para declarar um ponteiro, você usa o caractere * antes do nome da variável, indicando que ela armazenará um endereço. Exemplo:
    string* pv;

    // Atribuição de Endereço: Para fazer um ponteiro apontar para uma variável, você usa o operador &, que obtém o endereço da variável. Exemplo:
    pv = &veiculo;  // ponteiro pv recebe o endereço da variável veículo

    // Declaração e atribuição em uma linha: "string* pv = &veiculo;"

    cout << pv << "\n";
    cout << veiculo << "\n";

    // Desreferenciamento de Ponteiro: Para acessar o valor armazenado no endereço para o qual o ponteiro aponta, usa-se o operador * (também conhecido como operador de desreferência):
    *pv = "moto"; // No endereço apontado por *pv adicione o valor "moto" 

    cout << veiculo << "\n";
    
    return 0;
}