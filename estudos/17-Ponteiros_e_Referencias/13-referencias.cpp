#include <iostream>
using namespace std;

// Uma referência é um alias (um outro nome) para uma variável já existente. Uma vez criada, a referência se torna um "apelido" para a variável original, e qualquer operação na referência afeta diretamente o valor da variável original.

/*
Principais Características:
- Deve obrigatoriamente ser inicializada no momento da declaração
- Após vinculada a uma variável, a referência não pode ser associada a outra
- Diferentemente de ponteiros, uma referência não pode ser nula ou não inicializada, logo, ela sempre aponta para um endereço válido
- Talvez fique mais fácil pensar que uma referência é como um ponteiro constante que é automaticamente desrefenciado
*/


void incrementarSemRef(int x);
void incrementarComRef(int& x);


int main() {
    int x = 10;
    // Referências comuns --------------------------------------

    int& ref = x; // ref pode alterar x
    ref = 20;
    cout << x << endl; // Saída: 20

    // Referências constantes ----------------------------------

    const int& cref = x;
    // cref = 50; // Erro: cref é constante, não pode modificar x
    cout << cref << endl; // Saída: 20


    // Uso com funções -----------------------------------------

    int y = 0;
    // Sem referência:
    incrementarSemRef(y);
    cout << y << endl;  // A saída será 0, pois a função apenas incrementou uma cópia de y;

    // Com referência:
    incrementarComRef(y);
    cout << y << endl;  // A saída será 1, pois a função incrementou o próprio y;

    // Obs.: Referências são amplamente usadas para evitar cópias desnecessárias e proteger os valores originais, com isso, você pode passar valores grandes ou objetos por referência para reduzir custos de cópia

    // Obs.: Caso queira ver sobre "L-values", "R-values" e "L-values references", dê uma pesquisada.

    return 0;
}

void incrementarSemRef(int x) {
    x++;
}

void incrementarComRef(int& x) {
    x++;
}