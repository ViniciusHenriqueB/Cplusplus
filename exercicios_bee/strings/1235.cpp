#include <iostream>
#include <string>
#include <limits> // Necessário para numeric_limits
/*
- A classe std::numeric_limits está definida na biblioteca <limits> e é usada para obter informações sobre os limites de tipos de dados primitivos, como int, char, float, etc.

- A classe tem vários métodos estáticos, e um dos mais usados é max(), que retorna o maior valor que um tipo pode armazenar.

- Exemplo para um tipo int:

#include <iostream>
#include <limits>
using namespace std;

int main() {
    cout << "Maior valor de int: " << numeric_limits<int>::max() << endl; 
    return 0;
}
Isso imprimirá o maior valor que um int pode ter na sua plataforma (geralmente 2147483647 em sistemas de 32 bits).

- streamsize é um tipo de dado definido pela biblioteca de fluxos (<iostream>), e é usado para representar tamanhos de buffers ou a quantidade de dados em um fluxo (stream). Esse tipo geralmente é um int ou long dependendo da implementação, e é adequado para armazenar valores grandes que podem ser encontrados ao trabalhar com fluxos de dados.

- Quando você usa numeric_limits<streamsize>::max(), está obtendo o maior valor que o tipo streamsize pode armazenar.
No caso de std::cin.ignore(), isso é usado para ignorando uma grande quantidade de caracteres no fluxo de entrada até encontrar um caractere de fim de linha ou um número específico de caracteres. O valor retornado por numeric_limits<streamsize>::max() é suficientemente grande para garantir que todos os caracteres até o fim de uma linha (ou o final do arquivo) sejam ignorados.
*/
using namespace std;

int main() {
    int q, meio, tam, final;
    string decodificar;

    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // - Quando você chama std::cin.ignore(numeric_limits<streamsize>::max(), '\n'), você está pedindo para ignorar todos os caracteres no fluxo de entrada até que seja encontrado um caractere específico, nesse caso, o caractere de nova linha ('\n').
    for (int i = 0; i < q; i++) {
        getline(cin, decodificar);
        string decodificado;

        tam = decodificar.length();
        meio = (tam - 1) / 2;
        final = tam - 1;
        
        for (int i = meio; i >= 0; i--) {
            decodificado += decodificar[i];  // OBS.: Daria pra usar o método reverse() da biblioteca <algorithm>
        }
        for (int i = final; i > meio; i--){
            decodificado += decodificar[i];
        }
        cout << decodificado << "\n";
    }
    
    return 0;
}