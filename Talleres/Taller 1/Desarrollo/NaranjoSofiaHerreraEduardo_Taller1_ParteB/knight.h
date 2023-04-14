#ifndef KNIGHT_H
#define KNIGHT_H
using namespace std;

class Knight {
    private:
        int health = 50;
        int attack = 7;
    public:
        bool is_alive();
        int getHealth();
        int getAttack();
        void setHealth(int pHealth);
};

#endif