#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
	return ;
}

RadScorpion::RadScorpion(const RadScorpion& rhs)
{
	*this = rhs;
	return ;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
	return ;
}

RadScorpion&
RadScorpion::operator=(const RadScorpion& rhs)
{
	this->hp = rhs.hp;
	this->type = rhs.type;
	return *this;
}
