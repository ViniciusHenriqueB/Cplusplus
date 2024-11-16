#include <iostream>
#include <string>

using namespace std;

// Declaração, size(), lenght(), max_size() e capacity()

int main() {
    // Declaração (igual outras variáveis):
    string nome = "Vinícius";

    // Tamanho de uma string: Podem ser usados os métodos size() ou lenght()
    cout << "Meu nome possui " << nome.length() << " letras.\n";  // A saída será 9 ao invés de 8 por que as funções size() e lenght() retornam a quantidade de bytes na string, e o caractere acentuado 'í' possui 2 bytes!!!!!

    // max_size(): retorna o tamanho máximo que a string pode ter:
    cout << "Tamanho maximo da string: " << nome.max_size() << "\n";

    // resize(tam): altera o tamanho da string para tam;

    // capacity(): retorna tamanho do espaço alocado pra string:
    cout << "Capacity: " << nome.capacity() << "\n"; // Neste caso, "Vinícius" tem 9 bytes, porém, a capacity() pode ser maior (neste caso, 15) porque a implementação do compilador alocou espaço extra para permitir o crescimento da string sem precisar realocar imediatamente.


    return 0;
}