#include "AWeapon.hpp"

AWeapon::AWeapon(const std::string& n, int d, int apc)
: name(n), damage(d), APCost(apc)
{
	std::cout << "Weapon constructed" << std::endl;
	return ;
}

AWeapon::AWeapon(const AWeapon& rhs)
{
	*this = rhs;
	return ;
}

AWeapon::~AWeapon()
{
	std::cout << "Weapon destructed" << std::endl;
	return ;
}

AWeapon&
AWeapon::operator=(const AWeapon& rhs)
{
	this->name = rhs.name;
	this->damage = rhs.damage;
	this->APCost = rhs.APCost;
	return *this;
}

std::string
AWeapon::getName() const
{
	return this->name;
}

int
AWeapon::getAPCost() const
{
	return this->APCost;
}

int
AWeapon::getDamage() const
{
	return this->damage;
}

std::ostream&
operator<<(std::ostream& o, const AWeapon& rhs)
{
	o << rhs.getName() << ", " << rhs.getDamage() << ", " << rhs.getAPCost() << std::endl;
	return o;
}
