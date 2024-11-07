#include <iostream>

using namespace std; 

int main() { 
    cout << "Olá mundo :)";
    return 0; 
}  

/*
Obs.:

- Um namespace é uma região declarativa que fornece um escopo para os identificadores (os nomes de tipos, funções, variáveis etc.) dentro dele. Namespaces são usados para organizar código em grupos lógicos e evitar colisões de nome que podem ocorrer especialmente quando sua base de código inclui várias bibliotecas.

- A função main() é o ponto de entrada do programa. Quando você executa um programa em C++, é a função main() que é chamada primeiro pelo sistema operacional. Nenhuma outra função tem essa responsabilidade; ou seja, sem uma função main(), o programa não pode ser executado.

- A função main() deve retornar um valor inteiro (tipicamente int) que é usado pelo sistema operacional para indicar se o programa terminou com sucesso ou se houve um erro. Um valor de 0 geralmente indica que o programa foi bem-sucedido.

- Quando a função main() retorna, o programa é encerrado. Se main() retorna 0, isso indica ao sistema operacional que o programa terminou corretamente. Qualquer outro valor de retorno pode indicar uma situação de erro.

- Outras funções não encerram o programa, elas apenas retornam o controle para a função que as chamou.

- main() é a função especial que inicia o programa, chama outras funções e, por fim, termina o programa.

- cout é um objeto usado junto com o operador de inserção (<<) para produzir/imprimir texto.

- No contexto de fluxos de saída, como em std::cout, o << é usado como operador de inserção para enviar dados para um fluxo de saída. É o que você usa para imprimir valores no console.
*/