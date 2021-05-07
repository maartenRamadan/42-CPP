#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");

		HumanA bob("Bob", club);
		bob.attack();
		std::cout << std::endl;

		club.setType("some other type of club");
		bob.attack();
		std::cout << std::endl;
	}
	std::cout << std::endl << std::endl;
	{
		Weapon club = Weapon("crude spiked club");

		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		std::cout << std::endl;
	
		club.setType("some other type of club");
		jim.attack();
		std::cout << std::endl;
	}
	return (0);
}