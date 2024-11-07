#include <iostream>
using namespace std;

int main() {
    int vetor[10];
    int* p = vetor;
    
    // Preenchendo os espaços do array através de ponteiros, de acordo com os índices do mesmo (preencher o índice 0 com 0 e assim por diante):

    for (int i = 0; i < 10; i++) {
        *p = i;
        p++;
    }

    // Verificar se funcionou:
    for (int i = 0; i < 10; i++) cout << vetor[i] << "\n";
    
    return 0;
}