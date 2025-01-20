#include <iostream>
using namespace std;

// Declaração de um vetor dinâmico:    "type* name = new type[size];"
// O ponteiro recebe o endereço do primeiro elemento do vetor;
// Para liberar a memória de um vetor dinâmico, é preciso usar o delete com a seguinte notação: "delete [] name;"


int main() {
    // O tamanho de um vetor dinâmico pode ser uma variável, com valor fornecido durante a execução do programa, por ex:
    cout << "Digite o tamanho do vetor: ";
    int tam;
    cin >> tam;

    int* vetor = new int[tam];  // Alocado a memória para um vetor de inteiros de tamanho tam, onde o ponteiro aponta para o seu primeiro elemento;

    // O ponteiro de um vetor dinâmico pode ser usado como se fosse um array tradicional, por ex:
    for (int i = 0; i < tam; i++) {
        vetor[i] = i;
        cout << vetor[i] << ' ';
    }
    cout << endl;

    // Obs.: Também é possível acessar as posições do vetor dinâmico através da aritmética de ponteiros, mas é mais arriscado, pois para dar o delete eu precisaria sempre fazer o ponteiro voltar a apontar para o primeiro elemento do array, pois, caso eu faça:

    vetor++;  // Agora, o ponteiro está apontando para o segundo elemento do array, e vetor[0] agora será o que originalmente era vetor[1]:
    cout << vetor[0]; // Caso tivéssemos um vetor de apenas 1 posção originalmente, esta operação de incremento no ponteiro acessaria uma posição que não foi alocada inicialmente pelo vetor dinâmico, causando acontecimentos inesperados;

    vetor--; // Ponteiro aponta agora novamente para o primeiro elemento, agora podemos dar o delete

    delete [] vetor; // Caso não tivéssemos voltado o ponteiro para o primeiro elemento, eu estaria liberando espaço da memória que não foi alocada, além de haver vazamento de memória do primeiro elemento original, que não seria mais considerado vetor[0]

    cout << endl;

    return 0;
}

// O std::vector é uma classe da biblioteca padrão (<vector>) do C++ que gerencia automaticamente memória dinâmica e permite manipulação de arrays de tamanho variável, sendo preferível utilizála ao invés de alocar dinamicamente a memória para um array manualmente.