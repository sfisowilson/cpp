#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

    #include "Zombie.hpp"

    class ZombieHorde
    {
    private:
        Zombie **zombies;
        int zombieLen;

    public:
        ZombieHorde(int N);
        ~ZombieHorde();
        void announce();
    };

#endif
