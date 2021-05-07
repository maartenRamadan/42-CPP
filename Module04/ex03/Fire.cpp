#include "Fire.hpp"

Fire::Fire() : AMateria("fire")
{
	std::cout << "Fire constructed" << std::endl;
	return ;
}

Fire::Fire(const Fire& rhs) : AMateria("fire")
{	
	*this = rhs;
	return ;
}

Fire&
Fire::operator=(const Fire& rhs)
{
	(void)rhs;
	return *this;
}

Fire::~Fire()
{
	std::cout << "Fire destructed" << std::endl;
	return ;
}

Fire*
Fire::clone() const
{
	return new Fire;
}
