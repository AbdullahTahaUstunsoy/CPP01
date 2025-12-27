#ifndef HUMANA_CPP
#define HUMANA_CPP

#include "Weapon.hpp"
#include <string>

class HumanA
{
    private:
        std::string m_name;
        Weapon& m_weapon; //HumanA bir Weapon’a kalıcı olarak bağlıdır. Bu bağ; constructor’da zorunlu, sonradan değiştirilemez, NULL olamaz
    public:
        HumanA(std::string name, Weapon& weapon);
        void attack();
};

#endif