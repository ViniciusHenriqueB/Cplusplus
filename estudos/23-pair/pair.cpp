// Em C++, um pair é uma estrutura de dados que armazena dois valores de tipos possivelmente diferentes. A classe std::pair é definida na biblioteca <utility> e é bastante útil quando você precisa agrupar dois elementos em uma única unidade.

#include <iostream>
#include <utility> // Necessário para std::pair

using namespace std;

int main() {
    // Declaração e inicialização:

    pair<int, string> par = {10, "Vini"};  // mesmo de fazer "pair<int, string> par(10, "Vini")"

    // Acessando o primeiro e segundo elemento do pair:
    cout << "Primeiro: " << par.first << "\nSegundo: " << par.second << "\n"; 

    /*
    OBS.:
    - Posso atribuir os valores do meu pair utilizando o pair.first e pair.second também (ex.: pair.first = 20);
    - Os pairs são úteis por exemplos para problemas que exigem a criação de um vetor de pares que precisam possuir tipos diferentes, no formatO chave-valor;
    - A comparação entre dois pares considera, em ordem, o primeiro e, em caso de igualdade do primeiro, o segundo valor;
    - Também é possível criar um pair de pairs.
    */

    // Também é possível inicializar o pair através do método make_pair(), por ex.:
    par = make_pair(15, "oi");
    cout << "Primeiro: " << par.first << "\nSegundo: " << par.second << "\n"; 

  
    return 0;
}