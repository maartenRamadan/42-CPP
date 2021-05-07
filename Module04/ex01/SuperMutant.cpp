#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "SuperMutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	return ;
}

SuperMutant::SuperMutant(const SuperMutant& rhs)
{
	*this = rhs;
	return ;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
	return ;
}

SuperMutant&
SuperMutant::operator=(const SuperMutant& rhs)
{
	this->hp = rhs.hp;
	this->type = rhs.type;
	return *this;
}

void
SuperMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
	return ;
}