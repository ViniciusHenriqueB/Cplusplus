#include <iostream> // contém getline()
#include <string>
#include <cctype> // contém toupper() e tolower()
using namespace std; 

int main() {
    string entrada; // Para fazer o cin considerar a linha inteira como entrada, usamos o getline():

    while (getline(cin, entrada)) {
        bool last_is_upper = false;
        for (size_t i = 0; i < entrada.length(); i++) {
            char &c = entrada[i]; // Preciso usar referência para o caractere da string pois se não apenas a cópia char c seria alterada ao final das comparações abaixo; 
            if (c != ' ') {
                if (last_is_upper) {
                    if (isupper(c)) {
                        c = tolower(c);
                    }
                    last_is_upper = false; 
                } 
                
                else if (!last_is_upper) {
                    if (islower(c)) {
                        c = toupper(c);
                    }
                    last_is_upper = true;
                }
            }
        }
        cout << entrada << "\n";
    }

    

    return 0;
}