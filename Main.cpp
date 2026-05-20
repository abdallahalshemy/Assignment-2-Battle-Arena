#include <iostream>
#include <ctime>
#include <cstdlib>

#include "Warrior.h"
#include "Mage.h"
#include "Archer.h"

using namespace std;

int main() {

    srand(time(0));

    const int SIZE = 6;

    Character* characters[SIZE];

    characters[0] = new Warrior("Ahmed");
    characters[1] = new Mage("Basma");
    characters[2] = new Archer("Carol");
    characters[3] = new Warrior("Dawoud");
    characters[4] = new Mage("Eman");
    characters[5] = new Archer("Farah");

    cout << endl;
    cout << "Total Characters: "
         << Character::getCharacterCount()
         << endl << endl;

    int rounds = 5;

    for (int round = 1; round <= rounds; round++) {

        cout << "========== ROUND "
             << round
             << " ==========" << endl;

        int attacker = rand() % SIZE;
        int defender = rand() % SIZE;

        while (attacker == defender) {
            defender = rand() % SIZE;
        }

        if (!characters[attacker]->isAlive() ||
            !characters[defender]->isAlive()) {

            cout << "One of the characters is defeated. Skipping round."
                 << endl << endl;

            continue;
        }

        int choice = rand() % 2;

        int damage;

        if (choice == 0) {
            damage = characters[attacker]->attack();
        }
        else {
            damage = characters[attacker]->specialAbility();
        }

        characters[defender]->takeDamage(damage);

        cout << endl;
    }

    cout << "========= FINAL SCOREBOARD ========="
         << endl;

    for (int i = 0; i < SIZE; i++) {

        cout << characters[i]->getName()
             << " ";

        if (characters[i]->isAlive()) {
            cout << "Alive";
        }
        else {
            cout << "Defeated";
        }

        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < SIZE; i++) {
        delete characters[i];
    }

    cout << endl;

    cout << "Remaining Characters: "
         << Character::getCharacterCount()
         << endl;

    return 0;
}
