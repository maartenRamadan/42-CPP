#include "HumanB.hpp"
# include <sstream>

HumanB::HumanB(std::string n) : _name(n)
{
	std::cout << "HumanB: " << this->_name << " created"<< std::endl;
	return ;
}

HumanB::~HumanB(void)
{
	std::cout << "HumanB: " << this->_name << " destroyed" << std::endl;
	return ;
}

void
HumanB::setWeapon(Weapon& w)
{
	this->_weaponB = &w;
	std::cout 	<< this->_name << "'s weapon set to: \"" 
				<< this->_weaponB->getType() << "\""<< std::endl;
	return ;
}

void
HumanB::attack(void)
{
	std::cout	<< this->_name << " attacks with his "
				<< this->_weaponB->getType() << std::endl;
	return ;
}
