#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP
	#include "Zombie.hpp"
	#include <ostream>

	class ZombieEvent
	{
	private:
		/* data */
	public:
		ZombieEvent(/* args */);
		~ZombieEvent();
		void setZombieType(std::string type);
	};
	
	

#endif // !ZOMBIEEVENT_HPP