#include "FragTrap.hpp"

int		main()
{
	FragTrap frits("Frits");
	FragTrap gert("Gert");
	std::cout << std::endl;

	frits.meleeAttack(gert.getName());
	gert.takeDamage(frits.getMeleeDamage());
	std::cout << std::endl;

	gert.rangedAttack(frits.getName());
	frits.takeDamage(gert.getRangeDamage());
	std::cout << std::endl;

	gert.beRepaired(10);
	frits.vaulthunter_dot_exe(gert.getName());
	gert.takeDamage(frits.getVaulthunterDamage());
	std::cout << std::endl;

	frits.beRepaired(10);
	gert.vaulthunter_dot_exe(frits.getName());
	frits.takeDamage(gert.getVaulthunterDamage());
	std::cout << std::endl;

	frits.vaulthunter_dot_exe(gert.getName());
	gert.takeDamage(frits.getVaulthunterDamage());
	std::cout << std::endl;

	frits.vaulthunter_dot_exe(gert.getName());
	gert.takeDamage(frits.getVaulthunterDamage());
	std::cout << std::endl;

	frits.vaulthunter_dot_exe(gert.getName());
	gert.takeDamage(frits.getVaulthunterDamage());
	std::cout << std::endl;

	frits.vaulthunter_dot_exe(gert.getName());
	gert.takeDamage(frits.getVaulthunterDamage());
	std::cout << std::endl;

	FragTrap ruurd("Ruurd");
	std::cout << std::endl;

	frits.vaulthunter_dot_exe(ruurd.getName());
	ruurd.takeDamage(frits.getVaulthunterDamage());
	std::cout << std::endl;
	return (0);
}
