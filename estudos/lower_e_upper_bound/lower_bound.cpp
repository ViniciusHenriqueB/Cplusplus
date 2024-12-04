// Faz uma busca binária e retorna um iterador para o primeiro elemento que que seja maior ou igual que a chave passada

// Obs.: Caso a chave seja maior do que todos os elementos do array, será retornado um iterador para o endereço após o último elemento do array (vetor.end())

#include <iostream>
#include <vector>
#include <algorithm> // Necessário para lower_bound e upper_bound

using namespace std;

int main() {
    //                 0  1  2  3  4  5  6  7
    vector<int> vec = {1, 2, 4, 4, 5, 6, 8, 10};

    // Procurando o lower_bound de 4
    auto it = lower_bound(vec.begin(), vec.end(), 4);
    // O uso do auto serve para que não presisamos colocar explicitamente o tipo do iterador, deixando o código mais limpo e legível.
    // O tipo neste caso seria: vector<int>::iterator it;

    if (it != vec.end()) {                            
        cout << "O lower_bound de 4 esta no indice: " << (it - vec.begin()) << endl;  // 2
    } else {
        cout << "Elemento nao encontrado." << endl;
    }

    return 0;
}

// Obs.: A Operação entre ponteiros "it - vec.begin()" foi necessária para pegar a posição do elemento retornado (O operador "-" entre dois iteradores retorna a distância entre eles, ou seja, o número de elementos entre it e vec.begin()).