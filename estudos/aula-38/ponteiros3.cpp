#include <iostream>
using namespace std;

// PONTEIROS + FUNÇÕES
// Em C++, ponteiros podem ser usados em funções de várias formas para passar dados, permitindo tanto a manipulação de valores em funções chamadas (funções chamadas por referência) quanto o retorno de informações complexas. Vou explicar como utilizar ponteiros com funções, incluindo passagem de ponteiros como parâmetros e o uso de ponteiros para retornar valores.


// Passagem de Ponteiros como Parâmetros

void somar1(int num, int valor); // Função sem ponteiro
void somar2(int* num, int valor); // Função com ponteiro


int main() {
    int num = 0;

    somar1(num, 15);  
    cout << num << "\n"; // Observe que a saída ainda exibiu 0 e não 15 (0 + 15), isto porque a variável incrementada foi apenas a que foi criada no escopo da função, não afetando a variável informada como parâmetro.

    // Para que seja possível incrementar a variável também fora do escopo da função, é necessário o uso de ponteiros, pois assim trabalhamos com o endereço com o qual a variável está armazenada.
    somar2(&num, 15);    
    cout << num << "\n"; // Agora sim a variável é incrementada e a saída será 15, pois a função soma2() recebe um ponteiro como parâmetro

    return 0;
}

void somar1(int num, int valor) {
    num += valor;
}

void somar2(int* num, int valor) {
    *num += valor;
}