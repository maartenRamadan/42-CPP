#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int		main()
{
	ClapTrap freddie("Freddie");
	ScavTrap freek("Freek");
	FragTrap gert("Gert");
	NinjaTrap henkie("Henkie");
	NinjaTrap hans("Hans");
	std::cout << std::endl;

	ClapTrap *hennie = new FragTrap("hennie");
	delete hennie;
	std::cout << std::endl;

	henkie.ninjaShoeBox(gert);
	henkie.ninjaShoeBox(freek);
	henkie.ninjaShoeBox(freddie);
	std::cout << std::endl;

	std::cout << "EP hans: " << hans.getEP() << std::endl;
	std::cout << "EP henkie: " << henkie.getEP() << std::endl;
	henkie.ninjaShoeBox(hans);
	henkie.ninjaShoeBox(hans);
	std::cout << "EP hans: " << hans.getEP() << std::endl;
	std::cout << "EP henkie: " << henkie.getEP() << std::endl;
	std::cout << std::endl;

	return (0);
}
