/* 
Construtores: 

Um construtor é um método especial de uma classe chamado automaticamente quando um objeto é criado. Sua função principal é inicializar o objeto, ou seja, atribuir valores iniciais aos membros da classe e configurar o estado inicial do objeto.

O construtor:
    - Tem o mesmo nome da classe.
    - Não possui tipo de retorno (nem mesmo void).
    - Pode ter parâmetros para permitir diferentes formas de inicialização.
    - Pode ser sobrecarregado, ou seja, várias versões do construtor podem coexistir com assinaturas diferentes.
*/

/*
Destrutores:

Um destrutor é um método especial que é chamado automaticamente quando um objeto sai de escopo ou é explicitamente deletado. Ele é usado para liberar recursos ou realizar tarefas de limpeza, como liberar memória ou fechar arquivos.

O destrutor:
    - Tem o mesmo nome da classe, mas precedido por um til (~).
    - Não aceita parâmetros e não pode ser sobrecarregado.
    - Não possui tipo de retorno.
    - Geralmente é definido como público.
*/

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
        Player() {
            cout << "No args constructor called" << endl;
        }
        Player(string) {
            cout << "String arg constructor called" << endl;
        }
        Player(string, int, int) {
            cout << "Three args constructor called" << endl;
        }

        // Destructor
        ~Player() {
            cout << "Destructor called for " << name << endl;
        }
};

int main() {
    cout << endl;
    {
        Player slayer;
        slayer.set_name("Slayer");
    } // Assim que sair do bloco, o destrutor será chamado para slayer automaticamente
    cout << endl;
    {
        Player frank;
        frank.set_name("Frank");
        Player hero("Hero");
        hero.set_name("Hero");
        Player villain("Vilain", 100, 12);
        villain.set_name("Villain");
    }
    cout << endl;

    Player *enemy = new Player;
    enemy->set_name("Enemy");

    Player *level_boss = new Player;
    level_boss->set_name("Level Boss");

    delete enemy; // O destrutor será chamado ao deletar o objeto que foi alicado dinamicamente no heap com o "delete".
    delete level_boss;

    return 0;
}

// Obs.: Quando não criamos um construtor explicitamente em uma classe em C++, o compilador automaticamente fornece um construtor padrão implícito. Esse construtor não inicializa os membros da classe, mas garante que o objeto possa ser instanciado.

// Caso definimos um construtor em uma classe, o construtor padrão não é mais criado;