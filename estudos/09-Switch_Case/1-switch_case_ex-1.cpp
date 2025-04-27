#include <iostream>
using namespace std;

int main() {
    int val;

    cout << "Selecione uma cor:\n";
    cout << "[1]=Verde, [2]=Azul, [3]=Vermelho\n";

    cin >> val;

    switch(val) {
        case 1:
            cout << "Cor selecionada: Verde\n";
            break;
        case 2:
            cout << "Cor selecionada: Azul\n";
            break;
        case 3:
            cout << "Cor selecionada: Vermelho\n";
            break;
        default:
            cout << "Valor selecionado inválido\n";
    }
    
    cout << "\nPrograma finalizado\n\n";

    return 0;
}

/*
Obs.:

- O switch-case em C++ é uma estrutura de controle de fluxo que permite executar diferentes blocos de código com base no valor de uma variável. 

- Ele é útil quando se tem múltiplas opções e deseja-se tomar decisões baseadas no valor de uma única variável, de forma mais eficiente e organizada do que usando múltiplos if-else.

- A estrutura do switch-case funciona apenas com tipos de dados que podem ser comparados de maneira direta, como inteiros (int), caracteres (char), ou enumerações (enum). Ela não funciona diretamente com tipos como float, double ou strings.

- Também é possível ter switchs aninhados, mas na minha opinião isso torna o código confuso

*/

/*
ESTRUTURA:

switch (expressao) {
    case valor1:
        // Bloco de código para o valor1
        break;
    case valor2:
        // Bloco de código para o valor2
        break;
    // Outros casos...
    default:
        // Bloco de código padrão, se nenhum dos valores anteriores for correspondido
        break;
}
*/