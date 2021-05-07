#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure constructed" << std::endl;
	return ;
}

Cure::Cure(const Cure& rhs) : AMateria("cure")
{
	*this = rhs;
	return ;
}

Cure&
Cure::operator=(const Cure& rhs)
{
	(void)rhs;
	return *this;
}

Cure::~Cure()
{
	std::cout << "Cure destructed" << std::endl;
	return ;
}

Cure*
Cure::clone() const
{
	return new Cure;
}
