#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon) : m_name(name), m_weapon(weapon)
{
}

void HumanA::attack()
{
    std::cout << m_name << " attacks with their " << m_weapon.getType() << std::endl;
}