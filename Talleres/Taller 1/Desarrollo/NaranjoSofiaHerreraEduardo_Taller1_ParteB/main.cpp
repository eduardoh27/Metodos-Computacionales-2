#include <iostream>
#include "knight.h"
#include "warrior.h"
using namespace std;


template <typename T1, typename T2>
bool fight(T1& luchador1, T2& luchador2) {
    // luchador1 y luchador2 deben estar vivos
    do {      
        if (luchador1.is_alive()) {

        // ataque luchador1 a luchador2
        int saludActualLuchador2 = luchador2.getHealth();
        int ataqueLuchador1 = luchador1.getAttack();
        luchador2.setHealth( saludActualLuchador2 - ataqueLuchador1);
            
        }

        else {
            return false;
        }

        if (luchador2.is_alive()) {
            // ataque luchador2 a luchador1
            int saludActualLuchador1 = luchador1.getHealth();
            int ataqueLuchador2 = luchador2.getAttack();
            luchador1.setHealth( saludActualLuchador1 - ataqueLuchador2);
            
        }

        else {
            return true;
        }
    }

    while (luchador1.is_alive() || luchador2.is_alive());
  
}

int main ()
{
    cout << "Test 1:" << endl;
    Warrior husband; 
    Knight wife;
    cout << fight(husband, wife) << endl;
    cout << husband.is_alive() << endl;
    cout << wife.is_alive() << endl;
    cout << "\n";
    cout << "Test 2:" << endl;
    Warrior chuck;
    Warrior bruce;
    Knight carl;
    Warrior dave;
    Warrior mark;
    cout << fight(chuck, bruce) << endl;
    cout << fight(dave, carl) << endl;
    cout << chuck.is_alive() << endl;
    cout << bruce.is_alive() << endl;
    cout << carl.is_alive() << endl;
    cout << dave.is_alive() << endl;
    cout << fight(carl, mark) << endl;
    cout << carl.is_alive() << endl;
    return 0;
}