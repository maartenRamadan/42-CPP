#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 21, 5)
{
	std::cout << "PlasmaRifle created" << std::endl;
	return ;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle& rhs)
{
	*this = rhs;
	return ;
}

PlasmaRifle::~PlasmaRifle()
{
	std::cout << "PlasmaRifle destructed" << std::endl;
	return ;
}

PlasmaRifle&
PlasmaRifle::operator=(const PlasmaRifle& rhs)
{
	this->name = rhs.getName();
	this->damage = rhs.getDamage();
	this->APCost = rhs.getAPCost();
	return *this;
}

void
PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
	return ;
}