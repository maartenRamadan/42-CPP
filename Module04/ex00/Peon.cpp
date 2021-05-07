#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
	return ;
}

Peon::Peon(const Peon& rhs)
{
	*this = rhs;
	std::cout << "Peon " << this->_name << " copied" << std::endl;
	return ;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
	return ;
}

Peon&
Peon::operator=(const Peon& rhs)
{
	this->_name = rhs._name;
    return *this;
}

void
Peon::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
	return ;
}
