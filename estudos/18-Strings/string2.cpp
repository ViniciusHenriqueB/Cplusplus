#include <iostream>
#include <string>
#define n << "\n"

using namespace std;

// Indexação, concatenação, append(), insert(), erase() e replace()

int main() {
    string nome = "vinicius";

    // Acessar caracteres: para isso, podemos usar os colchetes, assim como nos arrays:
    cout << "Nome: " << nome n;
    cout << "Primeiro caractere: " << nome[0] n;  
    // OBS.: Assim como em <vector>, uma string também possui o método at(), que faz o mesmo que os colchetes, mas também executa uma verificação de limites.

    // Também é possível alterar estes caracteres (strings em C++ são mutáveis):
    nome[0] = 'V';
    cout << "Nome: " << nome n;

    // Também temos o back(), front(), push_back(char) e pop_back() para strings

    // CONCATENAÇÃO: 
    // O operador + pode ser usado para concatenação de strings:
    nome += " Henrique"; 
    cout << "Nome: " << nome n;

    // Também podemos usar o método append():
    nome.append(" Barbosa Silverio de Castro");
    cout << "Nome: " << nome n;

    // insert(pos, text): Insere text em pos:
    string str = "Hello!";
    str.insert(5, " World"); // Insere " World" antes do '!'
    cout << str n; // Output: Hello World!

    // erase(pos_i, quant): Remove quant elementos a partir de pos_i:
    str = "Remove this!";
    str.erase(6); // Remove " this"
    cout << str << std::endl; // Output: Remove!
    // OBS.: Caso eu informe apenas pos_i, o erase apagará tudo a partir desta posição!

    // replace(pos_i, q, str): a partir de pos_i até q posições a frente seram substituidos por str:
    str = "Hello World!";
    str.replace(6, 5, "C++"); // Substitui "World" por "C++"
    cout << str << std::endl; // Output: Hello C++!


    
    return 0;
}