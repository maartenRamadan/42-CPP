#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main()
{
	FragTrap frits("Frits");
	ScavTrap ruurd("Ruurd");
	std::cout << std::endl;

	ruurd.challangeNewComer(frits.getName());
	std::cout << std::endl;
	ruurd.challangeNewComer(frits.getName());
	std::cout << std::endl;
	
	ruurd.rangedAttack(frits.getName());
	frits.takeDamage(ruurd.getRangeDamage());
	std::cout << std::endl;

	frits.meleeAttack(ruurd.getName());
	ruurd.takeDamage(frits.getMeleeDamage());
	std::cout << std::endl;

	FragTrap frans("Frans");
	ruurd.challangeNewComer(frans.getName());
	std::cout << std::endl;

	frans.meleeAttack(ruurd.getName());
	ruurd.takeDamage(frans.getMeleeDamage());
	std::cout << std::endl;

	frans.meleeAttack(ruurd.getName());
	ruurd.takeDamage(frans.getMeleeDamage());
	std::cout << std::endl;

	frans.rangedAttack(ruurd.getName());
	ruurd.takeDamage(frans.getRangeDamage());
	std::cout << std::endl;

	frans.rangedAttack(ruurd.getName());
	ruurd.takeDamage(frans.getRangeDamage());
	std::cout << std::endl;

	ruurd.rangedAttack(frans.getName());
	std::cout << std::endl;

	return (0);
}
