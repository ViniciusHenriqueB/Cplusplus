// Delegating constructors (ou construtores delegados) são um recurso introduzido no C++11 que permite que um construtor de uma classe chame outro construtor da mesma classe para reutilizar código, evitando redundância na inicialização de membros.

#include <iostream>
#include <string>
using namespace std;


class Player {
    private:
        string name;
        int health;
        int xp;
    public:
        void set_name(string n) {name = n;}

        // Overloaded Constructors
        Player();
        Player(string name_val);
        Player(string name_val, int health_val, int xp_val);

        // Destructor
       ~Player() {
        cout << "destruir: " << name << "\n"; 
       }
};

// Uso das listas de inicialização com delegating constructors:
 
Player::Player() : Player("None") {
    cout << "No args constructor\n";
}

Player::Player(string name_val) : Player(name_val, 0, 0) {
    cout << "One arg constructor\n";
}

Player::Player(string name_val, int health_val, int xp_val) : name(name_val), health(health_val), xp(xp_val) {
    cout << "Three args constructor\n";
} 

int main() {

    Player empty;

    cout << "\n";

    Player frank("Frank");

    cout << "\n";

    Player villain("Villain", 100, 55);
    
    cout << "\n";
    
    return 0;
}