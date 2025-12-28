#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>

int main()
{
    Weapon weapon1("sword");
    HumanA humanA("Oliver", weapon1);
    humanA.attack();
    weapon1.setType("katana");
    humanA.attack();

    Weapon weapon2("axe");
    HumanB humanB("John");
    humanB.attack();
    humanB.setWeapon(weapon2);
    humanB.attack();
    weapon2.setType("knife");
    humanB.attack();
    
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }

    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
}
