#include "Warrior.h"

Warrior::Warrior(string name)
    : Character(name, 150, 25) {
}

int Warrior::attack() const {
    cout << getName() << " uses Sword Slash!" << endl;

    return getAttackPower();
}

int Warrior::specialAbility() const {
    cout << getName() << " uses POWER STRIKE!" << endl;

    return getAttackPower() + 20;
}
