#include "HumanA.hpp"
# include <sstream>

HumanA::HumanA(std::string n, Weapon &t) : _name(n), _weaponA(t)
{
	std::cout	<< "HumanA: " << this->_name << " created with weapon: \"" 
				<< this->_weaponA.getType() << "\""<< std::endl;
	return ;
}

HumanA::~HumanA()
{
	std::cout << "HumanA: " << this->_name << " destroyed" << std::endl;
	return ;
}

void
HumanA::attack()
{
	std::cout	<< this->_name << " attacks with his " 
				<< this->_weaponA.getType() << std::endl;
	return ;
}
