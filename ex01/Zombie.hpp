#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string> 

class Zombie
{
    private:
        std::string m_name;
    public:
        Zombie(); //default constructor ekledim çünkü dizi oluşturulurken parametresiz constructor çağrılır
        Zombie(std::string name); //nesne silindiğinde kendi kendine kaybolmayan kaynak varsa o zaman destructor çağrılır bu durumda gerek yok
        void announce() const; //const ekledim çünkü const, içinde bulunduğu sınıfın üye değişkenlerini (örneğin m_name) asla değiştirmeyeceğini garanti eder
        void setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );


#endif