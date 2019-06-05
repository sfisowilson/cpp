#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
    srand(time(0));
    ZombieEvent zombie;
    Zombie *zombies[5];
    zombie.ZombieType = "bold";
    Zombie *ben = zombie.newZombie("Beeen");
    ben->announce();

    zombies[0] = zombie.randomChump();
    zombies[1] =  zombie.randomChump();
    
    zombie.ZombieType = "headless";
    Zombie *mat = zombie.newZombie("Maaat");
    mat->announce();    

    zombies[2] =  zombie.randomChump();
    zombies[3] =  zombie.randomChump();
    zombies[4] =  zombie.randomChump();

    for (int i = 0; i < 5; i++)
    {
        delete zombies[i];
    }

    return 0;
}
