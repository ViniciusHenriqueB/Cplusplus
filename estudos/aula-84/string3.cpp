#include <iostream>
#include <string>
#define n << "\n"

using namespace std;

// find(), substr() e compare()

int main() {
    // find(): Usado para encontrar a posição de substrings ou caracteres em uma string:
    std::string str = "Find the substring in this string";
    size_t pos1 = str.find("substring");  // Pesquisar sobre o tipo de dado size_t!!!
    cout << pos1 n; // Output: 9

    // Obs.: Caso a substring não for encontrada, a saída será o valor máximo possível do tipo size_t (4294967295), por ex:
    size_t pos2 = str.find("nsei");
    cout << pos2 n; // Output: 4294967295

    // É possível verificar se a substring foi encontrada utilizando a seguinte comparação:
    size_t pos3 = str.find("string");
    if (pos3 != string::npos) {  // string::npos representa uma constante estática que corresponde ao valor 4294967295, citada na última observação
        cout << "Encontrado!" n;
    } else{
        cout << "Nao encontrado!" n;
    }

    // substr(pos_i, q): Retorna uma substring de q posições a partir da pos_i da string original:
    str = "C++ Programming";
    string sub = str.substr(4, 11); // Extrai "Programming"
    cout << sub n;

    // compare(string): compara duas strings LEXICOGRAFICAMENTE (na ordem alfabética):

    string str1 = "Bom all mosso";
    string str2 = "Bom dia";

    if (str1.compare(str2) == 0){
        cout << "As strings são iguais" n;
    } else if (str1.compare(str2) < 0) {
        cout << str1 << " eh menor que " << str2 n; // Essa vai ser a saída, pois as strings mudam entre si na posição 4, e 'a' é menor do que 'd' na ordem do código ASCII decimal.
    } else {
        cout << str1 << " eh maior que " << str2 n;
    }

    return 0;
}
