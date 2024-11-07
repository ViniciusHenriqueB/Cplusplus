// O loop do/while é uma variante do loop while. Este loop executará o bloco de código uma vez, antes de verificar se a condição é verdadeira, então ele repetirá o loop enquanto a condição for verdadeira.

/*
SINTAXE:

do {
  // code block to be executed
} while (condition);

*/

#include <iostream>
using namespace std;

int main() {
    int num = 50;

    do {
        cout << num << "\n";
        num++;
    } while (num < 10);
    
    return 0;
}