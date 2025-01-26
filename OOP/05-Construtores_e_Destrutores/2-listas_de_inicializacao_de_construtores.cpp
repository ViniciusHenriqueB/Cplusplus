// Em C++, uma lista de inicialização de construtor permite inicializar diretamente os membros de uma classe antes de o corpo do construtor ser executado. Essa técnica é altamente recomendada e, em alguns casos, necessária.

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
};

// Uso das listas de inicialização:
 
Player::Player() : name("None"), health(0), xp(0) {}

Player::Player(string name_val) : name(name_val), health(0), xp(0) {}

Player::Player(string name_val, int health_val, int xp_val) : name(name_val), health(health_val), xp(xp_val) {}