#include <iostream>
using namespace std;

// Em C++, o enum (abreviação de enumeration) é um tipo de dado que permite definir um conjunto de valores constantes nomeados, que são internamente representados como inteiros. Ele é útil quando você tem um conjunto fixo de valores possíveis para uma variável e deseja dar nomes descritivos a esses valores, tornando o código mais legível.

// Se o seu enum for útil em várias partes do código ou em várias funções, o ideal é defini-lo no escopo global. Caso contrário, se ele for específico para uma função ou um bloco de código limitado, defini-lo localmente (dentro da função) pode ser uma boa escolha para manter o código organizado e claro.

enum Level {
    LOW, // 0
    MEDIUM, // 1  DEFINIDO AUTOMATICAMENTE PARA ESSES VALORES, MAS PODEMOS ALTERÁLOS, COMO NO EX ABAIXO
    HIGH // 2
};

enum Meses {
    JANEIRO = 1,
    FEVEREIRO, // 2
    MARCO, // 3
    ABRIL, // 4
    MAIO // 5
//  ...
};
    

int main() {
    Level meuLevel = HIGH;
    cout << meuLevel << "\n\n"; // 2

    Meses meuAniversario = FEVEREIRO;

    cout << meuAniversario << "\n"; // 2

    return 0;
}