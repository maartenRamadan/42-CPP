#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int		main()
{
	SuperTrap freddie("freddie");
	std::cout << std::endl;

	std::cout	<< "name: " 	<< freddie.getName()		<< std::endl
				<< "HP: " 		<< freddie.getHP()			<< std::endl
				<< "Max HP: " 	<< freddie.getMaxHP()		<< std::endl
				<< "EP: " 		<< freddie.getEP()			<< std::endl
				<< "Max EP: " 	<< freddie.getMaxEP()		<< std::endl
				<< "Level: " 	<< freddie.getLevel()		<< std::endl
				<< "MAD: " 		<< freddie.getMAD()			<< std::endl
				<< "RAD: " 		<< freddie.getRAD()			<< std::endl
				<< "Armor: " 	<< freddie.getArmor()		<< std::endl << std::endl;

	SuperTrap fritsie("fritsie");
	std::cout << std::endl;

	std::cout << "HP freddie: " << freddie.getHP() << std::endl;
	std::cout << "HP fritsie: " << fritsie.getHP() << std::endl;
	std::cout << std::endl;

	fritsie.meleeAttack(freddie.getName());
	freddie.takeDamage(fritsie.getMeleeDamage());
	std::cout << std::endl;

	fritsie.rangedAttack(freddie.getName());
	freddie.takeDamage(fritsie.getRangeDamage());
	std::cout << std::endl;

	std::cout << "HP freddie: " << freddie.getHP() << std::endl;
	std::cout << "HP fritsie: " << fritsie.getHP() << std::endl;

	fritsie = freddie;

	std::cout << "HP freddie: " << freddie.getHP() << std::endl;
	std::cout << "HP fritsie: " << fritsie.getHP() << std::endl;
	std::cout << std::endl;

	SuperTrap harry(freddie);

	std::cout << harry.getHP() << std::endl;
	std::cout << std::endl;

	FragTrap freek("freek");

	freddie.ninjaShoeBox(freek);
	freddie.vaulthunter_dot_exe(fritsie.getName());
	std::cout << std::endl;

	return (0);
}
