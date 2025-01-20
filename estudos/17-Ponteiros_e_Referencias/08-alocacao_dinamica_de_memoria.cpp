#include <iostream>
using namespace std;

// A alocação dinâmica de memória em C++ permite que você reserve espaço na memória em tempo de execução, ao contrário da alocação estática (em tempo de compilação), usada para variáveis de tamanho fixo. Essa funcionalidade é essencial quando você não sabe previamente o tamanho exato dos dados que serão armazenados ou quando precisa de maior controle sobre a vida útil dos objetos.

/*
- Alocada em tempo de execução com os operadores new e delete.
- Persistente até ser liberada explicitamente pelo programador.
- Flexível, mas exige cuidado para evitar vazamentos e acessos inválidos.
*/

/*
Etapas importantes ao se usar a alocação dinâmica de memória:
- Alocar memória com o operador new
- Guardar o endereço de memória em um ponteiro
- Usar o ponteiro para acessar e modificar os dados
- Liberar a memória alocada com o operador delete
*/

int main() {
    // O operador new é usado para alocar memória dinamicamente no heap.
    int* ptr {nullptr};
    ptr = new int;  // Aloca um inteiro no heap
    *ptr = 100; // Atribui valor ao espaço de memória reservado no heap para ptr.

    // OBS.: Como estamos armazenando o valor 100 diretamente em ptr, se perdermos a variável ptr, perderemos o acesso ao espaço alocado dinamicamente na memória, causando assim um vazamento na memória, pois a memória a qual perderíamos acesso ainda estaria com o valor 100 alocado;

    cout << "Valor inteiro: " << *ptr << endl;
    cout << "Localizacao: " << ptr << endl;

    delete ptr;  // Libera a memória alocada;

    // Obs.: O ponteiro pode ser reutilizado:
    ptr = new int;
    *ptr = 200;
    cout << "Valor inteiro: " << *ptr << endl;
    cout << "Localizacao: " << ptr << endl;
    delete ptr;

    return 0;
}

// Aula completinha sobre o assunto: https://www.youtube.com/live/qYUiBzxdf-U?si=3DFcNwXSQI2BVG9D