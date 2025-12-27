#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) :m_name(name), m_weapon(NULL)
{
}

void HumanB::attack()
{
	if(m_weapon)
		std::cout << m_name << " attacks with their " << m_weapon->getType() << std::endl;
	else
		std::cout << m_name << " is weaponless " << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	m_weapon = &weapon;
}
