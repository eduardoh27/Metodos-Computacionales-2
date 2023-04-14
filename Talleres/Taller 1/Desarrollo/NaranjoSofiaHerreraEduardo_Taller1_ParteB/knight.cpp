#include <iostream>
#include "knight.h"
using namespace std;

bool Knight::is_alive()
{
    if (health > 0)
    {
        return true;
    }

    else {
        return false;
    }
}

int Knight::getHealth()
{
    return health;
}

int Knight::getAttack()
{
    return attack;
}

void Knight::setHealth(int pHealth)
{
    health = pHealth;
}

