#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <string>
# include "Zombie.hpp"

class ZombieEvent
{
	std::string 	_type;

	public:
		ZombieEvent() {};
		~ZombieEvent() {};
	
		Zombie*			newZombie(std::string name);
		void	 		randomChump();
		void			setZombieType(std::string type);
		std::string		getZombieType();	
};

#endif