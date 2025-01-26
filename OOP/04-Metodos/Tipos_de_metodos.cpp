#include <iostream>
using namespace std;

// Métodos inline

// Um método inline é uma sugestão ao compilador para substituir a chamada do método pelo próprio código do método no ponto onde ele é chamado. Isso pode reduzir a sobrecarga associada à chamada de função (como empilhamento de argumentos e desvio de controle).

// Métodos definidos dentro do corpo da classe são automaticamente tratados como inline pelo compilador (não há necessidade do uso explícito da palavra-chave inline):

class Exemplo1 {
public:
    void mostrar() {
        cout << "Método inline" << endl;
    }
};

// Também é possível marcar um método com a palavra-chave inline, mesmo que ele seja definido fora do corpo da classe:

class Exemplo2 {
public:
    inline void mostrar();  // Declaração
};

inline void Exemplo2::mostrar() {  // Implementação
    cout << "Método inline" << endl;
}


// Métodos normais

// Métodos normais seguem a abordagem padrão de chamada de função, onde o controle é transferido para a função (o método), que então executa seu código e retorna.

// Métodos normais são declarados na classe, mas sua implementação fica separada.

class Exemplo3 {
public:
    void mostrar();  // Declaração
};

void Exemplo3::mostrar() {  // Implementação
    cout << "Método normal" << endl;
}

// Tamanho menor do código binário, pois como o método é chamado de um local central, o código não é replicado.
// Mais adequado para métodos grandes.


// Portanto, use métodos inline apenas para funções curtas, como getters, setters ou operações muito simples, onde a substituição de código realmente traga benefícios ao desempenho. Para funções mais complexas ou longas, prefira métodos normais.