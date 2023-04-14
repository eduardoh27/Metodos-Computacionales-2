#include <iostream>
#include "warrior.h"
using namespace std;

bool Warrior::is_alive()
{
    if (health > 0)
    {
        return true;
    }

    else {
        return false;
    }
}

int Warrior::getHealth()
{
    return health;
}

int Warrior::getAttack()
{
    return attack;
}

void Warrior::setHealth(int pHealth)
{
    health = pHealth;
}

