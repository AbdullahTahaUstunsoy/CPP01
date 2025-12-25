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
//delete ve destructor farkını araştır.

/*
Destructor kendi kendine çalışmaz. Onu tetikleyen şey delete[] komutudur. Süreç tam olarak şöyledir:
    Sen delete[] horde; dersin.
    Program, dizideki her bir zombi için tek tek Destructor'ı çağırır (zombiler "Hoşçakal dünya" der).
    Bütün zombilerin işi bittikten sonra, o N zombilik toplu bellek alanı işletim sistemine iade edilir.
*/
