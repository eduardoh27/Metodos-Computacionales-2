#ifndef WARRIOR_H
#define WARRIO_H
using namespace std;

class Warrior {
    private:
        int health = 50;
        int attack = 5; 

    public:
        bool is_alive();        
        int getHealth();
        int getAttack();
        void setHealth(int pHealth);
};

#endif