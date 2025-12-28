#include "Zombie.hpp"
#include <iostream>

void test(int N, Zombie *horde)
{
    int i;

    i = 0;
    while(i < N)
    {
        horde[i].announce();
        i++;
    }
}

int main()
{
    int N;
    std::string name;
    Zombie *horde;

    N = 5;
    name = "Zombie";
    horde = zombieHorde(N, name);
    test(N,horde);
    delete[] horde;
    return (0);
}