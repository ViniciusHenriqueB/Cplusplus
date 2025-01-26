/*
Declarando uma classe:

class ClassName {

    // declarations;

};

*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Player {
    // attributes
    string name = "Player";
    int health = 100;
    int xp = 3;

    // methods
    void talk(string);
    bool is_dead();
};

int main() {
    // Criando objetos
    Player frank;
    Player hero;

    // Criando um array ou um std::vector de objetos
    Player players[] = {frank, hero};

    vector<Player> players_vec;
    players_vec.push_back(frank);
    players_vec.push_back(hero);

    // Também podemos criar um objeto de forma dinâmica, criando-os no heap
    Player *enemy = nullptr;
    enemy = new Player;

    delete enemy;

    
    return 0;
}
