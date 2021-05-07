#include "Zombie.hpp"

void
Zombie::setName(std::string name)
{
	this->_name = name;
	return ;
}

void
Zombie::setType(std::string type)
{
	this->_type = type;
	return ;
}

Zombie::Zombie()
{
	std::cout << "Zombie created" << std::endl;
	return ;
}

Zombie::~Zombie()
{
	std::cout	<< "< " << this->_name 
				<< " got shot in the face" << std::endl;
	return ;
}

void
Zombie::announce()
{	
	std::cout	<< "> " << this->_name << " (" << this->_type
				<< ") says: " << "Haaaaaai :D" << std::endl;
	return ;
}
