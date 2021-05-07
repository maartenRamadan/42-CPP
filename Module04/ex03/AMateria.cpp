#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(const std::string& type) : _name(type), _xp(0)
{
	std::cout << "AMateria constructed" << std::endl;
	return ;
}

AMateria::AMateria(const AMateria& rhs)
{
	*this = rhs;
	return ;
}

AMateria&
AMateria::operator=(const AMateria& rhs)
{
	this->_xp = rhs.getXP();
	this->_name = rhs.getType();
	return *this;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructed" << std::endl;
	return ;
}

const std::string&
AMateria::getType() const
{
	return this->_name;
}

unsigned int
AMateria::getXP() const 
{
	return this->_xp;
}

void
AMateria::use(ICharacter& target)
{
	ICharacter* tmp = &target;
	if (!tmp)
	{
		std::cout << "No target" << std::endl;
		return ;
	}
	this->_xp += 10;
	if (this->getType() == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (this->getType() == "cure")
		std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
	else if (this->getType() == "fire")
		std::cout << "* shoots an fire ball at " << target.getName() << " *" << std::endl;
	else
		std::cout << "* uses unknown type at " << target.getName() << " *" << std::endl;
	return ;
}
