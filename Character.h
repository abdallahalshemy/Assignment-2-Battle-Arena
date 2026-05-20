#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>

using namespace std;

class Character {
private:
    string name;
    int health;
    int attackPower;

    static int characterCount;

protected:
    int getAttackPower() const;
    int getHealth() const;

public:
    Character(string n, int h, int a);

    virtual ~Character();

    string getName() const;

    virtual int attack() const = 0;

    virtual int specialAbility() const = 0;

    void takeDamage(int damage);

    bool isAlive() const;

    static int getCharacterCount();
};

#endif
