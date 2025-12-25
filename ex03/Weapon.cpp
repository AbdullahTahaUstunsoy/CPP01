#include "Weapon.hpp"
Weapon::Weapon(std::string type) : m_type(type)
{
}

const std::string& Weapon::getType()
{
    return m_type;
}

void Weapon::setType(std::string type) //bu referansla da alınabilir. fakat kopya ve referans farkının anlaşılması isteniyor olabilir.
{
    m_type = type;
}