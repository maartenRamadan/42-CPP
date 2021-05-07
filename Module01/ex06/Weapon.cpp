#include "Weapon.hpp"

Weapon::Weapon(std::string t) : _type(t)
{
	std::cout << "Weapon created" << std::endl;
	return ;
}

Weapon::~Weapon()
{
	std::cout << "Weapon destroyed" << std::endl;
	return ;
}

void
Weapon::setType(std::string t)
{
	this->_type = t;
	std::cout << "Weapon type set to: \"" << t << "\"" << std::endl;
	return ;
}

const std::string&
Weapon::getType()
{
	return (this->_type);
}
