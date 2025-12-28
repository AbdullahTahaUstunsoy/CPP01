#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB
{
    private:
        std::string m_name;
        Weapon *m_weapon;
    public:
        HumanB(std::string name);
        void attack();
        void setWeapon(Weapon& weapon);
};

#endif