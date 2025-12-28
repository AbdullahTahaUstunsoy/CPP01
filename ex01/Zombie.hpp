#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string> 

class Zombie
{
    private:
        std::string m_name;
    public:
        Zombie();
        Zombie(std::string name);
        void announce() const;
        void setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );


#endif