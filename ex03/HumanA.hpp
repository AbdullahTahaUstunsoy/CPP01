#ifndef HUMANA_CPP
#define HUMANA_CPP

#include "Weapon.hpp"
#include <string>

class HumanA
{
    private:
        std::string m_name;
        Weapon& m_weapon;
    public:
        HumanA(std::string name, Weapon& weapon);
        void attack();
};

#endif