#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string n, std::string t) : _name(n), _title(t)
{
	std::cout << this->_name << ", " << this->_title << " is born!" << std::endl;
	return ;
}

Sorcerer::Sorcerer(const Sorcerer& rhs)
{
	*this = rhs;
	std::cout << "Sorcerer " << this->_name << " copied" << std::endl;
	return ;
}


Sorcerer::~Sorcerer()
{
	std::cout << this->_name << ", " << this->_title << " is dead. Consequences will never be the same!" << std::endl;
	return ;
}

Sorcerer&
Sorcerer::operator=(const Sorcerer& rhs)
{
	this->_name = rhs._name;
	this->_title = rhs._title;
    return *this;
}

std::ostream&
operator<<(std::ostream& o, const Sorcerer& rhs)
{
	o << "I am " << rhs.getName() << ", " << rhs.getTitle() << " and I like ponies!" << std::endl;
	return o;
}

std::string
Sorcerer::getName() const
{
	return this->_name;
}

std::string
Sorcerer::getTitle() const
{
	return this->_title;
}

void
Sorcerer::polymorph(const Victim& rhs) const
{
	rhs.getPolymorphed();
	return ;
}
