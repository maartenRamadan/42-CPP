/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: Marty <Marty@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/01 10:28:28 by Marty         #+#    #+#                 */
/*   Updated: 2021/01/20 12:42:07 by Marty         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void
ZombieEvent::randomChump()
{
	static int check = 0;

	if (check == 0)
	{
		srand(time(NULL));
		check++;
	}
	int i = rand() % 9;
	std::string name[] = { "Fritsie", "Henkie", "Sjakie", "Kareltje", "Ruurd", "Michel", "Wimpie", "Ferdinand", "Hans" };

	Zombie randomZombie(name[i], "random zombie");
	randomZombie.announce();
}

Zombie
*ZombieEvent::newZombie(std::string name)
{
	try {
		Zombie *nieuweBoy = new Zombie(name, this->_type);
		return (nieuweBoy);
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return NULL;
}

void
ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
	return ;
}

std::string
ZombieEvent::getZombieType()
{
	return (this->_type);
}
