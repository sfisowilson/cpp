#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP
	#include "Zombie.hpp"
	#include <ostream>
	#include <ctime>
	#include <cstdlib>

	class ZombieEvent
	{
	private:
		/* data */
	public:
		ZombieEvent(/* args */);
		~ZombieEvent();
		void setZombieType(std::string type);
		void setZombieEventType(std::string type);
		Zombie *newZombie(std::string name);
		Zombie *randomChump();
		std::string getZombieType();

		std::string ZombieType;

	};

#endif