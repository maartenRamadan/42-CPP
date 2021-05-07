#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 50, 8)
{
	std::cout << "PowerFist created" << std::endl;
	return ;
}

PowerFist::PowerFist(const PowerFist& rhs)
{
	*this = rhs;
	return ;
}

PowerFist::~PowerFist()
{
	std::cout << "PowerFist destructed" << std::endl;
	return ;
}

PowerFist&
PowerFist::operator=(const PowerFist& rhs)
{
	this->name = rhs.name;
	this->damage = rhs.damage;
	this->APCost = rhs.APCost;
	return *this;
}

void
PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
	return ;
}