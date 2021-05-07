#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice constructed" << std::endl;
	return ;
}

Ice::Ice(const Ice& rhs) : AMateria("ice")
{
	std::cout << "Ice copy constructor" << std::endl;
	*this = rhs;
	return ;
}

Ice&
Ice::operator=(const Ice& rhs)
{
	(void)rhs;
	return *this;
}

Ice::~Ice()
{
	std::cout << "Ice destructed" << std::endl;
	return ;
}

Ice*
Ice::clone() const
{
	return new Ice;
}
