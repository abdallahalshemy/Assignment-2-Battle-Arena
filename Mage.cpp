#include "Mage.h"

Mage::Mage(string name)
    : Character(name, 80, 40) {
}

int Mage::attack() const {
    cout << getName() << " casts Magic Bolt!" << endl;

    return getAttackPower();
}

int Mage::specialAbility() const {
    cout << getName() << " uses ARCANE STORM!" << endl;

    return getAttackPower() + 30;
}
