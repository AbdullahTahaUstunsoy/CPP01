#include "Zombie.hpp"

int main()
{
    Zombie* zombie1;
    
    zombie1 =newZombie("HeapZombie");
    zombie1->announce();
    randomChump("StackZombie");
    delete zombie1;
    return 0;
}