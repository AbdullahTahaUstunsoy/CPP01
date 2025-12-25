#include "Zombie.hpp"

/*
Now, what is the actual point of the exercise? You have to determine in which case
it is better to allocate zombies on the stack or the heap.
*/

int main()
{
    Zombie* zombie1;
    
    zombie1 =newZombie("HeapZombie");
    zombie1->announce();
    randomChump("StackZombie");
    delete zombie1;
    return 0;
}