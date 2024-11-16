#include <iostream>
#include <string>

using namespace std;

// Conversões de strings ou para strings

int main() {
    // Exemplo de conversão:

    string num1 = "10";
    int num2 = 10;

    int soma = stoi(num1) + num2;

    cout << soma << "\n";
    
    return 0;
}

/*
Tipos de conversões:
stoi() - string to int
stof() - strig to float
stod() - strig to double
stol() - strig to long
stoll() - strig to long long
stoul() - strig to unsigned long
stoull() - strig to unsigned long long
stold() - strig to long double
to_string() - number to string
*/