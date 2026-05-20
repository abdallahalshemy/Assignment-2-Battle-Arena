#include "Archer.h"

Archer::Archer(string name)
    : Character(name, 100, 30) {
}

int Archer::attack() const {
    cout << getName() << " shoots an arrow!" << endl;

    return getAttackPower();
}

int Archer::specialAbility() const {
    cout << getName() << " uses DOUBLE SHOT!" << endl;

    return getAttackPower() + 15;
}
