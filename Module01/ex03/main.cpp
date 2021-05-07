# include <string>
# include "Zombie.hpp"
# include "ZombieHorde.hpp"

int		main()
{
	ZombieHorde boys = ZombieHorde(5);
	std::cout << std::endl;
	boys.annouceHorde();
	std::cout << std::endl;

	ZombieHorde boys2 = ZombieHorde(10);
	std::cout << std::endl;
	boys2.annouceHorde();
	std::cout << std::endl;

	ZombieHorde boys3 = ZombieHorde(0);
	std::cout << std::endl;	
	return (0);
}
