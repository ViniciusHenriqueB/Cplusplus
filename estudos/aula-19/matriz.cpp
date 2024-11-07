#include <iostream>
using namespace std;

// Uma matriz em C++ é essencialmente um array multidimensional, mais comumente um array bidimensional, que pode ser pensado como uma tabela com linhas e colunas.

int main() {
    // Declaração: Precisamos indicar a quantidade de linhas e colunas:
    // int matriz[2][3]; // Matriz com 2 linhas e 3 colunas

    // Você pode inicializar uma matriz no momento de sua declaração:
    int matriz[2][3] = {
        {1, 2, 3}, // Primeira linha
        {4, 5, 6}  // Segunda linha
    };

    // Acesso a Elementos de uma Matriz: Os elementos da matriz são acessados por seus índices: matriz[linha][coluna].

    // Imprimindo uma matriz:
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
