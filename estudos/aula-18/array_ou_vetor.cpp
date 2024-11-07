#include <iostream>
using namespace std;

int main() {
    // Declarar um array/vetor: Para isso, precisamos informar o tipo de dado que ele irá armazenar, o seu nome e a quantidade de elementos que ele irá armazenar:

    int vetor[5];
    
    // Preenchendo os espaços do array:
    vetor[0] = 10;  
    vetor[1] = 20;
    vetor[2] = 30;
    vetor[3] = 40;
    vetor[4] = 50;
    //              ÍNDICES:                   0   1   2   3   4  
    // MESMA COISA DE FAZER: "int vetor[5] = {10, 20, 30, 40, 50}  

    // Imprimindo os valores do array utilizando o loop for:
    for (int i = 0; i < 5; i++) {
        cout << vetor[i] << "\n";
    }

    return 0;
}


/*
OBS:

- Caso o número de elementos fornecidos na inicialização seja menor que o tamanho declarado, os elementos restantes serão preenchidos com 0 (para tipos numéricos):
    int numeros[5] = {1, 2}; // Restantes são preenchidos com 0: {1, 2, 0, 0, 0}

- Se o tamanho não for especificado, ele será automaticamente calculado com base no número de elementos fornecidos:
    int numeros[] = {1, 2, 3, 4, 5}; // Array de tamanho 5

- O tamanho do array é fixo e não pode ser alterado após a criação. Você pode usar o operador sizeof para calcular o tamanho do array em bytes e dividi-lo pelo tamanho de um elemento para obter o número de elementos no array:
    int tamanho = sizeof(numeros) / sizeof(numeros[0]); // Obtém o número de elementos
*/