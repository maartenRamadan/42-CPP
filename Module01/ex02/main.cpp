# include <string>
# include <cstdlib>
# include "Zombie.hpp"
# include "ZombieEvent.hpp"

int		main(void)
{
	ZombieEvent 	event;
	Zombie			*boy;

	{
		event.setZombieType("dumb zombie");
		boy = event.newZombie("Sjakie");
		boy->announce();
		delete boy;
	}
	std::cout << std::endl << std::endl;

	{
		event.setZombieType("dumber zombie");
		boy = event.newZombie("Frits");
		boy->announce();
		delete boy;
	}
	std::cout << std::endl << std::endl;

	{
		event.setZombieType("dumbest zombie");
		boy = event.newZombie("Harrie");
		boy->announce();
		delete boy;
	}
	std::cout << std::endl << std::endl;

	event.randomChump();
	std::cout << std::endl << std::endl;

	event.randomChump();
	std::cout << std::endl << std::endl;

	event.randomChump();
	return (0);
}