#include "Victim.hpp"

Victim::Victim(std::string n) : _name(n)
{
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
	return ;
}

Victim::Victim(const Victim& rhs)
{
	*this = rhs;
	std::cout << "Victim " << this->_name << " copied" << std::endl;
	return ;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
	return ;
}

Victim&
Victim::operator=(const Victim& rhs)
{
	this->_name = rhs._name;
    return *this;
}

std::string
Victim::getName() const
{
	return this->_name;
}

void
Victim::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
	return ;
}

std::ostream&
operator<<(std::ostream& o, const Victim& rhs)
{
	o << "I am " << rhs.getName() << " and I like otters!" << std::endl;
	return o;
}
