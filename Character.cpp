#include "Character.h"

int Character::characterCount = 0;

Character::Character(string n, int h, int a) {
    name = n;
    health = h;
    attackPower = a;

    characterCount++;

    cout << name << " has entered the arena!" << endl;
}

Character::~Character() {
    characterCount--;

    cout << name << " has been removed from the arena." << endl;
}

int Character::getAttackPower() const {
    return attackPower;
}

int Character::getHealth() const {
    return health;
}

string Character::getName() const {
    return name;
}

void Character::takeDamage(int damage) {
    health -= damage;

    if (health < 0) {
        health = 0;
    }

    cout << name << " took "
         << damage
         << " damage. Remaining health: "
         << health << endl;
}

bool Character::isAlive() const {
    return health > 0;
}

int Character::getCharacterCount() {
    return characterCount;
}
